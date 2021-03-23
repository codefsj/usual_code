#include<bits/stdc++.h>
using namespace std;
int CompactIntegers(vector<int>&v)
{
	for(vector<int>::iterator it=v.begin();it!=v.end();)
	{
		if(*it==0)
			it=v.erase(it);
		else
			it++;
	}
	return v.size();
} 
int main()
{
	int n,m;
	cin>>n;
	vector<int>v;
	for(int i=0;i<n;i++)
	{
		cin>>m;
		v.push_back(m);
	}
	int num=CompactIntegers(v);
	cout<<num<<endl;
	for(int it=0;it<v.size();it++)
	{
		if((it+1)==v.size())
		{
			cout<<v[it]<<endl;
			return 0;
		}
		cout<<v[it]<<" ";
	}
	return 0;
}
