import java.io.*;
import java.util.*;

public class Solution{
	
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int mayores = 0;
		int x;
		for(int i=0; i<n; i++){
			x = sc.nextInt();
			if(x > 1) mayores += 1;
		}
		System.out.println(mayores <= 1? "Yes":"No");
	}
	
}
