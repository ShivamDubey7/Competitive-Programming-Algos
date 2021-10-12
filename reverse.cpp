#include <iostream>
using namespace std;

//recursive function
void reverse(string &str, int i){
    //Base condition - when index exceeds string length
    if(i == str.length())
        return;
    
    //extract character
    char ch = str[i];
    //recusively call for next character
    reverse(str, i+1);
    //reassign in reverse order
    str[str.length()-i-1] = ch;
}
 
int main()
{   
    //Input string
    string str = "Pencil Programmer";
    
    //start recirsive funtion from first index
    reverse(str, 0);
    
    //output the string
    cout << str;
    return 0;
}
