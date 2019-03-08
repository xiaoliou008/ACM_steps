#include<iostream>

int main()
{
	using namespace std;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int a, b, c;
		cin >> a >> b >> c;
		if(a < b) swap(a, b);
		if(a < c) swap(a, c);
		cout << "Scenario #" << i+1 << ':' << endl;
		if(a*a == b*b + c*c)
			cout << "yes\n" << endl;
		else
			cout << "no\n" << endl;
	}
	return 0;
}
