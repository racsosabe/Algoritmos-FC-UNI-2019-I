import java.io.*;
import java.util.*;

public class Solution{
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		long[] a = new long[n];
		for(int i=0; i<n; i++){
			a[i] = sc.nextLong();
		}
		long maximo = 0;
		for(int i=0; i<n; i++){
			maximo = maximo < a[i]? a[i] : maximo;
		}
		long ans = 0;
		for(int i=0; i<n; i++){
			if(a[i] < maximo){
				ans = ans < a[i]? a[i] : ans;
			}
		}
		System.out.println(ans);
	}
	
};
