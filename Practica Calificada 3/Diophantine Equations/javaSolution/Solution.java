import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution{
	
	public static int gcd(int a, int b){
		return b == 0? a : gcd(b, a % b);
	}

	public static long[] gcdExtended(int a, int b){
		long[] ans = new long[2];
		if(b == 0){
			ans[0] = 1;
			ans[1] = 0;
			return ans;
		}
		long[] ans1 = gcdExtended(b, a % b);
		ans[0] = ans1[1];
		ans[1] = ans1[0] - (a / b) * ans1[1];
		return ans;
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		int c = sc.nextInt();
		int mcd = gcd(a,b);
		if(c % mcd != 0){
			System.out.println("-1");
		}
		else{
			long ans[] = gcdExtended(a,b);
			long x = ans[0] * c / mcd;
			long y = ans[1] * c / mcd;
			System.out.println(x + " " + y);
		}
	}

	
};
