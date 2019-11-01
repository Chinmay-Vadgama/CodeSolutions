#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll binsearch(ll chklb,ll chkub,ll lb,ll ub,ll Li[],ll h,ll n){
    //cout << chklb << " " << chkub << " " << lb << ' ' << ub << endl;
    if(chklb<=h and lb==(ub+1))
    {
        return(lb);
    }
    ll mid = ((ub + lb)/2);
    ll mid_sum = 0;
    for(ll i=0;i<n;i++){
        if(Li[i]%mid==0)
            mid_sum = mid_sum+(Li[i]/mid);
        else
            mid_sum = mid_sum+((Li[i]/mid)+1);
    }   
    //cout << mid_sum << endl;
    if(h>=mid_sum)
    {
        return(binsearch(mid_sum,chkub,mid,ub,Li,h,n));
    }
    else
    {
        return(binsearch(chklb,mid_sum,lb,mid,Li,h,n));

    }        
}
int main() {
	ios_base::sync_with_stdio(false);
	ll t;
	cin >> t;
	while(t--)
	{
	    ll n,h,i,sum=0;
	    cin >> n >> h;
	    ll arr[n],maxi=-1;
	    for(i=0;i<n;i++)
	    {
	        cin >> arr[i];
	        sum+=arr[i];
	        if(arr[i]>maxi)
	        {
	            maxi = arr[i];
	        }
	    }
	    ll ub=1;
        ll lb=maxi;
        ll chkub = sum;
        ll chklb = n;
        ll k=binsearch(chklb,chkub,lb,ub,arr,h,n);
        cout << k << endl;
	}
	return 0;
}
