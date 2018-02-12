#include <iostream>
#include <string>
using namespace std;
string s;
char code;
int i,c=1,tot;
int main(){
	cin>>s;
	for(i=0;i<=s.size()-1;i++)
		if(i!=1&&i!=5&&i!=11){
		tot+=c*(s[i]-'0');
		c++;
	}
	tot%=11;
	if(tot==10) code='X';
	else code=char('0'+tot);
	if(s[i]==code) cout<<"Right";
	else cout<<s.substr(0,i)<<code;
	return 0;
}
