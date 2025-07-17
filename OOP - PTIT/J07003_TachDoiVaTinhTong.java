import java.io.File;
import java.io.FileNotFoundException;
import java.math.BigInteger;
import java.util.Scanner;
public class J07003_TachDoiVaTinhTong {


    public static void main(String[] args) throws FileNotFoundException {
        File f = new File("DATA.in");
        Scanner ip = new Scanner(f);
        long sum = 0;
        String s= ip.nextLine();
        if(s.length()==1) System.out.println(s);

            while (s.length()>1){
                BigInteger a= new BigInteger(s.substring(0,s.length()/2));
                BigInteger b= new BigInteger(s.substring(s.length()/2));
                s= a.add(b).toString();
                System.out.println(s);

            }

        }

    }

