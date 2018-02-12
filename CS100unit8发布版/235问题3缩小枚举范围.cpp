#include<iostream>
using namespace std;
int a1,a2,a3,n;
int main(){
	cin>>n;
	//wrtie your code here
	
	for(a1=0;a1<=n;a1++)
	for(a2=a1%2;a2<=n;a2+=2)
	for(a3=(3*n-a2)%3;a3<=n;a3+=3){
		//wrtie your code here 
	}	
	//wrtie your code here
	return 0;
}


