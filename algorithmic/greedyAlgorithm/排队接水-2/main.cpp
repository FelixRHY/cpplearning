#include <bits/stdc++.h>
using namespace std;
long long sum,a[20],mi=1000001;
int n,m;
struct P{
	int i,t;
}p[1010];
bool cmp(P a,P b){
	if(a.t==b.t){
		return a.i<b.i;
	}
	return a.t<b.t;
}
int main(){
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>p[i].t;
		p[i].i=i;
	}
	sort(p+1,p+n+1,cmp);
	cout<<p[1].i;
	for(int i=2;i<=n;++i){
		cout<<" "<<p[i].i;
	}
	cout<<endl;
	for(int j=1;j<=n;){
		mi=1000001;
		for(int i=1;i<=m;++i){
			if(a[i]==0&&j<=n){
				a[i]=p[j].t;
				j++;
			}
			if(j>n&&a[i]==0){
				a[i]=mi;
			}
		}
		for(int i=1;i<=m;++i){
			mi=min(mi,a[i]);
		}
		sum=sum+(n-j+1)*mi;
		for(int i=1;i<=m;++i){
			a[i]-=mi;
		}

	}
	double k=sum*1.0/n*1.0;
	printf("%.2lf",k);
	return 0;
}