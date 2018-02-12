#include <iostream>
using namespace std;
long long n; 
long long pingfanghe(long n){
	if(n==0) return 1;
	return pingfanghe((n-1)*(n-1))+n*n;
} 
int main(){
	cin>>n;
	pingfanghe(n);
	cout<<n<<endl;
}
