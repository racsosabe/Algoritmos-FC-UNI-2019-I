import java.io.*;
import java.util.*;

public class Solution{

	public static int N = 1000000+5;
	public static int[] pf = new int[N];

	public static void init(){
		for(int i=1; i<N; i++){
			pf[i] = i;
		}
		for(int i=2; i*i<N; i++){
			if(pf[i] == i){
				for(int j=i*i; j<N; j+= i){
					pf[j] = i;
				}
			}
		}
	}

	public static void main(String[] args) throws IOException {
		init();
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		StringTokenizer st = new StringTokenizer("");
		String temp[] = br.readLine().split(" ");
		int q = Integer.parseInt(temp[0]);
		BufferedWriter out = new BufferedWriter(new OutputStreamWriter(new FileOutputStream(java.io.FileDescriptor.out),"ASCII"),512);
		for(int caso = 0; caso < q; caso++){
			temp = br.readLine().split(" ");
			int x = Integer.parseInt(temp[0]);
			int ans = 0;
			while(x != 1){
				int f = pf[x];
				while(x % f == 0){
					x /= f;
				}
				ans += 1;
			}
			out.write(String.valueOf(ans));
			out.write('\n');
		}
		out.flush();
	}
	
}
