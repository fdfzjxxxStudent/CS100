#include<iostream>
#include<cmath>
#define M 100
using namespace std;
int main(){
int n,ii,jj,diff,ans,i,j;
	cin>>n;
	ans=10000;
	for(i=1;i<=M-1;i++)
	for(j=i+1;j<=M;j++){
		diff=fabs(i*j-n);
		if(diff<ans) {
			ans=diff;
			ii=i; jj=j;
		}
	}
	cout<<ii<<"*"<<jj<<"="<<ii*jj;
	return 0;
}
