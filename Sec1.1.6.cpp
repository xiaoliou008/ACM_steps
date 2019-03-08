#include<iostream>
int main()
{
	using namespace std;
	int n;
	while(cin >> n)
	{
		int sum=0, num;
		for(int i=0;i<n;i++)
		{
			cin >> num;
			sum += num;
		}
		cout << sum << endl;
	}
	return 0;
}
