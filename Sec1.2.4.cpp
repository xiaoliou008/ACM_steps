#include<iostream>
#include<iomanip>
//�漰��C++io�������
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
