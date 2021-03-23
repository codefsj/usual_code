#include<bits/stdc++.h>
using namespace std;
int s(int a)
{
	char b[100];
	itoa(a,b,2);
	int i=0,count=0;
	while(b[i])
	{
		if(b[i]=='1')
		{
			++count;
		}
		++i;
	}
	return count;
}
int main()
{
	int a,b;
	int count=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		count+=s(i);
	}
	cout<<count<<endl;
	return 0;
}
