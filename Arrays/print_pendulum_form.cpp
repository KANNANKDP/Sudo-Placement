#include <algorithm>
using namespace std;

void printPendulam(int arr[], int n){
    int mid = (n-1)/2;
    
    sort(arr,arr+n);
    
    int result[n];
    
    int i=1,j=1;
    result[mid]=arr[0];
    for(i=1;i<=mid;i++){
        result[mid+i]=arr[j++];
        result[mid-i]=arr[j++];
    }
    
    if(n%2==0){
        result[mid+i]=arr[j];
    }
    
    for(i=0;i<n;i++){
        cout<<result[i]<<" ";
    }
    cout<<endl;
    return;
}



int main(){
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin >> arr[i];
	    }
	    printPendulam(arr,n);
	}
	
	return 0;
}