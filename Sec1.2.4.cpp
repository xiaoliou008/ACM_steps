#include<iostream>
#include<iomanip>
//涉及到C++io类的问题
int main()
{
	using namespace std;
	double sum = 0;
	for(int i=0;i<12;i++)
	{
		double money;
		cin >> money;
		sum += money;	
	}	
	cout << '$' << setiosflags(ios::fixed) << setprecision(2) << sum/12.0 << endl;
	return 0;
}
