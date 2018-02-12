#include <string>
#include <iostream>
using namespace std;
int main(){
	string a;
	getline(cin,a);
	for(int i=0;i<=a.size()-1;i++) if(a[i]>=97&&a[i]<=122) a[i]=a[i]-32;
	for(int i=0;i<=a.size()-1;i++) cout<<char(a[i]);
}
