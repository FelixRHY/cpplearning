#include <bits/stdc++.h>
using namespace std;
int n,a[110],x,ans;
int main(){
	cin>>n;
	for(int i=0;i<n;++i){
		cin>>a[i];
		x+=a[i];
	}
	x/=n;
	for(int i=0;i<n;++i){
		int o=a[i]-x;
		if(o==0){
			continue;
		}
		a[i]-=o;
		a[i+1]+=o;
		ans++;
	}
	cout<<ans;
	return 0;
}