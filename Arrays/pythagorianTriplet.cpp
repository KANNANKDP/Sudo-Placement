/*Given an array of integers,
write a function that returns true 
if there is a triplet (a, b, c) that satisfies a2 + b2 = c2.
*/
#include <iostream>
#include <algorithm>
using namespace std;

void checkTriplet(int arr[],int n){
	for(int i=0;i<n;i++){
		arr[i]= arr[i]*arr[i];
	}

	sort(arr,arr+n);

	for(int i=n-1;i>=2;i--){
		int l=0;
		int r=i-1;
		while(l<r){
			if(arr[l]+arr[r]==arr[i]){
				cout<<"Yes"<<endl;
				return;
			}

			(arr[l]+arr[r]<arr[i])? l++:r--;
		}
	}
	cout<<"No"<<endl;
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

		checkTriplet(arr,n);
	}
}