#include<iostream>
using namespace std;
int n;
char c;
void pyramid(int m,char x){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1-i;j++)
			cout<<" ";
		for(int j=0;j<i+i+1;j++)
			cout<<c;
		cout<<endl;
	}
}
int main(){
cin>>n>>c;
pyramid(n,c);
n=n*2;
pyramid(n,c);
return 0;
}
