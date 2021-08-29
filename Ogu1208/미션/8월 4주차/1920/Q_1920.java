import java.util.*;

public class Q_1920 {

	public static void main(String[] args) {
		int n, bool;
		Scanner scanner = new Scanner(System.in);
		
		n = scanner.nextInt();
		int[] a1 = new int[n];
		
		for(int i = 0; i < n; i++) {
			a1[i] = scanner.nextInt();
		}
		
		Arrays.sort(a1); // 자바 정석 p.625 정렬
		
		
		n = scanner.nextInt();
		int[] a2 = new int[n];
		
		for(int i = 0; i < n; i++) {
			a2[i] = scanner.nextInt();	
		}
		
		for(int i = 0; i < a2.length; i++) {
			int mid, left = 0, right = a1.length-1; 
			bool = 0;
			
			while(left <= right) {
				mid = (left + right) / 2;
				if(a1[mid] == a2[i]) {
					bool = 1;
					break;
				}
				else if(a1[mid] > a2[i])
					right = mid-1;
				else left = mid + 1;
			}
			System.out.println(bool);
		}
		
	}
}
