//Nested loop
#include<iostream>
using namespace std;
int main()
{
	for(int i=1;i<=4;i++)
	{
	    char Anuj='A';
	  	for(int j=1;j<=i;j++)
		{
			cout<<Anuj;
			Anuj++;
		}
		cout<<endl;
	}
	return 0;
}