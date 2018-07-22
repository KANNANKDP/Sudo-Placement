#include <stdio.h>
#include <stdlib.h>

int gcd(a,b){
    if(b==0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}

void leftRotate(int arr[],int d,int n){
    int g=gcd(d,n);
    int i;
    for(i=0;i<g;i++){
        int temp=arr[i];
        int j=i;
        while(1){
            int k=j+d;
            if(k>=n){
                k=k-n;
            }
            if(k==i){
                break;
            }
            arr[j]=arr[k];
            j=k;
        }
        arr[j]=temp;
    }
}

int main(){
    int arr[]={1, 2, 3, 4, 5, 6, 7};
    int n=sizeof(arr)/sizeof(n=arr[0]);

    leftRotate(arr,2,n);
    int i;
for(i=0;i<n;i++){
    printf("%d ",arr[i]);
}
return 0;
}
