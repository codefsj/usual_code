#include<iostream>
using namespace std;
int lcm(int big,int small)
{
	int n=1;
	int temp=big*n;
	while(temp%small!=0)
	{
		++n;
		temp=big*n;
	}
	return temp;
}
int main()
{
	int a,b;
	cin>>a>>b; 
	while(1)
	{
		if(a<0 || b<0)
		{
		cout<<"请输入符合要求的两个数字!" <<endl;
		}
		else
		{
			break;
		}
		cin>>a>>b;
	}
	if(b>a)
	{
		int temp=b;
		b=a;
		a=temp;
	}
	int num=lcm(a,b);
	cout<<"这两个数字的最大公约数为:"<<(a*b)/num<<endl;
	return 0;
}
