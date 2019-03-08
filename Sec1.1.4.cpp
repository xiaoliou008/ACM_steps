#include<iostream>
int main()
{
	using namespace std;
	int n=0;
	while(cin >> n)
	{
		if(!n) break;
		int sum=0, num=0;
		for(int i=0;i<n;i++)
		{
			cin >> num;
			sum += num;
		}
		cout << sum << endl;
	}
	return 0;
}
