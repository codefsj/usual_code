#include<iostream>
using namespace std;
int num=0;
void dfs(int cnt,int now)//cnt是当前有几种类型的牌，now是现在有几张牌
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
    for(int i=0;i<5;i++)//对每一种类型的牌有5种情况，取0/1/2/3/4张
    {
      now=now+i;
      dfs(cnt+1,now);
      now=now-i;//回溯
 
    }
  }
 
}
int main()
{
  dfs(0,0);
 cout<<num<<endl;
  return 0;
}
