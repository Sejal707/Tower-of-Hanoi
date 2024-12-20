#include<iostream>
using namespace std;
void TOH(int n, char a, char b, char c)
{
	if (n == 0)
		return;
	else
	{
		TOH(n - 1, a, c, b);
		cout << "From " << a << " to " << c << endl;
		TOH(n - 1, b, a, c);
	}
}
int main()
{
	int n;
	char a = 'A', b = 'B', c = 'C';
	cout << "Enter no. of units: ";
	cin >> n;
	TOH(n, a, b, c);
	return 0;
}