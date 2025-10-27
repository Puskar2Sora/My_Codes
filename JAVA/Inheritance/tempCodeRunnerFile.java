import java.util.Random;
import java.util.Scanner;

public class GuessTheNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        
        int lowerBound = 1;
        int upperBound = 100;
        int numberToGuess = random.nextInt(upperBound - lowerBound + 1) + lowerBound;
        int numberOfTries = 0;
        boolean hasGuessedCorrectly = false;

        System.out.println("Welcome to 'Guess the Number'!");
        System.out.println("I have selected a number between " + lowerBound + " and " + upperBound + ". Can you guess it?");

        while (!hasGuessedCorrectly) {
            System.out.print("Enter your guess: ");
            int playerGuess = scanner.nextInt();
            numberOfTries++;

            if (playerGuess < lowerBound || playerGuess > upperBound) {
                System.out.println("Please guess a number within the range!");
            } else if (playerGuess < numberToGuess) {
                System.out.println("Too low! Try again.");
            } else if (playerGuess > numberToGuess) {
                System.out.println("Too high! Try again.");
            } else {
                hasGuessedCorrectly = true;
                System.out.println("Congratulations! You've guessed the number " + numberToGuess + " in " + numberOfTries + " tries.");
            }
        }

        scanner.close();
    }
}
