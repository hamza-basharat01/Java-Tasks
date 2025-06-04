public class StringFilter {
    public static void main(String[] args) {
        String input = "abrambabasc";


        String result = input.replace("b", "").replace("ac", "");


        System.out.println("The given string is: " + input);
        System.out.println("After removing 'b' and 'ac', the new string is: " + result);
    }
}
