//Read 5 numbers and print them in ascending order
#include<iostream>
using namespace std;
int main()
{
    int i,j,t;
    int num[5];

    cout<<"Enter the 5 numbers: ";

    for(i=0;i<5;i++)
    {
        cin>>num[i];
    }

    cout<<"Asecending numbers are as follows: ";

    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(num[i]>num[j])
            {
                t=num[i];
                num[i]=num[j];
                num[j]=t;
            }
        }
    }

    for(i=0;i<5;i++)
        cout<<num[i]<<endl;
    

}