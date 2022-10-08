#include <iostream>
#include <conio.h>

using namespace std;

void fib(int n)									//function intialize for fibunnaci series
{
	int term1=0,term2=1,nextterm;
	for (int i=0;i<=n;i++)
	{
		cout<<term1<<",";
		nextterm=term1 + term2;
		term1=term2;
		term2=nextterm;
	}
	
}

int main() 
{
	int n;
	cout<<"Enter The Number:";
	cin>>n;
	
	fib(n);										//Call of function
	
	getch();
	return 0;
}
