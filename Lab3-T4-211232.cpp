#include <iostream>

using namespace std;

int main() 
{
	int number;
	cout<<"\n\n\t\tPlease Enter a Number: "; cin>>number;
	cout<<endl<<endl;
	cout<<"*******************************************************\n\n";
	if (number%2==1)
	{
		cout<<"\t\tThe input number is ODD\n ";
	}
	if (number%2==0)
	{
		cout<<"\t\tThe input number is EVEN\n ";
	}
	return 0;
}
