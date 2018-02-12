#include<iostream>
#include<string>
#include<sstream>
using namespace std;
int main(){
	double d; int x,y; char c; 
	string s;
	stringstream ss;
	cin>>d;
	ss<<d;
	ss>>x>>c>>y;
	cout<<x<<endl<<y<<endl;
	return 0;
}


