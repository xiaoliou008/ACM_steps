#include<iostream>
int main()
{
	using namespace std;
	unsigned int a;
	while(cin >> a && a)
	{
		unsigned int low_bit = 1;
		while(a%2 == 0)
		{
			low_bit = low_bit << 1;
			a = a >> 1;
		}
		cout << low_bit << endl;
	}
	return 0;
}
