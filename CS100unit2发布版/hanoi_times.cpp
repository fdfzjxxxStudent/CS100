#include <iostream>
using namespace std;
long long int ans=2,n;
int main(){
	cin >> n;
	for(long long int i=1;i<=n;i++) ans=ans*2;
	cout<<ans/2-1<<endl;
	return 0;
}
