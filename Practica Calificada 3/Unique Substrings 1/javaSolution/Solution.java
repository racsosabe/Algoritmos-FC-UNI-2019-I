import java.io.*;
import java.util.*;

public class Solution {
	
	public static boolean unique(String s){
		int mask = 0;
		for(int i=0; i<s.length(); i++){
			if((mask & (1 << ((int)s.charAt(i) - 97))) != 0) return false;
			mask |= (1 << ((int)s.charAt(i) - 97));
		}
		return true;
	}

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		String s = sc.nextLine();
		int ans = 0;
		for(int i=0; i<s.length(); i++){
			for(int j=1; j<27 && i + j - 1 < s.length(); j++){
				if(!unique(s.substring(i,i+j))) break;
				ans += 1;
			}
		}
		System.out.println(ans);
	}
}
