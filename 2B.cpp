#include<iostream>
using namespace std;

int Summer(int);


// complexity :2N + 7
int main()
{
	int n,fsum;						// 1
	cout << "Enter the number:";	// 1
	cin >> n;						// 1
	fsum=Summer(n);					// 1	
	cout << "The sum of numbers from 1 to " << n << ":" << fsum;	// 1												// 1
	
}

int Summer(int a)
{
	int sum = 0;		// 1
	if (a == 1)
	{
		return 1;		// 1
	}
	else 
	{
		sum += Summer(a - 1);	// N
	}	
	return sum+a;		// N

}
