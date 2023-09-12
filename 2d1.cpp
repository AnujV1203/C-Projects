//Write a program that read elements of  a 4x3 matrix and print them out
#include<iostream>
using  namespace std;
int main()
{
    int i,j;
    int a[4][3];

    cout<<"Enter elements of 4x3 matrix:";

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"Entered the elements:";

    for(i=0;i<4;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
    }

}



