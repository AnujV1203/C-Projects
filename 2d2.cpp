//Write a program that read elemenst of 3x3 matrix and calculate the sum of the left diagonal elements 
#include<iostream>
using namespace std;
int main()
{
    int i,j,s=0;
    int a[3][3];

    cout<<"Enter the elements of 3x3 matrix";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cin>>a[i][j];
        }
    }

    cout<<"\n tpu Entered the elements:";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            cout<<a[i][j];
        }
        cout<<"\n";
    }

    cout<<"\n sum of diagonal elements:";

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            s=s+a[i][j];
        }
    }

    cout<<"\n sum="<<s;


}