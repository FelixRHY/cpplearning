#include <bits/stdc++.h>
using namespace std;
int w,n,p[30010],ans,k,vis[300010];
int main(){
	cin>>w>>n;
	memset(vis,1,sizeof(vis));
	for(int i=0;i<n;++i){
		cin>>p[i];
	}
	sort(p,p+n);
	for(int i=0;i<n;++i){
		k=1;
		for(int j=n-1;j>i;--j){
			if(p[i]+p[j]<=w&&vis[j]){
				vis[j]=0;
				k=0;
				ans++;
				break;
			}
		}
		if(k&&vis[i]){
			ans++;
		}
	}
	cout<<ans;
	return 0;
}