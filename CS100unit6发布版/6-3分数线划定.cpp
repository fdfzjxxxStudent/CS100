#include<iostream>
#include<algorithm>
#define N 10000
using namespace std;
struct person{
	int k,s;
};
person x[N];
int cmp(const person &a,const person &b){
	if(a.s>b.s) return 1;
	if(a.s<b.s) return 0;
	if(a.k<b.k) return 1;
	else return 0;
}
int main(){
	int i,tot,n,m;
	cin>>n>>m;
	for(i=0;i<n;i++) cin>>x[i].k>>x[i].s;
	sort(x,x+n,cmp);
	tot=int(m*1.5);
	cout<<x[tot-1].s;
	while(tot<n && x[tot].s==x[tot-1].s) tot++;	
	cout<<' '<<tot<<endl;
	for(i=0;i<tot;i++) 
		cout<<x[i].k<<' '<<x[i].s<<endl;
	return 0;
}
