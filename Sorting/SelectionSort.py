# Selection sort takes n-1 passes to complete
# During every iteration index of minimum number/string is found in the innermost loop and then swapped once it comes out of that loop
# No flag like improvised Bubble Sort so even if we put sorted list it is still going to take O(n^2) time complexity
# Worst Time Complexity: O(n^2)
# Average Time Complexity: O(n^2)
# Best Time Complexity: O(n^2)

print("Number Sequence Before Selection Sort")
seq=[5,2,1,8,3,5,3]
print(seq)

def selectionSort(nums):
    n=len(nums)
    for i in range(n-1):
        iMin=i
        for j in range(i+1,n):
            if(nums[iMin]>nums[j]):
                iMin=j
        temp=nums[i]
        nums[i]=nums[iMin]
        nums[iMin]=temp
    return nums

print("Number Sequence After Selection Sort")
print(selectionSort(seq))


