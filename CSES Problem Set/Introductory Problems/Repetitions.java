import java.util.Scanner;
 
class Repetitions {
	public static void main(String[] args) {
		Scanner scan = new Scanner(System.in);
		String str = scan.next();
		int max = 0;
		int res=0;
		for (int i = 1; i < str.length(); i++) {
			if(str.charAt(i)==str.charAt(i-1)) {
				max++;
				res=Math.max(max, res);
			}
			else {
				res=Math.max(max, res);
				max=0;
			}
		}
		System.out.println(res+1);
 
	}
}