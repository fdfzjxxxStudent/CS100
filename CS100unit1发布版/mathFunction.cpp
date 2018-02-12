#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,y;
	cin>>x>>y;
	cout<<"fabs("<<x<<"): "<<fabs(x)<<endl;
	//f代表float，fabs是浮点数绝对值 
	cout<<"floor("<<x<<"): "<<floor(x)<<endl;
	//向下取整，floor(-8.8)为-9 
	cout<<"ceil("<<x<<"): "<<ceil(x)<<endl;
	//向上取整，ceil(-8.8)为-8 
	cout<<"sqrt("<<x<<"): "<<sqrt(x)<<endl;
	//平方根 
	cout<<"pow("<<x<<","<<y<<"): "<<pow(x,y)<<endl;
	//power,pow(x,y)为x的y次方 
	return 0;
}

/*
int abs(int x)
long labs(long x)
double fabs(double x)
double floor(double x)
double ceil(double x) 
double sqrt(double x)
double pow(double x,double y)
*/
 
 


