#include<iostream>
#include<limits>
using namespace std;
int main()
{
	int c;
	cin >> c;
	for(int i=0;i<c;i++)
	{
		int n, min1 = (numeric_limits<int>::max)(), min2 = min1;	//这是函数调用，后面的括号不能省略 
		cin >> n;
		for(int j=0;j<n;j++)
		{
			int num;
			cin >> num;
			if(num < min2){
				if(num < min1){
					min2 = min1;
					min1 = num;
				}
				else min2 = num;
			}
		}
		cout << min2 << endl;
	}
	return 0;
}
