#include<iostream>
int main()
{
	int a, b;
	using std::cin;
	using std::cout;
	using std::endl;
	while(cin >> a >> b)
	{
		if(!a && !b) break;
		cout << a+b << endl;
	}
}
