#include <iostream>
#include <string>
#include <gcd>
using namespace std;
int A,B,L,gcded;
int main(){
	cin>>A>>B>>L;
	gcded=gcd(A,B);
gcd:
	A=A/gcded;
	B=B/gcded;
	if(A<=L&&B<=L)cout<<A<<" "<<B<<endl;
	else goto gcd;
}
