//Program to read height of 10 trees and print them out
#include<iostream>
using namespace std;
int main()
{
    int i;
    int height[10];

    cout<<"Enter the height of 10 trees: ";

    for(i=0;i<10;i++)
    {
        cin>>height[i];
    }

    cout<<"You entered the height: ";

    for(i=0;i<10;i++)
    {
        cout<<height;
    }

    return 0;
}
