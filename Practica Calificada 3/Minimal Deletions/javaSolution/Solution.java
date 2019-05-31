import java.io.*;
import java.util.*;

public class Solution{
	
	public static long gcd(long a, long b){
		return b == 0? a : gcd(b, a % b);
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		long mcd = 0;
		long x;
		for(int i=0; i<n; i++){
			x = sc.nextLong();
			mcd = gcd(mcd,x);
		}
		long ans = -1;
		if(mcd == 1){
			ans = 0;
		}
		System.out.println(ans);
	}

}
