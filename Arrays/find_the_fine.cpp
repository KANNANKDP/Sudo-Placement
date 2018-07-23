/*Given an array of penalties, an array of car numbers and also the date. 
The task is to find the total fine which will be collected on the given date.
Fine is collected from odd-numbered cars on even dates and vice versa.
*/

#include  <iostream>
using namespace std;

int computeTotalFine(int car_num[],int fine[],int n,int date){
	int total_fine=0;
	if(date%2==0){
		for(int i=0;i<n;i++){
			if(car_num[i]%2!=0){
				total_fine+=fine[i];
			}				
		}
		return total_fine;	
	}
	else{
		for(int i=0;i<n;i++){
			if(car_num[i]%2==0){
				total_fine+=fine[i];
			}				
		}
		return total_fine;					
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,date;
		cin>>n>>date;
		int car_num[n];
		for(int i=0;i<n;i++){
			cin>>car_num[i];
		}
		int fine[n];
		for(int i=0;i<n;i++){
			cin>>fine[i];
		}
		cout<<computeTotalFine(car_num,fine,n,date)<<endl;
	}

}