#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	string str="cefh";
	while(t--)
	{
	    string a;
	    cin >> a;
	    long long count = 0;
	    int len = a.size();
	    for(int i=0;i<len-3;i++)
	    {
	        if(a[i]=='c' || a[i]=='h' || a[i]=='e' || a[i]=='f')
	        {
	            string arr;
	            arr.push_back(a[i]);arr.push_back(a[i+1]);arr.push_back(a[i+2]);arr.push_back(a[i+3]);
	            sort(arr.begin(),arr.end());
	            if(arr == str)
	            {
	                count++;
	            }
	        }
	    }
	    
	    if(count == 0)
	    {
	        cout << "normal" << endl;
	    }
	    else
	    {
	        cout << "lovely " << count << endl; 
	    }
	}
	return 0;
}