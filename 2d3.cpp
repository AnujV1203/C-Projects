//Write a program to add two 3x3 matrix and print them out
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int a[3][3],b[3][3],s[3][3];

    cout<<"Enter the elements of [3][3] matrix";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"enter the elements of b[3][3]";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>b[i][j];
        }
    }

    //Calculating Sum

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            s[i][j]=a[i][j]+b[i][j];
        }
    }

    //Printing the sum

    cout<<"Sum is: ";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<s[i][j]<<" ";
        }
        cout<<"\n";
    }

    return 0;

}