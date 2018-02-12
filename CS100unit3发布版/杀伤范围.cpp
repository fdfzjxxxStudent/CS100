#include<iostream>
#include<algorithm>
#define M 10005
using namespace std;
int d[M],i,n,k;
int main(){
	cin>>n>>k;
	for(i=0;i<n;i++) {
		cin>>d[i];
		if(d[i]<0) d[i]=-d[i];
	}
	sort(d,d+n);
	cout<<d[k-1];
	return 0;
}




