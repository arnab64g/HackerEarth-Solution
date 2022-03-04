/**
 * SortedString
 */
import java.util.Scanner;
public class SortedString {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        if (t < 1 || t > 100) {
            sc.close();
            return;
        }
        for (int i = 0; i < t; i++) {
            String s = sc.next();
            int len = s.length();
            if (len < 1 || len > 100) 
                continue;
            char[] line = s.toCharArray();
            int[] ch = new int[26];
            for (int j = 0; j < len; j++) 
                ch[line[j] - 'a']++;
            for (int j = 1; j <= 100 ; j++) {
                for (int j2 = 0; j2 < 26; j2++) {
                    if (ch[j2] == j) {
                        for (int k = 0; k < j; k++) {
                            System.out.print((char)(j2 + 'a'));
                        }
                    }
                }
            }
            System.out.println();
        }
        sc.close();
    }
}