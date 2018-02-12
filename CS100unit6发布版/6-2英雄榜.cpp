#include<iostream>
#include<algorithm>
#include<string>
#define M 10005
using namespace std;
struct hero{
	string name;
	int a,b,rp,tot;
};
hero h[M];
int cmp(const hero &x,const hero &y){
	if(x.tot>y.tot) return 1;
	if(x.tot<y.tot) return 0;
	if(x.rp>y.rp) return 1;
	if(x.rp<y.rp) return 0;
	if(x.a>y.a) return 1;
	if(x.a<y.a) return 0;
	if(x.name<y.name) return 1;
	else return 0;	
}
int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++) {
		cin>>h[i].name>>h[i].a>>h[i].b>>h[i].rp;
		h[i].tot=h[i].a+h[i].b+h[i].rp;
	}
	sort(h,h+n,cmp);
	for(i=0;i<n;i++) 
		cout<<h[i].name<<endl;	
	return 0;
}
