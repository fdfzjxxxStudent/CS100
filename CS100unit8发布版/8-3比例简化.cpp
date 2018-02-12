#include<iostream>
using namespace std;
int main(){
int a,b,l,i,j,ii,jj;
double best,diff,ratio;
	cin>>a>>b>>l;
	ratio=a*1.0/b; best=l;
	for(i=1;i<=l;i++) 
	for(j=1;j<=l;j++) {
		diff=i*1.0/j-ratio;
		if(diff>=0 && diff<best) {
			best=diff;
			ii=i; jj=j;
		}
	}
	cout<<ii<<' '<<jj<<endl;		
	return 0;
}
