#include<iostream>
using namespace std;

int main(){
	int i,n;
	cin >> n;
	if(n==1){
		cout<<n;
		return 0;
	}
	if(n==2||n==3){
		cout<<"NO SOLUTION";
		return 0;
	}
	if(n%2==0){
		for(i=2;i<=n;i+=2){
			cout<<i<<" ";
		}
		for(i=1;i<n;i+=2){
			cout<<i<<" ";
		}
	}
	else{
		for(i=n;i>0;i-=2){
			cout<<i<<" ";
		}
		for(i=n-1;i>0;i-=2){
			cout<<i<<" ";
		}
	}
}
