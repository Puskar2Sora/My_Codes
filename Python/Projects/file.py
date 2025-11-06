import os
import shutil

# 📂 Folder to organize
source_folder = input("Enter the folder path you want to organize: ").strip()

# 📁 Categories and extensions
file_types = {
    "Images": [".jpg", ".jpeg", ".png", ".gif", ".bmp", ".svg"],
    "Videos": [".mp4", ".mov", ".avi", ".mkv", ".flv"],
    "Documents": [".pdf", ".docx", ".txt", ".pptx", ".xlsx"],
    "Music": [".mp3", ".wav", ".flac"],
    "Archives": [".zip", ".rar", ".tar", ".gz"],
    "Code": [".py", ".c", ".cpp", ".js", ".html", ".css", ".java"],
    "Others": []
}

def organize_files(folder):
    if not os.path.exists(folder):
        print("❌ Folder does not exist.")
        return

    # Create category folders
    for category in file_types.keys():
        category_path = os.path.join(folder, category)
        os.makedirs(category_path, exist_ok=True)

    # Move files into correct folders
    for filename in os.listdir(folder):
        file_path = os.path.join(folder, filename)

        if os.path.isfile(file_path):
            moved = False
            for category, extensions in file_types.items():
                if any(filename.lower().endswith(ext) for ext in extensions):
                    shutil.move(file_path, os.path.join(folder, category, filename))
                    print(f"✅ Moved: {filename} → {category}/")
                    moved = True
                    break
            if not moved:
                shutil.move(file_path, os.path.join(folder, "Others", filename))
                print(f"📦 Moved: {filename} → Others/")

    print("\n🎉 Folder organized successfully!")

# Run the function
organize_files(source_folder)
