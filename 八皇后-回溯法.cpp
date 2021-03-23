#include<cstdio>
using namespace std;
#define maxn 100
int a[maxn],n,ans=0;
int b1[maxn],b2[maxn],b3[maxn];
void dfs(int x)
{
	if(x>n){
		ans++;
		if(ans<=3){
			for(int i=1;i<=n;i++)
				printf("%d",a[i]);
			puts(" ");
		}
		return ;
	}
	for(int i=1;i<=n;i++){
		if(b1[i]==0 && b2[x+i]==0 && b3[x-i+15]==0){
			a[x]=i;
			b1[i]=1;b2[x+i]=1;b3[x-i+15]=1;
			dfs(x+1);
			b1[i]=0;b2[x+i]=0;b3[x-i+15]=0;
		}
	}
}
int main()
{
	
	scanf("%d",&n);
	dfs(1);
	printf("%d",ans);
	return 0;
} 
