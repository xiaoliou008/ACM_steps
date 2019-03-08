#include<iostream>
int duo_sum(int);
int hex_sum(int);
int main()
{
	using namespace std;
	for(int i=1000;i<10000;i++)
	{
		int s1 = 0, num = i;
		for(int j=0;j<4;j++)
		{
			s1 += num % 10;
			num /= 10;
		}
		int s2 = duo_sum(i);
		int s3 = hex_sum(i);
		if(s1==s2 && s1==s3)
			cout << i << endl;
	}
	return 0;
}
int duo_sum(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 12;
		n /= 12;
	}
	return sum;
}
int hex_sum(int n)
{
	int sum = 0;
	while(n)
	{
		sum += n % 16;
		n /= 16;
	}
	return sum;
}
