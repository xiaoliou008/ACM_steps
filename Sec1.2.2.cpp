#include<iostream>
int main()
{
	using namespace std;
	int T;
	cin >> T;
	cin.get();
	for(int i=0;i<T;i++)
	{
		string s;
		getline(cin, s);
		int first = 0;
		for(int j=0;j<s.size();j++){
			if(s[j] == ' '){
				for(int k=j-1;k>=first;k--)
					cout << s[k];
				first = j+1;
				cout << ' ';
			}
		}
		for(int k=s.size()-1;k>=first;k--)
			cout << s[k];
		cout << endl;
	}
	return 0;
}
