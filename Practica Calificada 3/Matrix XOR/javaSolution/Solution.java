import java.io.*;
import java.util.*;

public class Solution{
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		long x;
		long ans = 0;
		for(int i=0; i<n; i++){
			x = sc.nextLong();
			ans ^= x<<1;	
		}
		System.out.println(ans);
	}
	
}
