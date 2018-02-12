#include<iostream>
#include<string>
using namespace std;
string s;
int main(){
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]==' ') cout<<' ';
		else cout<<char((s[i]-'a'+1)%26+'a'+2);
	}
	return 0;
}

