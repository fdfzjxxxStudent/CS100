#include<iostream>
#include<algorithm>
#define M 10005
using namespace std;
int d[M],i,n,m;
int main(){
	cin>>n>>m;
	for(i=0;i<n;i++) cin>>d[i];
	sort(d,d+n);
	cout<<d[n-m];
	return 0;
}


