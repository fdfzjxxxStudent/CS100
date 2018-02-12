#include<iostream>
#include<algorithm>
#define M 500
using namespace std;
int odd[M],even[M],ne,no,x,i;
int main(){
	ne=no=0;
	for(i=0;i<10;i++) {
		cin>>x;
		if(x%2==1) {
			odd[no]=x; no++;
		} else {
			even[ne]=x; ne++;
		}
	}
	sort(odd,odd+no);
	sort(even,even+ne);
	for(i=no-1;i>=0;i--) cout<<odd[i]<<" ";
	for(i=0;i<ne;i++) cout<<even[i]<<" ";	
	return 0;
}


