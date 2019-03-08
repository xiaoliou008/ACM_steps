#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct student
{
	unsigned int num;
	unsigned int score;
	unsigned int time[3];
};	//·âºÅ²»ÄÜÂ© 
bool cmp(student, student);
int main()
{
	int n;
	while(cin >> n && n >= 0)
	{
		vector<student> students(n);
		vector<student> div_stu[6];
		for(int i=0;i<n;i++)
		{
			unsigned n_problem;
			char temp;
			cin >> n_problem >> students[i].time[0] >> temp >> students[i].time[1]
				>> temp >> students[i].time[2];
			students[i].num = i;
			div_stu[n_problem].push_back(students[i]);
		}
		for(auto stu : div_stu[0])
			students[(stu.num)].score = 50;
		for(int i=1;i<5;i++)
		{
			auto beg = div_stu[i].begin(), end = div_stu[i].end();
			auto mid = beg + (end-beg)/2;
			partial_sort(beg, mid, end, cmp);
			for(auto iter=beg;iter!=mid;iter++)
				students[(iter->num)].score = 55 + 10*i;
			for(auto iter=mid;iter!=end;iter++)
				students[(iter->num)].score = 50 + 10*i;
		}
		for(auto stu : div_stu[5])
			students[(stu.num)].score = 100;
		for(auto stu : students)
			cout << stu.score << endl;
		cout << endl;
	}
	return 0;	
} 
bool cmp(student a, student b)
{
	if(a.time[0] != b.time[0]) return (a.time[0] < b.time[0]);
	else if(a.time[1] != b.time[1]) return (a.time[1] < b.time[1]);
	else return (a.time[2] < b.time[2]);
}
