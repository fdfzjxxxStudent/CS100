#include <iostream>
#include <cmath>
#include <windows.h>
using namespace std;
long long int a,b,x,y,lcmnum;
int gcdlcm(long long int x,long long int y){
	long long int tmp;
	while(tmp=x%y){
		x=y;
		y=tmp;
	}
	lcmnum=(a/y)*(b/y)*y;
	return lcmnum;
}
int main(){
	system("title 最小公倍数");
	while(true){
		cout<<"请输入两个数（两个-1退出）：";
		cin>>a>>b;
		system("title 计算中......");
		if(a==-1&&b==-1){
			system("title 再见");
			return 0;
		}
		if(a>=1000000&&b>=1000000){
			cout<<"这么大的数？！难不倒我！"<<endl;
			Sleep(2000);
		}
		if(a<=1000&&b<=1000){
			cout<<"这数也太小了吧！小菜一碟！"<<endl;
			Sleep(100);
		}
		system("title 最小公倍数");
		cout<<"最小公倍数："<<gcdlcm(a,b)<<endl;
		Sleep(5000);
		cout<<endl;
	}
}
