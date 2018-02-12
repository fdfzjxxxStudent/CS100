#include<iostream>
using namespace std;
int gcd(int x,int y){
	int tmp;
	while (tmp=x%y){ //1.tmp赋值为x%y  2.当tmp不为零时 执行循环 
		x=y;
		y=tmp;
	}
	return y;
}	
int main(){
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b); 
	return 0;
}
