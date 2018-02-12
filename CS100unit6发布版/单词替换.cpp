#include <iostream>
#include <string>
using namespace std;
string phrase,a,b;
int alen,awhere;
int main(){
	getline(cin,phrase);
	getline(cin,a);
	getline(cin,b);
	awhere=phrase.find(a);
	while(awhere!=-1){
		phrase.erase(awhere,a.size());
		phrase.insert(awhere,b);
		awhere=phrase.find(a);
	}
	cout<<phrase<<endl;
}
