# Selection sort takes n-1 passes to complete
# During every iteration index of minimum number/string is found in the innermost loop and then swapped once it comes out of that loop
# No flag like improvised Bubble Sort so even if we put sorted list it is still going to take O(n^2) time complexity
# Worst Time Complexity: O(n^2)
# Average Time Complexity: O(n^2)
# Best Time Complexity: O(n^2)

# Python program for implementation of Selection
# Sort
import sys
A = [64, 25, 12, 22, 11]

# Traverse through all array elements
for i in range(len(A)):
	
	# Find the minimum element in remaining
	# unsorted array
	min_idx = i
	for j in range(i+1, len(A)):
		if A[min_idx] > A[j]:
			min_idx = j
			
	# Swap the found minimum element with
	# the first element		
	A[i], A[min_idx] = A[min_idx], A[i]

# Driver code to test above
print ("Sorted array")
for i in range(len(A)):
	print("%d" %A[i]),



