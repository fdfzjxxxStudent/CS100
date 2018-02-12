#include <iostream>
#include <string>
using namespace std;
int main(){
	string a;
	int c,d;
	cin>>a;
	if(a[0]=='-'){
		cout<<"-";
		a.erase(0,1);
	}
	for(int i=a.size()-1;i>=0;i--) if(a[i]=='0') d++;
	if(d==a.size()){
		cout<<"0";
		return 0;
	}
	for(int i=a.size()-1;i>=0;i--){
		if(a[i]=='0') a.erase(i,0);
		else break;
	}
	for(int i=a.size()-1;i>=0;i--) if(a[i]!='-') cout<<a[i];
	return 0;
} 
