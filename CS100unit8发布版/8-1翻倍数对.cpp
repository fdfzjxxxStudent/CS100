#include<iostream>
#define M 1005
using namespace std;
int n,c,i,j,d[M];
int main(){
	cin>>n;
	for(i=0;i<n;i++) cin>>d[i];
	
	for(i=0;i<n-1;i++)
	for(j=i+1;j<n;j++)
		if(d[i]==d[j]*2 || d[j]==d[i]*2) 
			c++;
	cout<<c;
	return 0;
}
