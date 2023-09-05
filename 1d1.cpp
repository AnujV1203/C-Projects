#include<iostream>
using namespace std;
int main()
{
    int i;
    int salary[10];

    cout<<"Enter the salary of 10 employee : ";
    for(i=0;i<10;i++)
    {
        cin>>salary[i];
    }
    cout<<"You entered the salary: ";
    for(i=0;i<10;i++)
    {
        cout<<salary[i];
    }
    return 0;
}
