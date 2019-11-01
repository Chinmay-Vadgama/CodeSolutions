#include <bits/stdc++.h>
using namespace std;
typedef struct
{
    vector<int> index;
    int odd=0;
}data;
int main() {
	ios_base::sync_with_stdio(false);
	int t;
	cin >> t;
	while(t--)
	{
	    int freq[26]={0},i;
	    string s;
	    cin >> s;
	    data arr[26];
	    int str[s.size()];
	    for(int i=0;i<s.size();i++)
	    {
	        freq[s[i]-'a']++;
	        arr[s[i]-'a'].index.push_back(i+1);
	    }
	    int temp=0;
	    for(i=0;i<26;i++)
	    {
	        if(arr[i].index.size() % 2 == 1)
	        {
	            temp+=1;
	            arr[i].odd = 1;
	        }
	    }
	    
	    if(s.size() % 2 == 0 && temp>0)
	    {
	        cout << -1 << endl;
	    }
	    else
	    {
	        if(s.size() % 2 == 1 && temp > 1)
	        {
	            cout << -1 << endl;
	        }
	        else
	        {
	            int k=0,u=s.size()-1;
	            for(i=0;i<26;i++)
	            {
	                 if(arr[i].odd == 0)
	                 {
	                    while(!arr[i].index.empty())
	                    {
	                   
	                          str[k]=arr[i].index.back();
	                          arr[i].index.pop_back();
	                          k++;
	                          str[u]=arr[i].index.back();
	                          arr[i].index.pop_back();
	                          u--;
	                    }
	                }
	           }
	           for(i=0;i<26;i++)
	           {
	                while(!arr[i].index.empty())
	                    {
	                          if(k==u)
	                          {
	                             str[k]=arr[i].index.back();
	                             arr[i].index.pop_back();
	                             k++;
	                             break;
	                          }
	                          else
	                          {
	                            str[k]=arr[i].index.back();
	                            arr[i].index.pop_back();
	                            k++;
	                            str[u]=arr[i].index.back();
	                            arr[i].index.pop_back();
	                            u--;
	                          }
	                    }
	           }
	           
	           for(int j=0;j<s.size();j++)
	           {
	               cout << str[j] << " "; 
	           }
	           cout << endl;
	       }
	        
	    }
	}
	return 0;
}