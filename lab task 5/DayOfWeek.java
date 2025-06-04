import java.util.Scanner;

public class DayOfWeek {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a number (1-7): ");
        int day = scanner.nextInt();

        String dayName;
        String type;

        switch (day) {
            case 1:
                dayName = "Monday";
                type = "Weekday";
                break;
            case 2:
                dayName = "Tuesday";
                type = "Weekday";
                break;
            case 3:
                dayName = "Wednesday";
                type = "Weekday";
                break;
            case 4:
                dayName = "Thursday";
                type = "Weekday";
                break;
            case 5:
                dayName = "Friday";
                type = "Weekday";
                break;
            case 6:
                dayName = "Saturday";
                type = "Weekend";
                break;
            case 7:
                dayName = "Sunday";
                type = "Weekend";
                break;
            default:
                dayName = "Invalid input";
                type = "";
        }

        if (day >= 1 && day <= 7) {
            System.out.println("Day: " + dayName);
            System.out.println("Type: " + type);
        } else {
            System.out.println(dayName);
        }
    }
}
