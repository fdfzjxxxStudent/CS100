#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int length;
	cout<<"Please input the length:";
	cin>>length;
	cout<<"Please input the words/numbers:";
	char d[length]={0};
	for(int i=0;i<length;i++) cin>>d[i];
	cout<<endl;
	sort(d,d+length);
	cout<<"Sorted words/numbers:";
	for(int i=0;i<length;i++) cout<<d[i]<<' ';	
	return 0;
}


