#include <iostream>
using namespace std;
void hanoi(int n,char s, char x,char d) {
//move n plates from s to d, via x
	if (n== 1) 
		cout<<"Move from "<<s<<" to "<<d<<endl;
	else {
		hanoi(n-1, s,d,x);
		cout<<"Move from "<<s<< " to "<<d<<endl;
		hanoi(n-1, x,s,d);
	}  
}
int main(){
	int n;
	cin >> n;
	hanoi(n,'A','B','C'); 
	return 0;
}



