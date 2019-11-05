package uri.problems;

import java.util.Scanner;

public class Lottery {
	public static void main (String[] args) {
		Scanner scan = new Scanner (System.in);
		
		int[] result, bet;
		result = new int[6];
		bet = new int[6];
		
		for (int i = 0; i < 6; i++) {
			result[i] = scan.nextInt();
			
		}
		
		for (int i = 0; i < 6; i++) {
			bet[i] = scan.nextInt();
			
		}

		int hits = 0;
		for (int i = 0; i < 6; i++) {
			for (int j = 0; j < 6; j++) {
				if (result[i] == bet[j]) {
					hits++;
					
				}
			}
		}
		
		if (hits == 3) {
			System.out.println("terno");
			
		} else if (hits == 4) {
			System.out.println("quadra");
			
		} else if (hits == 5) {
			System.out.println("quina");
			
		} else if (hits == 6) {
			System.out.println("sena");
			
		} else {
			System.out.println("azar");
			
		}
		
		scan.close();
	}
}
