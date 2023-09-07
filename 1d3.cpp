//Read 5 integers numbers and print only even numbers
#include<iostream>
using namespace std;
int main()
{
    int i;
    int num[5];

    cout<<"Enter 5 integers numbers: ";

    for(i=0;i<5;i++)
    {
        cin>>num[i];
    }

    for(i=0;i<5;i++)
    {
        if(num[i]%2==0)
        cout<<num[i];
    }
    
    return 0;
}

