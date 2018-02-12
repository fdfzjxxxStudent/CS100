#include<iostream>
#include<string>
using namespace std;
string s;
int main(){
	cin>>s;
	for(int i=0;i<s.size();i++)
		if(s[i]>='a'&&s[i]<='z') 
			cout<<char(s[i]-'a'+'A');
		else 
			cout<<s[i];
	return 0;
}


