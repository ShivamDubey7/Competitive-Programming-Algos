#include<iostream>

using namespace std;
int main()
{
   int num, i, sum=0;
   cout<<"Enter a Number: ";
   cin>>num;
   for(i=1; i<num; i++)
   {
      if(num%i==0)
         sum = sum+i;
   }
   if(num==sum)
      cout<<endl<<num<<" is a Perfect Number.";
   else
      cout<<endl<<num<<" is not a Perfect Number.";
   cout<<endl;
   return 0;
}
