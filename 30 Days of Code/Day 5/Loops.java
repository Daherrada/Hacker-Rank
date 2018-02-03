import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

/*Print  lines of output; each line i (where 1<=i<=10) contains  
/the result of n x i in the form: n x i = result.
*/

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int n = in.nextInt();
        for (int i=1; i<11; i++)
            System.out.printf("%d x %d = %d\n", n, i, n*i);
    }
}