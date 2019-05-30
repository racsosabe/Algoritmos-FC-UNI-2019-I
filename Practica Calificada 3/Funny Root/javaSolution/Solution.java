import java.io.*;
import java.util.*;

public class Solution{
	
	public static int digitSum(int x){
		if(x < 10) return x;
		return x % 10 + digitSum(x / 10);
	}

	public static int solve(int n){
		if(n < 10) return n;
		return solve(digitSum(n));
	}

	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		int first_digit_sum = 0;
		for(int i=0; i<s.length(); i++){
			first_digit_sum += (int)s.charAt(i) - (int)'0';
		}
		System.out.println(solve(first_digit_sum));
	}
	
};
