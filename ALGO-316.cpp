#include<stdio.h>
#include <string>
#include <iostream>
#include<vector>
using namespace std;
int main()
{
	string a;
	vector<string> v;
	string s="";
    getline(cin,a);
	for(int i=0;i<a.length();i++)
	{
		if((i+1)==a.length())
		{
			s+=a[i];
			v.insert(v.begin(),s);
			break;
		 } 
		if(a[i+1]==' ')
		{
			s+=a[i];
			v.insert(v.begin(),s);
			s="";
			++i;
		}
		else
		{
			s+=a[i];
		}
	} 
	for(int i=0;i<v.size();i++)
	{
		if((i+1)==v.size())
		{
			cout<<v[i]<<endl;
			return 0;
		}
		cout<<v[i]<<" ";
	}
	return 0;
}
