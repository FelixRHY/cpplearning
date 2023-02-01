#include <bits/stdc++.h>
using namespace std;
long long x,sum;
int n,ma;
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
	cin>>n;
	for(int i=1;i<=n;++i){
		cin>>p[i].t;
		p[i].i=i;
	}
	sort(p+1,p+n+1,cmp);
	cout<<p[1].i;
	for(int i=2;i<=n;++i){
		cout<<" "<<p[i].i;
		x=p[i-1].t+x;
		sum+=x;
//		cout<<" "<<x<<" "<<sum<<endl;
	}
	cout<<endl;
	double a=sum*1.0/n*1.0;
	printf("%.2lf",a);
	return 0;
}