#include <iostream>
using namespace std;
int main()
{
	int h[31],k;
	cin>>k;
	h[0]=1;
	h[1]=1;
	h[2]=2;
	for(int i=2;i<=k;i++)
		h[k]=h[k-1]*2*(2*k-1)/(k+1);
	cout<<h[k]<<endl;
} 
