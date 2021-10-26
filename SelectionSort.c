#include <stdio.h>

int main()
{ int n,i,j,swap;
 printf("Enter number of elements\n");
 scanf("%d",&n);
 int arr[n];
 printf("Enter elements\n");
 for(i=0;i<n;i++){
     scanf("%d",&arr[i]);
 }
 for(i=0;i<n-1;i++){
     int pos= i;
  for(j=i+1;j<n;j++){
     if(arr[j]<arr[pos]){
         pos=j;
     } 
  }
  if(pos!=i){
      swap=arr[pos];
      arr[pos]=arr[i];
      arr[i]=swap;
  }
 }
 printf("Sorted array\n");
 for(i=0;i<n;i++){
     printf("%d\n",arr[i]);
 }
}
