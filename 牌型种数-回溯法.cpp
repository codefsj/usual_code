#include<iostream>
using namespace std;
int num=0;
void dfs(int cnt,int now)//cnt�ǵ�ǰ�м������͵��ƣ�now�������м�����
{
  if(now>13||cnt>13)
  {
    return ;
  }
  else if(now==13)
  {
      num++;
    return ;
  }
  else
  {
    for(int i=0;i<5;i++)//��ÿһ�����͵�����5�������ȡ0/1/2/3/4��
    {
      now=now+i;
      dfs(cnt+1,now);
      now=now-i;//����
 
    }
  }
 
}
int main()
{
  dfs(0,0);
 cout<<num<<endl;
  return 0;
}
