#include<iostream>
#include<vector>

int main()
{
	using namespace std;
	int n=0, n_set = 0;
	while(cin >> n && n)
	{
		n_set++;
		vector<int> h (n);
		int sum = 0;
		for(int i=0;i<n;i++){
			cin >> h[i];
			sum += h[i];
		}
		int aver = sum / n, move = 0;
		for(int i=0;i<n;i++){
			if(h[i] < aver)
				move += aver - h[i];
		}
		cout << "Set #" << n_set << endl;
		cout << "The minimum number of moves is " << move << '.' << endl << endl;
	}
	return 0;
}
