#include <bits/stdc++.h>
using namespace std;

int sumElement(int arr[],int n)
{   long long int sum =0;
    for(int i=0 ; i<n ;++i){
        sum += arr[i];
    }
    return sum;
}

int main(){
    long long t;
    cin >>t;
    while(t--){
        long long int n;
        cin >> n;
        int arr[n+2];
        for(int i=0; i<n ; ++i){
            cin >> arr[i];
        }
        cout << sumElement(arr,n)<<endl;
    }
    
return 0;
}