#include <bits/stdc++.h>
using namespace std;
long long ans,n,y,M,d,h,m,dy,dM,dd,dh,dm,t[5010],mm[13]={0,31,59,90,120,151,181,212,243,273,304,334,365};
int main(){
	scanf("%d-%d-%d-%d:%d",&y,&M,&d,&h,&m);
	scanf("%d-%d-%d-%d:%d",&dy,&dM,&dd,&dh,&dm);
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>t[i];
	}
	sort(t,t+n);
	for(int i=0;i<y;++i){
		if(i%4==0&&(i%100!=0||i%400==0)){
			d+=366;
		}else{
			d+=365;
		}
	}
	d=d+mm[M-1];
	if(y%4==0&&(y%100!=0||y%400==0)&&M>2){
		d++;
	}
	h=h+d*24;
	m=m+h*60;
	for(int i=0;i<dy;++i){
		if(i%4==0&&(i%100!=0||i%400==0)){
			dd+=366;
		}else{
			dd+=365;
		}
	}
	dd=dd+mm[dM-1];
	if(dy%4==0&&(dy%100!=0||dy%400==0)&&dM>2){
		dd++;
	}
	dh=dh+dd*24;
	dm=dm+dh*60;
	long long x=dm-m;
	for(int i=0;i<n;++i){
		if(x-t[i]>=0){
			x-=t[i];
			ans++;
		}
	}
	cout<<ans;
	return 0;
}