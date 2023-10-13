import java.util.Scanner;

class Circle {
    int radius;
    double area, perimeter;

    void getArea() {
        area = 3.14 * radius * radius;
        System.out.println("The area of the circle is " + area);
    }

    void getPerimeter() {
        perimeter = 2 * 3.14 * radius;
        System.out.println("The perimeter of the circle is " + perimeter);
    }
}

class Main {
    public static void main(String[] args) {
        Circle obj = new Circle(); // Create an instance of the Circle class
        Scanner radi = new Scanner(System.in);

        System.out.print("Enter the radius of the circle: ");
        obj.radius = radi.nextInt();

        obj.getArea();
        obj.getPerimeter();
    }
}

