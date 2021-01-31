#include<iostream>
using namespace std;

void findElement(long long row,long long column){
	if(row>=column){
		if(row%2==0){
			cout<<row*row-column+1<<"\n";
		}
		else{
			cout<<(row-1)*(row-1)+column<<"\n";
		}
	}
	else{
		if(column%2==0){
			cout<<(column-1)*(column-1)+row<<"\n";
		}
		else{
			cout<<column*column-row+1<<"\n";
		}
	}
}

int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		long long a,b;
		cin>>a>>b;
		findElement(a,b);
	}
}
