#include<iostream>
using namespace std;
long long f(int x){//�������� ����x�Ľ׳�x!  
	long long ans=1;//����ansΪ���������ͣ���ʼ��Ϊ1 
	for(int i=2;i<=x;i++)
		ans*=i;
	return ans;
}
int main(){
	int n;
	cin>>n;
	cout<<f(n)<<endl;
	cout<<f(n+1)<<endl;
	cout<<f(n+2)<<endl;
	cout<<f(n+3)<<endl;
	return 0;
}
