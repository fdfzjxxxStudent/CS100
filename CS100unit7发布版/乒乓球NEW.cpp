#include<iostream>
#include<cmath>
#include<string>
#define N 1000
using namespace std;
int hero,villian;
char ch;
string s;
void play(int top){
	hero=villian=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='W') hero++; 
		else villian++; 
		if((hero>=top || villian>=top) && fabs(hero-villian)>=2) {
			cout<<hero<<':'<<villian<<endl;
			hero=villian=0;
		}		
	}
	cout<<hero<<':'<<villian<<endl;
}
int main(){
	cin>>ch;
	while(ch!='E'){ s=s+ch; cin>>ch;}
	play(11);
	cout<<endl;
	play(21);
	return 0;
}
