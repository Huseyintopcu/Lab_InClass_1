#include<iostream>
using namespace std;

void IntPrinter();

int a = 50, b = 1; // 1

// complexity :3N + 2
int main()
{
	IntPrinter();	// 1
}

void IntPrinter()
{
	if (b<=a)
	{
		cout << b << " ";	// N
		b++;				// N
		IntPrinter();		// N
	}
}
