#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define pb push_back
#define ff first
#define se second
#define mp make_pair
#define M 1000000007

int main()
{

	ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;cin>>n;
    vector<int>arr(n);
    int ans = 0;
    for(auto &i: arr){cin>>i;ans+=i;}
    cout<<ans;
    
}
