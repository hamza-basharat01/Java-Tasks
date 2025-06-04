public class Hello {
    public static void main(String[] args) {
        if (args.length > 0) {
            // Store user's name in StringBuffer
            StringBuffer name = new StringBuffer();
            name.append(args[0]); // Append the command-line argument

            // Print the personalized greeting
            System.out.println("Hello, " + name);
        } else {
            System.out.println("Hello, world");
        }
    }
}
