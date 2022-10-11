#include<iostream>
using namespace std;

void Fibonacci(int,int,int);


// complexity :N + 7
int main()
{
	int n, x=0,y=1;						// 1
	cout << "Enter the number:";	// 1
	cin >> n;						// 1
	cout << endl << "Fibonacci Series: ";	// 1
	Fibonacci(n, x, y);						// 1
}

void Fibonacci(int a,int b,int c)
{
	if (a>=0)
	{
		cout << b << " ";			// 1
		b = b + c;
		a--;
	}
	if (a>=0)
	{
		cout << c << " ";				// 1
		c = c + b;
		a--;
	}
	if (a>=1)
	{
		Fibonacci(a, b, c);			// N
	}
}
