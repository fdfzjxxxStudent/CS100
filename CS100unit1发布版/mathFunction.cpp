#include<iostream>
#include<cmath>
using namespace std;
int main(){
	double x,y;
	cin>>x>>y;
	cout<<"fabs("<<x<<"): "<<fabs(x)<<endl;
	//f����float��fabs�Ǹ���������ֵ 
	cout<<"floor("<<x<<"): "<<floor(x)<<endl;
	//����ȡ����floor(-8.8)Ϊ-9 
	cout<<"ceil("<<x<<"): "<<ceil(x)<<endl;
	//����ȡ����ceil(-8.8)Ϊ-8 
	cout<<"sqrt("<<x<<"): "<<sqrt(x)<<endl;
	//ƽ���� 
	cout<<"pow("<<x<<","<<y<<"): "<<pow(x,y)<<endl;
	//power,pow(x,y)Ϊx��y�η� 
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
 
 


