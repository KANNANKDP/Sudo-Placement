#include <iostream>
using namespace std;

void subarraySum(int arr[],int n,int sum){
	int curr_sum=arr[0];
	int start=0,i;
	for(i=1;i<=n;i++){
		while(curr_sum>sum && start<i-1){
			curr_sum-=arr[start];
			start++;
		}
		if(curr_sum==sum){
			cout<<start+1<<" "<<i<<endl;
			return;
		}
		if(i<n){
			curr_sum+=arr[i];
		}
	}
	cout<<-1<<endl;
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,sum;
		cin>>n>>sum;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		subarraySum(arr,n,sum);
	}
}