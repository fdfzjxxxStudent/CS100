#include<iostream>
#include<string>
#include<algorithm>
#include<iomanip>
#define M 105
using namespace std;
double female[M],male[M],h;
int i,n,nf,nm;
string s;
int main(){
	cin>>n;
	for(i=0;i<n;i++) {
		cin>>s>>h;
		if(s[0]=='m') 
			male[nm++]=h;
		else {
			female[nf]=h;
			nf++;
		}
	}
	sort(male,male+nm);
	sort(female,female+nf);
	for(i=0;i<nm;i++) 
		cout<<fixed<<setprecision(2)<<male[i]<<' ';
	for(i=nf-1;i>=0;i--) 
		cout<<fixed<<setprecision(2)<<female[i]<<' ';
	return 0;
}


