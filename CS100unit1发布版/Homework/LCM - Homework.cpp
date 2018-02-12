#include <iostream>
#include <cmath>
using namespace std;
long long int a,b,x,y,lcmnum;
int gcdlcm(int x,int y){
	int tmp;
	while(tmp=x%y){
		x=y;
		y=tmp;
	}
	return y;
}
int main(){
	cin>>a>>b;
	lcmnum=a*b/gcdlcm(a,b);
	cout<<lcmnum<<endl;
}
