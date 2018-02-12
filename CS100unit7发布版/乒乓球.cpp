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
	//输入 
	cin>>record;
	record.erase(record.size(),1);
	//进行函数计算 
	returnnum = make(record,11);
	if(returnnum>1)	make(tmp,returnnum);
	//================== 
	cout<<endl;//输出换行 
	tmp=record;//重置tmp 
	//================== 
	//进行函数计算 
	returnnum = make(record,21);
	if(returnnum>1)	make(tmp,returnnum);
} 
