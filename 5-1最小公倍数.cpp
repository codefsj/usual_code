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
		cout<<"���������Ҫ�����������!" <<endl;
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
	cout<<"���������ֵ����Լ��Ϊ:"<<(a*b)/num<<endl;
	return 0;
}
