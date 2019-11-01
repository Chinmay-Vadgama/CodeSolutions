#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--)
	{
	    int n,m,x,k;
	    cin >> n >> m >> x >> k;
	    string s;
	    cin >> s;
	    int ec=0,oc=0;
	    for(int i=0;i<s.size();i++)
	    {
	        if(s[i]=='E'){ec++;//no of workers to work on even month.
	        }
	        else{oc++;// No of users to work on odd month.
	        }
	    }
	    if(m==0 || x==0)
	    {
	        cout << "no\n";
	    }
	    else{
	    for(int i=1;i<=m;i++)
	    {
	        if(i%2==1) // odd month
	        {
	            n-=min(oc,x);
	            oc-=min(oc,x);
	        }
	        else
	        {
	            n-=min(ec,x);
	            ec-=min(ec,x);
	        }
	    }
	    if(n>0)
	    {
            cout << "no\n";	        
	    }
	    else
	    {
	        cout << "yes\n";
	    }
	  }
	}
	return 0;
}
