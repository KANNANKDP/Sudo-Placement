/*Given a keypad as shown in diagram, and a n digit number, 
list all words which are possible by pressing these numbers.*/

#include <iostream>
#include <string>
using namespace std;

const char hash_table[10][5] = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void computePossibleCombinations(int digits[],int index,int n,string output=""){

	if(n==0){
		cout<<output<<" ";
		return;
	}

	string str = hash_table[digits[index]];
	for(int i=0;i<str.size();i++){
		computePossibleCombinations(digits,index+1,n-1,output+hash_table[digits[index]][i]);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int digits[n];
		for(int i=0;i<n;i++){
			cin>>digits[i];
		}
		computePossibleCombinations(digits,0,n);
		cout<<endl;
	}

}