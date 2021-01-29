#include<iostream>
using namespace std;

int main(){
	string s;
	cin>>s;
	long len,i,j,count=0,min=0;
	len = s.length();
	i=0;
	j=1;
	while(i<len){
		if(s[i]==s[j]){
			count++;
			j++;
			if(count>min){
				min=count;
			}
		}
		else{
			i=j;
			j++;
			count=0;
		}
	}
	cout<<min+1;
}

