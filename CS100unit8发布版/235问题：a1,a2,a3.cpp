#include <iostream>
using namespace std;
int n,ans,a1,a2,a3,num;
int main(){
	cin>>n;
	for(a1=0;a1<=n;a1++) 
		for(a2=a1%2;a2<=n;a2++)
			for(a3=(3*n-a2)%3;a3<=n;a3++)
				if((a1+a2)%2==0&&(a2+a3)%3==0&&(a1+a2+a3)%5==0) {/*cout<<ans<<endl;*/ans=a1+a2+a3;num++;}
	cout<<"No."<<num<<endl;
	cout<<"Answer:"<<ans<<endl;
	return 0;
}
