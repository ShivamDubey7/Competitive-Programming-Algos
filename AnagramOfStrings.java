# This is the code for finding anagram of the string in java


import java.util.Scanner;
public class AnagramOfStrings {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter first string : ");
		String a = sc.nextLine();
		System.out.print("Enter second string : ");
		String b = sc.nextLine();
		
		boolean isAnagram = false;
		boolean visited[] = new boolean[b.length()];
		
		if (a.length()==b.length()) {
			for (int i=0; i<a.length(); i++) {
				isAnagram = false;
				for (int j=0; j<b.length(); j++) {
					if (a.charAt(i)==b.charAt(j) && !visited[j]) {
						isAnagram = true;
						visited [j] = true;
						break;
					}
				}if (!isAnagram) break;
			}
		}
		if (isAnagram) System.out.println("anagram");
		else System.out.println("not anagram");
	}
		
}


