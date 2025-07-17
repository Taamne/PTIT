package J04002;

import java.util.Scanner;

public class test {

    public static class Rectangle {
        private int width, height;
        private String color;

        public Rectangle(int height, int width, String color) {
            this.color = color;
            this.height = height;
            this.width = width;
        }

        public int getWidth() {
            return width;
        }

        public int getHeight() {
            return height;
        }

        public String getColor() {
            return color;
        }

        public int findArea() {
            return this.height * this.width;
        }

        public int findPerimeter() {
            return (this.width + this.height) * 2;
        }

        public String toString() {
            String s = String.valueOf(this.color.charAt(0)).toUpperCase() + this.color.substring(1);
            return String.format("%d %d %s", findPerimeter(), findArea(), s);
        }
    }

    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);

        String color = ip.nextLine();

        int height = ip.nextInt();
        int width = ip.nextInt();
        ip.nextLine();

        Rectangle rectangle = new Rectangle(height, width, color);

        if (rectangle.getWidth() <= 0 || rectangle.getHeight() <= 0) {
            System.out.println("INVALID");
        } else {
            System.out.println(rectangle.toString());
        }

        ip.close();
    }
}