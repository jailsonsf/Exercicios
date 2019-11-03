package uri.problems;

import java.util.Scanner;

public class Animals {
	public static void main (String[] args) {
		Scanner scanner = new Scanner (System.in);
		
		String name1, name2, name3;
		
		name1 = scanner.nextLine();
		name2 = scanner.nextLine();
		name3 = scanner.nextLine();
		
		scanner.close();
		
		if (name1.intern() == "vertebrado") {
			if (name2.intern() == "ave") {
				if (name3.intern() == "carnivoro") {
					System.out.println("aguia");
					
				} else if (name3.intern() == "onivoro") {
					System.out.println("pomba");
					
				}
			} else if (name2.intern() == "mamifero") {
				if (name3.intern() == "onivoro") {
					System.out.println("homem");
					
				} else if (name3.intern() == "herbivoro") {
					System.out.println("vaca");
					
				}
			}
		} else if (name1.intern() == "invertebrado") {
			if (name2.intern() == "inseto") {
				if (name3.intern() == "hematofago") {
					System.out.println("pulga");
					
				} else if (name3.intern() == "herbivoro") {
					System.out.println("lagarta");
					
				}
			} else if (name2.intern() == "anelideo") {
				if (name3.intern() == "hematofago") {
					System.out.println("sanguessuga");
					
				} else if (name3.intern() == "onivoro") {
					System.out.println("minhoca");
					
				}
			}
		}
	}
}
