#include<iostream>
int main()
{
	using namespace std;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		int m=0, sum=0, num=0;
		cin >> m;
		for(int j=0;j<m;j++)
		{
			cin >> num;
			sum += num;
		}
		cout << sum << endl;
	}
	return 0;
}
