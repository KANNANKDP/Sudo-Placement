// Given an array and an integer k, find the maximum for each and every contiguous subarray of size k.

#include <iostream>
using namespace std;

void computeMaximum(int arr[] , int n, int k){
	int max=0;
	for(int i=0;i+k-1<n;i++){
		for(int j=i;j<i+k;j++){
			if(max<arr[j]){
				max=arr[j];
			}
		}
		cout<<max<<" ";
		max=0;
	}
	return;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		computeMaximum(arr,n,k);
		cout<<endl;
	}
}