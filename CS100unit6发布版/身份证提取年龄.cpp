#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	int x;
	string s;
	stringstream ss;
	cin>>s;
	ss<<s.substr(6,4);
	ss>>x;
	cout<<2017-x<<endl;
	return 0;
}
