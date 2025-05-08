class Division {
    private int num1;
    private int num2;

    // Setters
    public void setNum1(int num1) {
        this.num1 = num1;
    }

    public void setNum2(int num2) {
        this.num2 = num2;
    }

    // Getters
    public int getNum1() {
        return num1;
    }

    public int getNum2() {
        return num2;
    }

    // Division method
    public double divide() {
        return (double) num1 / num2;
    }
}

public class DivisionDemo {
    public static void main(String[] args) {
        Division div = new Division();

        System.out.println("Automatic division from 10/9 to 1/0:");

        for (int i = 10; i >= 1; i--) {
            int num1 = i;
            int num2 = i - 1;

            div.setNum1(num1);
            div.setNum2(num2);

            System.out.println("Dividing " + num1 + " by " + num2 + "...");

            try {
                double result = div.divide();
                System.out.println("Result: " + result);
            } catch (ArithmeticException e) {
                System.out.println("Error: Division by zero occurred!");
            }

            if (num2 == 0) {
                System.out.println("Division by zero attempt detected. Stopping.");
                break;
            }

            System.out.println("---------------------------");
        }
    }
}
