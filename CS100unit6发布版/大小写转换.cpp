#include <iostream>
#include <string>
using namespace std;
int main(){
	string s;
	getline(cin,s);
	for(int i=0;i<=s.size();i++){
		if(s[i]>='a'&&s[i]<='z') cout<<char(s[i]-32);
		else if(s[i]>='A'&&s[i]<='Z') cout<<char(s[i]+32);
		else if(s[i]==' ') cout<<" ";
		else cout<<s[i];
	}
	return 0;
} 
