#include<iostream>
#include<algorithm>
#define M 10005
using namespace std;
struct treasure{
	int id,v,w;
};
treasure f[M];
int cmp(const treasure &x,const treasure &y){
	if(x.v>y.v) return 1;
	if(x.v<y.v) return 0;
	if(x.w<y.w) return 1;
	if(x.w>y.w) return 0;
	if(x.id<y.id) return 1;
	else return 0;
}
int main(){
	int n,i;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>f[i].id>>f[i].v>>f[i].w;
	sort(f,f+n,cmp);
	for(i=0;i<n;i++) cout<<f[i].id<<endl;	
	return 0;
}
