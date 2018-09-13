#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	
	int n,m;
	cout<<"Enter the first number: ";
	cin>>n;
	cout<<"Enter the second number: ";
	cin>>m;
	
	
	int nm=min(n,m);
	
	
	
	int GCD=1;
	for  (int i=1;i<=nm;i++)
	{
		if (n%i==0 && m%i==0)
		{
		   GCD=max(GCD,i);
		}
	}
	cout<<"Greatest common divisor is: "<<GCD;
	
	return 0;
}
