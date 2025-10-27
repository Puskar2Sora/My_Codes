import java.util.Random;
import java.util.Scanner;

public class GuessTheNumber {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Random random = new Random();
        
        int lowerBound = 1;
        int upperBound = 100;
        int numberToGuess =random.nextInt(upperBound - lowerBound + 1) + lowerBound;
        int numberOfTries = 0;
        boolean hasGuessedCorrectly = false;

        System.out.println("Welcome to 'Guess the Number'!");
        System.out.println("\n\n\t\t Dekh vaiiii ami akta number diachiii....seta " + lowerBound + " ar  " + upperBound + "\t\ter majh kahne.... \n tui ki seta guess korte parbii?? ");

        while (!hasGuessedCorrectly) {
            System.out.print("De vai.. ki number dibi deeee--");
            int playerGuess = scanner.nextInt();
            numberOfTries++;

            if (playerGuess < lowerBound || playerGuess > upperBound) {
                System.out.println("Eeeee vaiiii... je range ta diachi oi tar modhe number ta chose korrr!!!");
            } else if (playerGuess < numberToGuess) {
                System.out.println("Ektu besi niche chole gechis  norok e pouche jbiii.... Number ta arektu upor dike acheee");
            } else if (playerGuess > numberToGuess) {
                System.out.println("Ektu besiiii upor e chole heaven e pouche jbi... number ta arek tu nicher dike.. ");
            } else {
                hasGuessedCorrectly = true;
                System.out.println("Congratulations! You've guessed the number " + numberToGuess + " in " + numberOfTries + " tries.");
            }
        }

        scanner.close();
    }
}
