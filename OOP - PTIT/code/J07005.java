import java.io.*;

public class J07005 {

    public static void main(String[] args) throws IOException {
        int[] cnt  =new int[1005];
     //   FileInputStream f = new FileInputStream("DATA.in");
        DataInputStream ip= new DataInputStream(new FileInputStream("DATA.in"));
        for (int i=0; i<100000; i++){
            cnt[ip.readInt()]++;
        }
        for (int i=0; i<=1000; i++){
            if(cnt[i] >0){
                System.out.println(i+" "+cnt[i]);
            }
        }

    }
}
