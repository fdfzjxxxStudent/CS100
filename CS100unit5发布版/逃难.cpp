#include <iostream>
#include <algorithm>
#include <string>
#define M 1000
using namespace std;
/*
struct treasure{
	string price;
	string weight;
	string num;
};
/*
int cmp(const treasure&x,const treasure&y){
	if(x.price>y.price||x.price==y.price && x.weight>y.weight||x.price==y.price && x.weight==y.weight && x.num>y.num) return 1;
	if(x.price<y.price||x.price==y.price && x.weight<y.weight||x.price==y.price && x.weight==y.weight && x.num<y.num) return 0;
	else return 0;
}*/
int main(){
	int n;
	string p[M],w[M],nu[M];
	cin>>n;
	for(int i=1;i<=n;i++) cin>>nu[i]>>p[i]>>w[i];
	sort(p,p+n);
	for(int i=1;i<=n;i++) 
		if(p[i]==p[i+1])
			if(w[i]<w[i]) cout<<p[i]<<endl;
			if(w[i]==w[i+1])
				if(nu[i]<nu[i]) cout<<p[i]<<endl;
	cout<<p[i]<<endl;
} 
