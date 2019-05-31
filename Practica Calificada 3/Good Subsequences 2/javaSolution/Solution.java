import java.io.*;
import java.util.*;

public class Solution{
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		long MOD = 1000000000+7;
		int n = sc.nextInt();
		int m = sc.nextInt();
		int C = 0;
		long x;
		for(int i=0; i<n; i++){
			x = sc.nextLong();
			if(x % m == 0) C += 1;
		}
		long ans = 1;
		for(int i=0; i<C; i++){
			ans += ans;
			if(ans >= MOD) ans -= MOD;
		}
		ans -= 1;
		if(ans < 0) ans += MOD;
		System.out.println(ans);
	}
	
}
