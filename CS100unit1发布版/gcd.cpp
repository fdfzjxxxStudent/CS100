#include<iostream>
using namespace std;
int gcd(int x,int y){
	int tmp;
	while (tmp=x%y){ //1.tmp��ֵΪx%y  2.��tmp��Ϊ��ʱ ִ��ѭ�� 
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
