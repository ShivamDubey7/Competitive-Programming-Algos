#include <iostream>
using namespace std;

int ToH(int n, char s = 'S', char d = 'D', char h = 'H') //Represented as No. of plate, Source's plate, destination's plate, helper's plate
{
    static int count = 0;
    if (n == 1)
    {
        cout << "Moving " << n << "th plate from " << s << " to " << d << ".\n";
        count++;
        return 0;
    }
    ToH(n - 1, s, h, d);
    cout << "Moving " << n << "th plate from " << s << " to " << d << ".\n";
    count++;
    ToH(n - 1, h, d, s);
    return count;
}

int main()
{
    int num;
    cout<<"Total number of Plates: ";
    cin>>num;
    long long int cnt = ToH(num);
    cout<<"\nFor "<<num<<" plates ";
    cout << cnt<<" Steps required!";
    return 0;
}