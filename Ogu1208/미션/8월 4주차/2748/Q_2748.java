import java.util.*;

public class Q_2748 {

	public static void main(String[] args) {
		
		Scanner scanner = new Scanner(System.in);
		int n;
		long f1 = 1, f2 = 0, result = 0;
		n = scanner.nextInt();
		
		if(n==1)
			System.out.println(1);
		
		else {
			for(int i = 1; i < n; i++) {
				result = f1 + f2;
				f2 = f1;
				f1 = result;
			}
			System.out.println(result);
		}
	}
 
}
