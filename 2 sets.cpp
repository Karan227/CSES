#include<iostream>
#include<vector>
using namespace std;
int main(){
	vector <int> a;
	vector <int> b;
	long long int n,c;
	cin>>n;
	c= n*(n+1)/2ll;
	if(c%2==1){
		cout<<"NO";
	}
	else{
		cout<<"YES"<<endl;
		c=c/2ll;
		while(n){
			if(c-n>=0){
				a.push_back(n);
				c=c-n;
			}
			else{
				b.push_back(n);
			}
			n=n-1;
		}
		cout<<a.size()<<endl;
		for(int i=0;i<a.size();i++){
			cout<<a[i]<<" ";
		}
		cout<<endl;
		cout<<b.size()<<endl;
		for(int i=0;i<b.size();i++){
			cout<<b[i]<<" ";
		}
	}
	
}
