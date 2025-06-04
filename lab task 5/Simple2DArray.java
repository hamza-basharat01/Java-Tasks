import java.util.Scanner;
public class Simple2DArray {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int[][] table_data = new int[2][2];

        System.out.println("Enter numbers for the 2x2 table:");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print("Enter value for position [" + i + "][" + j + "]: ");
                table_data[i][j] = scanner.nextInt();
            }
        }
        System.out.println("\nThe table data:");
        for (int i = 0; i < 2; i++) {
            for (int j = 0; j < 2; j++) {
                System.out.print(table_data[i][j] + " ");
            }
            System.out.println();
        }
        System.out.println("\nTable data in reverse order:");
        for (int i = 1; i >= 0; i--) {
            for (int j = 1; j >= 0; j--) {
                System.out.print(table_data[i][j] + " ");
            }
            System.out.println();
        }
    }
}
