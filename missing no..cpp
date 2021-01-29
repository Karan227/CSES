#include<iostream>
using namespace std;

int main(){
	long sum=0, n;
	cin>>n;
	for(int i=1;i<n;i++){
		int a;
		cin>>a;
		sum+=a;
	}
	cout<<n*(n+1)/2-sum;
}
