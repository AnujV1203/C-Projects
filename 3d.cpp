//Write a progarm that read a 3D array elementsof the size 2x3x4 and print it out
#include<iostream>
using namespace std;
int main()
{
    int i,j,k;
    int a[2][3][4];

    cout<<"Enter the elements of 2x3x4 matrix";

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<4;k++)
            {
                cin>>a[i][j][k];
            }
        }
    }

    cout<<"You entered the elements:";

    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<4;k++)
            {
                cout<<a[i][j][k];
            }
            cout<<"\n";
        }
    }

    return 0;
}            