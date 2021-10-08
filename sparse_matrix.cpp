#include<iostream>
using namespace std;

int main()
{
    int n,m,i,j,k=1,count=0;
    cout<<"Enter value of n"<<endl;
    cin>>n;
    cout<<"Enter value of m"<<endl;
    cin>>m;
    int M1[n][m], M2[10][3];
    cout<<"Enter the matrix"<<endl;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            cin>>M1[i][j];
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            if(M1[i][j] != 0){
                M2[k][0] = i;
                M2[k][1] = j;
                M2[k][2] = M1[i][j];
                k++;
                count++;
            }
        }
    }

    M2[0][0] = n;
    M2[0][1] = m;
    M2[0][2] = count;



    cout<<"Sparse Matrix is:"<<endl;

    for(i=0;i<k;i++){
        for(j=0;j<3;j++){
            cout<<M2[i][j]<<" ";
        }
        cout<<endl;
    }

}



// #include<iostream>
// using namespace std;

// int main()
// {
//     int n,i,j,k=1,count=0;
//     cout<<"Enter value of n"<<endl;
//     cin>>n;
//     int M1[n][n], M2[10][3];
//     cout<<"Enter the matrix"<<endl;
//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             cin>>M1[i][j];
//         }
//     }

//     for(i=0;i<n;i++){
//         for(j=0;j<n;j++){
//             if(M1[i][j] != 0){
//                 M2[k][0] = i;
//                 M2[k][1] = j;
//                 M2[k][2] = M1[i][j];
//                 k++;
//                 count++;
//             }
//         }
//     }

//     M2[0][0] = n;
//     M2[0][1] = n;
//     M2[0][2] = count;



//     cout<<"Sparse Matrix is:"<<endl;

//     for(i=0;i<k;i++){
//         for(j=0;j<3;j++){
//             cout<<M2[i][j]<<" ";
//         }
//         cout<<endl;
//     }

// }

