#include<iostream>
using namespace std;


// complexity :3N + 4 
int main()
{
	int n, i = 1, sum = 0;				// 1

	cout << "Enter the number of consecutive positve integers (starting from 1):";  // 1
	cin >> n;					// 1
	do
	{
		sum += i;				// N
		i++;					// N
	} while (i<=n);				// N
	cout << "The Summer is:" << sum;  // 1

}