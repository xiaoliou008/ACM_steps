#include<iostream>
int main()
{
	using namespace std;
	int n;
	while(cin >> n && n)
	{
		int level=0, next, t=0;
		for(int i=0;i<n;i++)
		{
			cin >> next;
			if(next > level){
				t += 6*(next - level) + 5;
				level = next;
			}
			else if(next < level){
				t += 4*(level - next) + 5;
				level = next;
			}
			else t += 5;
		}
		cout << t << endl;
	}
	return 0;
}
