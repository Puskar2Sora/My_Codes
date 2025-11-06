import random

# List of words
words = ["apple", "mango", "orange", "queuee"]
print("Available words:", words)

# Randomly choose one word
chosen_word = random.choice(words).lower()
l = len(chosen_word)
g= ["_"] * l  # for display
used_letters = []

print("\nGuess the word! It has", l, "letters.")
print(" ".join(g))

# Maximum attempts
max_attempts = 10
attempts = 0

while attempts < max_attempts and "_" in g:
    guess = input("\nEnter your guess (single letter): ").lower()

    # Check for invalid input
    if len(guess) != 1 or not guess.isalpha():
        print("❌ Please enter a single alphabet.")
        continue

    if guess in used_letters:
        print("⚠️ You already guessed that letter!")
        continue

    used_letters.append(guess)
    attempts += 1

    # Check if letter is in the chosen word
    if guess in chosen_word:
        print("✅ Good guess!")
        for i in range(l):
            if chosen_word[i] == guess:
                g[i] = guess
    else:
        print("❌ Wrong guess!")

    print("Word:", " ".join(g))
    print("Used letters:", ", ".join(used_letters))
    print("Attempts left:", max_attempts - attempts)

# Check result
if "_" not in g:
    print("\n🎉 Congratulations! You guessed the word:", chosen_word)
else:
    print("\n😢 Out of attempts! The word was:", chosen_word)
