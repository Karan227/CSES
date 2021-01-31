#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(long int i=1;i<=n;i++){
		cout<<(i*i*(i*i-1)-8-24-(16*(i-4))-16-(24*(i-4))-(8*(i-4)*(i-4)))/2<<endl;
	}
}
