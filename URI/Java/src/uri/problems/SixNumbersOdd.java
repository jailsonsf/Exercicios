package uri.problems;

import java.util.Scanner;

public class SixNumbersOdd {
	public static void main (String[] args) {
		Scanner in = new Scanner (System.in);
		
		int X = in.nextInt();
		
		for (int i = 0; i < 6; i++) {
			if (X % 2 == 0) {
				X ++;
				
			}
			
			if (i > 0) {
				X += 2;
			}
			
			System.out.println(X);
		}
		
		in.close();
		
	}

}
