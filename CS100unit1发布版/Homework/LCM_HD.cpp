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
	system("title ��С������");
	while(true){
		cout<<"������������������-1�˳�����";
		cin>>a>>b;
		system("title ������......");
		if(a==-1&&b==-1){
			system("title �ټ�");
			return 0;
		}
		if(a>=1000000&&b>=1000000){
			cout<<"��ô����������Ѳ����ң�"<<endl;
			Sleep(2000);
		}
		if(a<=1000&&b<=1000){
			cout<<"����Ҳ̫С�˰ɣ�С��һ����"<<endl;
			Sleep(100);
		}
		system("title ��С������");
		cout<<"��С��������"<<gcdlcm(a,b)<<endl;
		Sleep(5000);
		cout<<endl;
	}
}
