// Given an array A[] of N integers where each value represents number of chocolates 
// in a packet. Each packet can have variable number of chocolates.
// There are m students, the task is to distribute chocolate packets such that :
// 1. Each student gets one packet.
// 2. The difference between the number of chocolates 
// given to the students in packet with maximum chocolates and packet with minimum chocolates is minimum.


#include <iostream>
#include <algorithm>
#include <limits>
using namespace std;

void distributeChocolates(int arr[] , int n , int m){
	if( n == 0 || m ==0 ){
		return;
	}

	if(n < m ){
		return;
	}

	sort(arr,arr+n);//sort the array first in ascending order,now check every possible subset of the array

	int min_diff = 1000;

	int l,r;

	for(int i=0;i+m-1<n;i++){
		int diff = arr[i+m-1] - arr[i];
		if(diff < min_diff){
			min_diff = diff;
			l=i;
			r=i+m-1;
		}
	}

	cout<<min_diff<<endl;
	return;
}



int main(){
	int t,n,m;
	cin>>t;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cin>>m;
		distributeChocolates(arr,n,m);
	}
	return 0;
}