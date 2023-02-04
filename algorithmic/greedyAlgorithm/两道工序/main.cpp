#include <bits/stdc++.h>
using namespace std;
int n,c,d;
struct P{
    int a,b;
}p[25010];
bool cmp(P x,P y){
    return min(x.a,y.b)<min(x.b,y.a);
}
int main(){
    cin>>n;
    for(int i=1;i<=n;++i){
        cin>>p[i].a>>p[i].b;
    }
    sort(p+1,p+n+1,cmp);
    for(int i=1;i<=n;++i){
        c=c+p[i].a;
        d=max(c,d)+p[i].b;
    }
    cout<<d;
    return 0;
}