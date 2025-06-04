public class ShapeTest {

    // Interface
    interface Draw {
        void draw();
    }

    // Interface extending Draw
    interface Shape extends Draw {
        String shapeType();
        double calculateArea();
    }

    // Rectangle class
    static class Rectangle implements Shape {
        double length;
        double width;

        public Rectangle(double length, double width) {
            this.length = length;
            this.width = width;
        }

        public void draw() {
            System.out.println("Drawing a Rectangle");
        }

        public String shapeType() {
            return "Rectangle";
        }

        public double calculateArea() {
            return length * width;
        }
    }

    // Circle class
    static class Circle implements Shape {
        double radius;
        final double PI = 3.14159;

        public Circle(double radius) {
            this.radius = radius;
        }

        public void draw() {
            System.out.println("Drawing a Circle");
        }

        public String shapeType() {
            return "Circle";
        }

        public double calculateArea() {
            return PI * radius * radius;
        }
    }

    // Square class
    static class Square implements Shape {
        double length;
        double width;

        public Square(double length, double width) {
            this.length = length;
            this.width = width;
        }

        public void draw() {
            System.out.println("Drawing a Square");
        }

        public String shapeType() {
            return "Square";
        }

        public double calculateArea() {
            return length * width;
        }
    }

    // Main method
    public static void main(String[] args) {
        Rectangle rect = new Rectangle(5, 3);
        Circle circ = new Circle(4);
        Square sq = new Square(4, 4);

        rect.draw();
        System.out.println("Shape: " + rect.shapeType());
        System.out.println("Area: " + rect.calculateArea());

        circ.draw();
        System.out.println("Shape: " + circ.shapeType());
        System.out.println("Area: " + circ.calculateArea());

        sq.draw();
        System.out.println("Shape: " + sq.shapeType());
        System.out.println("Area: " + sq.calculateArea());
    }
}
