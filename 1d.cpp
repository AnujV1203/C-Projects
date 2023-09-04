#include<iostream>
using namespace std;
int main()
{
    int i;
    int age[5];

    cout<<"Enter age of 5 persons";
    for(i=0;i<5;i++)
    {
        cin>>age[i];
    }
    cout<<"you entered the ages:";
    for(i=0;i<5;i++)
    {
        cout<<age[i];
    }
}