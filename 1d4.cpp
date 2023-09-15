//Program to read height of 10 trees and calculate total and average height.
#include<iostream>
using  namespace std;
int main()
{
    int i;
    float s=0,t;
    float height[10];

    cout<<"Enter the height of 10 trees: ";

    for(i=0;i<10;i++)
    {
        cin>>height[i];
    }

    for(i=0;i<10;i++)
    {
        s=s+height[i];
    }
    t=s/10;

    cout<<"total= "<<s<<endl;
    cout<<"average= "<<t;

}
