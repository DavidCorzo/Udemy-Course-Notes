public class IntegerThingsToLearn{
    public static void main(String[] args) {
        int myValue = 10000;

        // Minimum value for int
        int minimum = Integer.MIN_VALUE;
        int maximum = Integer.MAX_VALUE;
        System.out.println("Minimum: " + minimum);
        System.out.println("Maximum: " + maximum);
        // Output:
        /*
        * Minimum: -2147483648
        * Maximum: 2147483647
        */
        System.out.println("Max? " + (maximum + 1));
        System.out.println("Min? " + (minimum - 1));

        // Output:
        /*
        * Max? -2147483648
        * Min? 2147483647
        */

        // You can separate the positional int places like so:
        int separate = 2_147_483_647;

    }
}
