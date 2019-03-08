#include<iostream>
#include<vector>
#include<functional>	//greater<int>()
#include<algorithm>		//sort
//不能只从最好考虑到最差，算法要好好证明不能想当然 
//等于的情况要好好考虑，很多时候就是特殊情况想当然了 
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
		sort(tian.begin(), tian.end(), greater<int>());		//括号不能少 
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
					if(*(tian.end()-1) == *king.begin()) break;		//全部一样时就不用换了，都是平手 
					tian.pop_back();		//不能两个同时去掉，这时候仍然用差换好是最赚的 
					king.erase(king.begin());
					money -= 200;
				}
			}
		} 
		cout << money << endl;
	}
	return 0;
}
