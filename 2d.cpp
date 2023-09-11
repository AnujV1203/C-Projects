//Write a program that read elements of a 3x2 matrix and print them out
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int a[3][2];

    cout<<"Enter elements of 3X2 matrix:";

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>a[i][j];
        }
    }
    
    cout<<"You entered the elements:";

    for(i=0;i<3;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<a[i][j];
        }
    }

    return 0;
}