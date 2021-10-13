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
