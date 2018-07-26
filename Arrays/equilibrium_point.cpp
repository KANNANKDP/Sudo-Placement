#include <iostream>
using namespace std;

void findEquiPoint(int arr[],int n){
	int sum=0;
	int leftSum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	for(int i=0;i<n;i++){
		sum-=arr[i];
		if(leftSum==sum){
			cout<<i+1<<endl;
			return;
		}
		leftSum+=arr[i];
	}
	cout<<-1<<endl;
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		findEquiPoint(arr,n);
	}

	return 0;
}