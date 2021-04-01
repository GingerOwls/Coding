#include<bits/stdc++.h>
using namespace std;
int sumElement(int arr[],int n)
{
    long long int s=0;
    for(int i=0;i<n;i++)
    s+=arr[i];
    return s;
}
int main()
{
	int n; cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	cout<<sumElement(a,n);
}