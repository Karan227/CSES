#include<iostream>
#include<cmath>
using namespace std;
int main(){
	unsigned long long int n,mod,a,i;
	mod = 1000000007;
	cin>>n;
	a=1;
	for(i=0;i<n;i++){
		a= (a*2)%mod;
	}
	cout<<a;
}
