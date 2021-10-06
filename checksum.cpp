#include<iostream>
#include<fstream>
using namespace std;
class A
{
    public:
     int a[4][8];
int cs[8]={0,0,0,0,0,0,0,0};
int carry=0;
int carry1=0;


    void input()
    {
        cout<<"enter the bit stream "<<endl;
        for(int i=0;i<4;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
        }
    }
for(int i=0;i<4;i++)
{
    for(int j=7;j>=0;j--)
    {
        if(cs[j]==1 && a[i][j]==1&&carry==0)
        {
            cs[j]=0;
            carry=1;
        }
        else if(cs[j]==1 && a[i][j]==1 && carry==1)
        {
            cs[j]=1;
            carry=1;
        }
        else if(cs[j]==1 && a[i][j]==0 && carry==1)
        {
            cs[j]=0;
            carry=1;
        }
        else if(cs[j]==0 && a[i][j]==1 && carry==1)
        {
            cs[j]=0;
            carry=1;
        }
        else if(cs[j]==1 && a[i][j]==0 && carry==0)
        {
            cs[j]=1;
            carry=0;
        }
        else if(cs[j]==0 && a[i][j]==1 && carry==0)
        {
            cs[j]=1;
            carry=0;
        }
        else if(cs[j]==0 && a[i][j]==0 && carry==1)
        {
            cs[j]=1;
            carry=0;
        }
        else if(cs[j]==0 && a[i][j]==0 && carry==0)
        {
            cs[j]=0;
            carry=0;
        }
    }
    if(carry==1)
    {
        carry1=carry;
        for(int j=7;j>=0;j--)
        {
            if(cs[j]==1 && carry1==1)
            {
                cs[j]=0;
                carry1=1;
            }
            else if(cs[j]==0 && carry1==1)
            {
                cs[j]=1;
                carry1=0;
            }
            else if(cs[j]==1 && carry1==0)
            {
                cs[j]=1;
                carry1=0;
            }
            else if(cs[j]==0 && carry1==0)
            {
                cs[j]=0;
                carry1=0;
            }
            carry=0;
        }
    }
}
cout<<"the final result"<<endl;
for(int i=0;i<8;i++)
{
    cout<<cs[i]<"*\t";
}
for(int i=0;i<8;i++)
{
    if(cs[i]==0)
    {
        cs[i]=1;
    }
    else
    {
        cs[i]=0;
    }
}
cout<<endl<<"compliment"<<endl;
for(int i=0;i<8;i++)
{
    cout<<cs[i]<"*\t";
}
    }

};
void cmd()
{
     A a;
    a.input();
}
int main()
{
    int a;
    cout<<"enter 1 if you want to open cmd and enter 2 if you want to open in file ";
    cin>>a;
    switch (a)
    {
        case 1:
    {
        cmd();
        break;
    }
case 2:
    {
        ofstream files;
    files.open("checksumfile.txt");
    int a[4][8];
int cs[]={0,0,0,0,0,0,0,0};
int carry=0;
int carry1=0;
        cout<<"enter the bit stream "<<endl;
        for(int i=0;i<4;i++)
    {
        for(int j=0;j<8;j++)
        {
            cin>>a[i][j];
        }
    }
for(int i=0;i<4;i++)
{
    for(int j=7;j>=0;j--)
    {
        if(cs[j]==1 && a[i][j]==1&&carry==0)
        {
            cs[j]=0;
            carry=1;
        }
        else if(cs[j]==1 && a[i][j]==1 && carry==1)
        {
            cs[j]=1;
            carry=1;
        }
        else if(cs[j]==1 && a[i][j]==0 && carry==1)
        {
            cs[j]=0;
            carry=1;
        }
        else if(cs[j]==0 && a[i][j]==1 && carry==1)
        {
            cs[j]=0;
            carry=1;
        }
        else if(cs[j]==1 && a[i][j]==0 && carry==0)
        {
            cs[j]=1;
            carry=0;
        }
        else if(cs[j]==0 && a[i][j]==1 && carry==0)
        {
            cs[j]=1;
            carry=0;
        }
        else if(cs[j]==0 && a[i][j]==0 && carry==1)
        {
            cs[j]=1;
            carry=0;
        }
        else if(cs[j]==0 && a[i][j]==0 && carry==0)
        {
            cs[j]=0;
            carry=0;
        }
    }
    if(carry==1)
    {
        carry1=carry;
        for(int j=7;j>=0;j--)
        {
            if(cs[j]==1 && carry1==1)
            {
                cs[j]=0;
                carry1=1;
            }
            else if(cs[j]==0 && carry1==1)
            {
                cs[j]=1;
                carry1=0;
            }
            else if(cs[j]==1 && carry1==0)
            {
                cs[j]=1;
                carry1=0;
            }
            else if(cs[j]==0 && carry1==0)
            {
                cs[j]=0;
                carry1=0;
            }
            carry=0;
        }
    }
}
files<<"the final result"<<endl;
for(int i=0;i<8;i++)
{
    files<<cs[i]<"*\t";
}
for(int i=0;i<8;i++)
{
    if(cs[i]==0)
    {
        cs[i]=1;
    }
    else
    {
        cs[i]=0;
    }
}
files<<endl<<"compliment"<<endl;
for(int i=0;i<8;i++)
{
    files<<cs[i]<"*\t";
}
        files.close();
   std::cin.get();
        break;
    }
    }
}
