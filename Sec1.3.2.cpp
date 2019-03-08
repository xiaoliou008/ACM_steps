#include<iostream>
#include<cstdio>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
struct student
{
	string id;
	int grade;
};
bool cmp(student a, student b);
int main()
{
	int n, m, g;
	while(cin >> n)
	{
		if(!n) break;
		cin >> m >> g;
		vector<int> score(m);
		for(int i=0;i<m;++i)
			cin >> score[i];
		vector<student> students;
		int n_pass=0;
		for(int i=0;i<n;i++)
		{
			student s;
			int sum=0, n_finish=0;
			cin >> s.id >> n_finish;
			char t;
			for(int j=0;j<n_finish;j++)
			{
				int problem_id;
				scanf("%d", &problem_id);
				sum += score[problem_id-1];
			}
			s.grade = sum;
			if(sum >= g) ++n_pass;
			students.push_back(s);
		}
		sort(students.begin(), students.end(), cmp);	//������partial_sort��ֻ��ǰn_pass��ѧ�����򼴿� 
		cout << n_pass << endl;
		for(auto stu : students)	//�������ֱ��for i��0��n_pass-1���������жϵ�ʱ�� 
		{
			if(stu.grade >= g)
				cout << (stu.id + " ") << stu.grade << endl;
			else break;
		}
	}
	return 0;
}
bool cmp(student a, student b)
{
	if(a.grade > b.grade) return true;
	else if(a.grade < b.grade) return false;
	else{
		if(a.id < b.id) return true;
		else return false;
	}
	return false;
}
