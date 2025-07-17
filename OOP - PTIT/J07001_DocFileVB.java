import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class J07001_DocFileVB {
    public static void main(String[] args) throws FileNotFoundException {
        File f = new File("DATA.in");
        Scanner ip = new Scanner(f);
        while (ip.hasNextLine()){
            System.out.println(ip.nextLine());
        }

    }
}
