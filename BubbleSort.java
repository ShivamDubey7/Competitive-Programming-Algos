

//WHAT IS BUBBLE SORT:
//Bubble Sort is one of the simplest sorting techniques in Java to sort the array elements. 
//The swapping of elements continues until the array is sorted and no more swapping is required. 
//We can also sort the elements in the descending order in which the smallest element goes at the end of the array in each iteration.
//THIS EXPLAINATION IS PROVIDED TO HELP BEGGINNER'S UNDERSTAND THE CODE




package arrays;

public class BubbleSort {

	public static void main(String[] args) {
		int a[] = {3, 1, -2, 7, 4, 0};
		int n = a.length;
		
		for (int i=0; i<n-1; i++) {
			int minimumIndex = i;
			
			for (int j=i; j<n; j++) {
				if (a[j]<a[minimumIndex]) {
					minimumIndex = j;
					
				}
				
			}
			int temp = a[i];
			a[i] = a[minimumIndex];
			a[minimumIndex] = temp;
			
			
			
		}
		for (int e:a) {
			System.out.print(e+"  ");
		}
			
	}

}
