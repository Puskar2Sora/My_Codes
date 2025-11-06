import os
import shutil
import time
import json
from datetime import datetime

# 🎨 (Optional) Colored terminal output
try:
    from colorama import init, Fore
    init(autoreset=True)
except ImportError:
    class Fore:
        GREEN = YELLOW = RED = CYAN = RESET = ""

# 📁 File categories
FILE_TYPES = {
    "Images": [".jpg", ".jpeg", ".png", ".gif", ".bmp", ".svg"],
    "Videos": [".mp4", ".mov", ".avi", ".mkv", ".flv"],
    "Documents": [".pdf", ".docx", ".txt", ".pptx", ".xlsx"],
    "Music": [".mp3", ".wav", ".flac"],
    "Archives": [".zip", ".rar", ".tar", ".gz"],
    "Code": [".py", ".c", ".cpp", ".js", ".html", ".css", ".java"],
    "Others": []
}

LOG_FILE = "organizer_log.json"

# 📦 Progress bar function
def progress_bar(iteration, total, prefix='', suffix='', length=30):
    percent = f"{100 * (iteration / float(total)):.1f}"
    filled_length = int(length * iteration // total)
    bar = '█' * filled_length + '-' * (length - filled_length)
    print(f'\r{prefix} |{bar}| {percent}% {suffix}', end='\r')
    if iteration == total:
        print()

# 🧠 Save actions for undo
def save_log(actions):
    with open(LOG_FILE, "w") as log:
        json.dump(actions, log, indent=4)

# 🔙 Undo last organization
def undo_last():
    if not os.path.exists(LOG_FILE):
        print(Fore.RED + "❌ No previous log found.")
        return

    with open(LOG_FILE, "r") as log:
        actions = json.load(log)

    for entry in actions:
        if os.path.exists(entry["new_path"]):
            shutil.move(entry["new_path"], entry["old_path"])
            print(Fore.YELLOW + f"↩️ Restored: {entry['file']}")

    os.remove(LOG_FILE)
    print(Fore.GREEN + "\n✅ Undo completed! Files restored to original locations.\n")

# 🚀 Organize files
def organize_files(folder):
    if not os.path.exists(folder):
        print(Fore.RED + "❌ Folder does not exist.")
        return

    actions = []
    files = [f for f in os.listdir(folder) if os.path.isfile(os.path.join(folder, f))]
    total_files = len(files)
    if total_files == 0:
        print(Fore.YELLOW + "⚠️ No files found in this folder.")
        return

    print(Fore.CYAN + f"\n📂 Organizing {total_files} files...\n")
    time.sleep(1)

    for i, filename in enumerate(files, start=1):
        file_path = os.path.join(folder, filename)
        moved = False

        for category, extensions in FILE_TYPES.items():
            if any(filename.lower().endswith(ext) for ext in extensions):
                dest_folder = os.path.join(folder, category)
                os.makedirs(dest_folder, exist_ok=True)

                new_path = os.path.join(dest_folder, filename)
                shutil.move(file_path, new_path)

                actions.append({"file": filename, "old_path": file_path, "new_path": new_path})
                print(Fore.GREEN + f"✅ Moved: {filename} → {category}/")
                moved = True
                break

        if not moved:
            dest_folder = os.path.join(folder, "Others")
            os.makedirs(dest_folder, exist_ok=True)
            new_path = os.path.join(dest_folder, filename)
            shutil.move(file_path, new_path)
            actions.append({"file": filename, "old_path": file_path, "new_path": new_path})
            print(Fore.YELLOW + f"📦 Moved: {filename} → Others/")

        progress_bar(i, total_files, prefix='Progress', suffix='Complete')

    save_log(actions)
    print(Fore.GREEN + "\n🎉 Folder organized successfully!")
    print(Fore.CYAN + f"📝 Log saved as: {LOG_FILE}\n")

# 🧭 Main Menu
def main():
    print(Fore.CYAN + "\n✨ Smart File Organizer v2.0 ✨")
    print(Fore.YELLOW + "--------------------------------------")
    print("1️⃣  Organize a folder")
    print("2️⃣  Undo last organization")
    print("3️⃣  Exit")
    print(Fore.YELLOW + "--------------------------------------")

    choice = input(Fore.CYAN + "\nEnter your choice (1/2/3): ").strip()

    if choice == "1":
        folder = input(Fore.CYAN + "\nEnter folder path to organize: ").strip()
        organize_files(folder)
    elif choice == "2":
        undo_last()
    elif choice == "3":
        print(Fore.YELLOW + "\n👋 Exiting... Goodbye!\n")
        exit()
    else:
        print(Fore.RED + "❌ Invalid choice, try again!\n")

if __name__ == "__main__":
    main()
