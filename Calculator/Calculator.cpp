ï»?#include <iostream>
using namespace std;

int main()
{
	cout << "+ : Add\t- : Subtract\t\n";
	char op;
	int a, b;
	while (cin >> op)
	{
		switch (op)
		{
		case '+':
			cout << "Put two numbers\n";
			cin >> a >> b;
			cout << a << '+' << b << '=' << a + b << '\n';
			break;
		case '-':
			cout << "Put two numbers\n";
			cin >> a >> b;
			cout << a << '-' << b << '=' << a - b << '\n';
			break;
		case '/':
			cout << "Put two numbers\n";
			cin >> a >> b;
			cout << a << '/' << b << '=' << a / b << '\n';
			break;
		case '*':
			cout << "Put two numvers\n";
			cin >> a >> b;
			cout << a << '*' << b << '=' << a * b << '\n';
			break;
		default:
			return 0;
		}
	}
	return 0;
}
