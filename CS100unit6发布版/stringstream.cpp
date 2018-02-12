#include<iostream>
#include<sstream>
using namespace std;
int main(){
	int i; char c; double d; string s="5~1.2";	
	stringstream ss;
	ss<<s;
	ss>>i>>c>>d;
	if(c=='*') cout<<i*d<<endl;
	else if(c=='+') cout<<i+d<<endl;
	else if(c=='#') cout<<i*d-i+d<<endl;
	else if(c=='~') cout<<i*d/i*d<<endl; 
	return 0;
}

