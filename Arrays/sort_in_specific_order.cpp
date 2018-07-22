#include <iostream>
#include <algorithm>
using namespace std;

//odd numbers in descending order and even numbers in ascending order

void sortArray(int arr[],int n){
	int i=0,j=n-1; //start and end indices of the array

	int k=0; // to keep track on number of odd numbers
	while(i<j){
		while(arr[i]%2 != 0){
			i++;
			k++;
		}
		while(arr[j]%2==0 && i<j){
			j--;
		}
		if(i<j){
			swap(arr[i],arr[j]);
		}
	}

	sort(arr,arr+k,greater<int>()); //sort odd numbers in descending order
	sort(arr+k,arr+n); //sort even numbers in ascending order
	for(int i=0;i<n;i++){ //print the array elements after sor
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}



int main(){
	int t,n;
	cin>> t;
	while(t--){
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}

		sortArray(arr,n);
	}

	return 0;
}