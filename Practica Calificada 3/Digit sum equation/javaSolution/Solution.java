import java.io.*;
import java.util.*;
import java.math.*;

public class Solution{
	
	public static long digitSum(long x){
		if(x < 10) return x;
		return x % 10 + digitSum(x / 10);
	}

	public static long solve(long S, long n){
		long Discriminante = S*S + 4*n;
		long r = (long)(Math.sqrt(Discriminante));
		if(r * r == Discriminante){
			if(r % 2 == S % 2){
				return (r - S) / 2;
			}
			else return -1;
		}
		else return -1;
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		long n = sc.nextLong();
		long ans = -1;
		for(int S = 1; S <= 162; S++){
			long x = solve(S,n);
			if(x > 0 && digitSum(x) == S){
				if(ans == -1) ans = x;
				else ans = x < ans? x : ans;
			}
		}
		System.out.println(ans);
	}
}
