   // Don't think in forward who can vote whom . => think if this guy can vote others?
   
   #include <bits/stdc++.h>
    using namespace std;
    typedef long long ll;
    int main() {
        ios_base::sync_with_stdio(false);
    	ll t;
    	cin >> t;
    	while(t--)
    	{
    	    ll n,i,j;
    	    cin >> n;
    	    ll arr[n],ans[n];
    	    for(i=0;i<n;i++)
    	    {
    	        cin >> arr[i];
    	        ans[i]=0;
    	    }
    	    //vector<ll> v;
    	   ll sum=0,sum1=0;
    	    for(i=0;i<n;i++)
    	    {
    	            sum1=0;
    	            for(j=i-1;j>=0;j--)
    	            {
    	                if(arr[i]>=sum1)
    	                {
    	                    ans[j]++;
    	                }
    	                else
    	                {
    	                    break;
    	                }
    	                sum1+=arr[j];
    	            }
    	        
    	            sum=0;
    	            for(j=i+1;j<n;j++)
    	            {
    	               
    	                    if(arr[i]>=sum)
    	                    {
    	                        ans[j]++;
    	                    }
    	                    else
    	                    {
    	                        break;
    	                    }
    	                
    	                    sum+=arr[j];
    	            
    	            }
    	    }  
    	    
    	    
    	    for(i=0;i<n;i++)
    	    {
    	        cout << ans[i] << " ";
    	    }
    	    cout << endl;
    	    
    	}
    	return 0;
    }  
