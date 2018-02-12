#include<iostream>
using namespace std;
double fun(double a,double b){
	if(a>b) return a;
	else return b;
}
int main(){
 	double a,b;
	cin>>a>>b;
	cout<<fun(a,b);
	return 0;
}
