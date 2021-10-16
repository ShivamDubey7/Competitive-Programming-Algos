# This is the code for finding anagram of the string in java

//Anagram : a word or phrase that is made by arranging the letters of another word or phrase in a different order
//Example: "Worth" is an anagram of ‘throw’.
//This java anagram program compares the letters of both words/strings entered and then shows
//wheather they are anagram of each other or not

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
		if (isAnagram) System.out.println("an anagram");
		else System.out.println("not an anagram");
	}
		
}


