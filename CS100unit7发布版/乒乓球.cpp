#include <iostream>
#include <string>
using namespace std;
string record,tmp;
int me=0,you=0,returnnum;
int make(string tmp,int way){
	for(int i=1;i<=record.size()/11;i++,me=0,you=0,tmp.erase(0,11)){
		for(int j=0;j<=way;j++){
			if(tmp[j]=='W') me++;
			if(tmp[j]=='L') you++;
		}
		cout<<me<<":"<<you<<endl;
	}
	return tmp.size();
} 
int main(){
	//���� 
	cin>>record;
	record.erase(record.size(),1);
	//���к������� 
	returnnum = make(record,11);
	if(returnnum>1)	make(tmp,returnnum);
	//================== 
	cout<<endl;//������� 
	tmp=record;//����tmp 
	//================== 
	//���к������� 
	returnnum = make(record,21);
	if(returnnum>1)	make(tmp,returnnum);
} 
