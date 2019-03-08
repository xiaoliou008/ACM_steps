#include<iostream>
#include<vector>
#include<functional>	//greater<int>()
#include<algorithm>		//sort
//����ֻ����ÿ��ǵ����㷨Ҫ�ú�֤�������뵱Ȼ 
//���ڵ����Ҫ�úÿ��ǣ��ܶ�ʱ�������������뵱Ȼ�� 
int main()
{
	using namespace std;
	int n;
	while(cin >> n && n)
	{
		vector<int> tian(n), king(n);
		for(int i=0;i<n;i++)
			cin >> tian[i];
		for(int i=0;i<n;i++)
			cin >> king[i];
		sort(tian.begin(), tian.end(), greater<int>());		//���Ų����� 
		sort(king.begin(), king.end(), greater<int>());
		int money = 0, j = 0;
		while(!tian.empty() || !king.empty())
		{
			if(*(tian.end()-1) < *(king.end()-1)){
				tian.pop_back();
				king.erase(king.begin());
				money -= 200;
			}
			else if(*(tian.end()-1) > *(king.end()-1)){
				tian.pop_back();
				king.pop_back();
				money += 200;
			}
			else{
				if(*tian.begin() > *king.begin()){
					tian.erase(tian.begin());
					king.erase(king.begin());
					money += 200;
				}
				else if(*tian.begin() < *king.begin()){
					tian.pop_back();
					king.erase(king.begin());
					money -= 200;
				}
				else{
					if(tian.size() == 1 || king.size() == 1) break;
					if(*(tian.end()-1) == *king.begin()) break;		//ȫ��һ��ʱ�Ͳ��û��ˣ�����ƽ�� 
					tian.pop_back();		//��������ͬʱȥ������ʱ����Ȼ�ò������׬�� 
					king.erase(king.begin());
					money -= 200;
				}
			}
		} 
		cout << money << endl;
	}
	return 0;
}
