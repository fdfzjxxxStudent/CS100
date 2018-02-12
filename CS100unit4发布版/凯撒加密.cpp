#include <string>
#include <iostream>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	for(int i=0;i<=a.size()-1;i++){
		if(a[i]>=97&&a[i]<=121||a[i]>=65&&a[i]<=89) a[i]=a[i]+1;
		if(a[i]==122) a[i]=97;
		if(a[i]==90) a[i]=65;
	}
	for(int i=0;i<=a.size()-1;i++) cout<<char(a[i]);
	return 0;
} 
