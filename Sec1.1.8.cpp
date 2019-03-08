#include<iostream>
int main()
{
	using namespace std;
	int n;
	cin >> n;
	for(int i=0;i<n;i++)
	{
		if(i) cout << endl;
		int m, sum=0, num;
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
