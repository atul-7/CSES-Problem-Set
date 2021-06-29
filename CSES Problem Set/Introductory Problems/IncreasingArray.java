import java.util.Scanner;
 
class IncreasingArray {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		long arr[] = new long[n];
		for (int i = 0; i < n; i++) {
			arr[i]=scan.nextInt();
		}
		long x=0;
		for (int i = 1; i < arr.length; i++) {
			if(arr[i]<arr[i-1]) {
				x=x+(arr[i-1]-arr[i]);
				arr[i]=arr[i-1];
			}
		}
		System.out.println(x);
	}
}