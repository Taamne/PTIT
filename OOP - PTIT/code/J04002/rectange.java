package J04002;

public class rectange {
    private  double width, high;
    private  String color;

    public rectange(String color, double high, double width) {
        this.color = color;
        this.high = high;
        this.width = width;
    }



    public double getWidth() {
        return width;
    }
    public double getHigh() {
        return high;
    }
    public String getColor() {
        return color;
    }
    public double finArea( ){
        return this.high * this.width;
    }
    public double findPerimeter( ){
        return (this.width = this.high) *2;
    }
    public String tostring(){
        String  s = String.valueOf(this.color.charAt(0)).toUpperCase()+ this.color.substring(1);
        return String.format("%d %d %s", findPerimeter(), finArea(), s);
    }
}
