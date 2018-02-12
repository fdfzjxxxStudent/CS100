#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int a,b; string s;
	stringstream ss;
	cin>>a>>b;
	ss<<a*b; 
	ss>>s;
	cout<<s.size()<<endl;
	return 0;
}

