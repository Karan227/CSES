#include<iostream>
using namespace std;


int main(){
	long long maxnum=INT8_MIN;
	long long ans=0;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long a;
		cin>>a;
		maxnum = max(maxnum,a);
			ans += maxnum-a;
		}
	cout<<ans;
}
