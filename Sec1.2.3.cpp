#include<iostream>

int gcd(int, int);

//�ƺ������ж�m��n�Ƿ��أ��������������ҵ� 
int main()
{
	using namespace std;
	int m, n;
	while(cin >> m >> n)
	{
		if(m == -1 || n == -1) break;
		int greatest_common_divisior = gcd(m, n);
		if(greatest_common_divisior == 1)
			cout << "YES" << endl;
		else cout << "POOR Haha" << endl;
	}
	return 0;
}

int gcd(int m, int n)
{
	if(m<n) std::swap(m, n);
	int q = m % n;
	while(q)
	{
		m = n;
		n = q;
		q = m % n;
	}
	return n;
}
