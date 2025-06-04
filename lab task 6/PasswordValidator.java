import java.util.Scanner;

public class PasswordValidator {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter your password: ");
        String password = scanner.nextLine();

        if (password.length() < 6) {
            System.out.println("Password must be at least 6 characters long.");
        } else if (!containsUpperCase(password)) {
            System.out.println("Password must contain at least one uppercase letter.");
        } else if (!containsLowerCase(password)) {
            System.out.println("Password must contain at least one lowercase letter.");
        } else if (!containsDigit(password)) {
            System.out.println("Password must contain at least one digit.");
        } else {
            System.out.println("Password is valid!");
        }
    }

    public static boolean containsUpperCase(String password) {
        for (char c : password.toCharArray()) {
            if (Character.isUpperCase(c)) {
                return true;
            }
        }
        return false;
    }
    public static boolean containsLowerCase(String password) {
        for (char c : password.toCharArray()) {
            if (Character.isLowerCase(c)) {
                return true;
            }
        }
        return false;
    }
    public static boolean containsDigit(String password) {
        for (char c : password.toCharArray()) {
            if (Character.isDigit(c)) {
                return true;
            }
        }
        return false;
    }
}