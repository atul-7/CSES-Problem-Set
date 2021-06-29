import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;
public class MissingNumber {
	public static void main(String[] args){
		Scanner scan = new Scanner(System.in);
		int n=scan.nextInt();
		List<Integer> arr= new ArrayList<Integer>();
		for(int i=0;i<n-1;i++){
	        arr.add(scan.nextInt());
	        }
		
		int missing=0,j=1;
		for(int i=1;i<=n;i++) {
			missing=missing^i;
		}
		for(int i=0;i<n-1;i++) {
			missing=missing^arr.get(i);
		}
		
		System.out.println(missing);
	}
}