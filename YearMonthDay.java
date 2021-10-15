package clz;
import java.util.Scanner;
public class YearMonthDay {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		System.out.print("Enter Days : ");
		int n = sc.nextInt();
		
		int year = n/365;
		System.out.print("Your result is : "+year+" years ");
		int year_rem = n%365;
		
		int month = year_rem/30;
		System.out.print(month+" months ");
		int month_rem = year_rem%30;
		
		System.out.println(month_rem+" days.");
		
		sc.close();
	}

}
