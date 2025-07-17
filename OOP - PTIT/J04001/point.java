package J04001;

public class point {
    private double x, y;

    public point(double x, double y) {
        this.x = x;
        this.y = y;
    }

    public double getX() {
        return x;
    }

    public double getY() {
        return y;
    }

    public double getDist(point p){
        return Math.sqrt(Math.pow(this.x - p.getX(), 2) + (Math.pow(this.y - p.getY(), 2)));
    }
    public String toString(point p){
        return String.format("%.4f", this.getDist(p));
    }
}

