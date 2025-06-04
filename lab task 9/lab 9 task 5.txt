import java.util.Scanner;

public class Division {
    private int num1;
    private int num2;

    // Getter and Setter for num1
    public void setNum1(int num1) {
        this.num1 = num1;
    }

    public int getNum1() {
        return num1;
    }

    // Getter and Setter for num2
    public void setNum2(int num2) {
        this.num2 = num2;
    }

    public int getNum2() {
        return num2;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Division obj = new Division();

        System.out.print("Enter first number (Num1): ");
        obj.setNum1(input.nextInt());

        System.out.print("Enter second number (Num2): ");
        obj.setNum2(input.nextInt());

        int num1 = obj.getNum1();
        int num2 = obj.getNum2();

        // Loop until num2 becomes 0
        while (num2 >= 0) {
            try {
                int result = num1 / num2;
                System.out.println(num1 + " / " + num2 + " = " + result);
            } catch (ArithmeticException e) {
                System.out.println("Error: Cannot divide by zero!");
            }

            num2--; // Decrease num2 by 1
            obj.setNum2(num2); // Update the object with new num2
        }

        input.close();
    }
}
