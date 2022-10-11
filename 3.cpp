#include<iostream>
using namespace std;

int Factorial(int);


// complexity :2N + 7
int main()
{
	int n, result;						// 1
	cout << "Enter the number:";	// 1
	cin >> n;						// 1
	result = Factorial(n);					// 1	
	cout << endl << "The factorial of " << n << " is: " << result;	// 1												// 1

}

int Factorial(int a)
{
	int factorial;		// 1
	if (a==1)
	{
		return 1;		// 1
	}
	else
	{
		factorial = a * Factorial(a - 1); // N
	}
	return factorial;
}
