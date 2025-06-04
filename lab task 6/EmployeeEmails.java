public class EmployeeEmails {
    public static void main(String[] args) {
        // Predefined employee names and emails
        String[][] employeeData = {
                {"Ali", "ali@example.com"},
                {"Ahmad", "ahmad@example.com"},
                {"Hamza", "hamza@example.com"}
        };

        // Using StringBuffer without creating it separately
        StringBuffer employees = new StringBuffer();

        // Storing employee details
        for (int i = 0; i < employeeData.length; i++) {
            employees.append("Employee ").append(i + 1).append(": ")
                    .append(employeeData[i][0]).append(", Email: ")
                    .append(employeeData[i][1]).append("\n");
        }

        // Printing stored employee details
        System.out.println("\nEmployee Details:\n" + employees);
    }
}
