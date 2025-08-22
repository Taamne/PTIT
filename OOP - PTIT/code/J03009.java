import java.util.*;

public class J03009 {
    public static void main(String[] args) {
        Scanner ip = new Scanner(System.in);
        int t = ip.nextInt();
        ip.nextLine();
        while (t-- >0){
            String S1= ip.nextLine();
            String S2 = ip.nextLine();
            String[] s2 = S2.split(" ");
            String[] s1 = S1.split(" ");
            Set<String> set1 = new HashSet<>(Arrays.asList(s1));
            Set<String> set2 = new HashSet<>(Arrays.asList(s2));

            List<String> res = new ArrayList<>();
            for (String x : set1){
                if (!set2.contains(x)){
                    res.add(x);
                }
            }

            Collections.sort(res);
            for (String x : res){
                System.out.print(x+" ");

            }
            System.out.println();
        }
    }
}
