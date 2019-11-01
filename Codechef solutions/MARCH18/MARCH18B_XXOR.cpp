#include <bits/stdc++.h>
#define sc(t) scanf("%d",&t) 
using namespace std;
int data[100001][31]={0};
int main() {
    ios_base::sync_with_stdio(false);
    
    
        int n,q,i,j;
        sc(n);
        sc(q);
        int arr[n];
        // data from stdin
        for(i=0;i<n;i++)
        {
            sc(arr[i]);
        }
        int query[q][2];
        for(i=0;i<q;i++)
        {
            sc(query[i][0]);
            sc(query[i][1]);
        }
        
        //compute
        for(i=0;i<n;i++)
        {
            string s = bitset<31>(arr[i]).to_string();
            
            for(j=0;j<s.length();j++)
            {
               int a = s[j]-'0';
               
               if(a==0)
               {
                   data[i+1][j]=data[i][j];
               }
               else
               {
                   data[i+1][j]=data[i][j]+1;
               }
            }
        }
        
   
        int k,m,u=0;
        for(i=0;i<q;i++)
        {
            int check1[31]={0};
            k=query[i][0]-1;
            m=query[i][1];
            string s1="";
            for(j=0;j<31;j++)
            {
               u = data[m][j]-data[k][j];
               if((m-k-u) > u)
               {
                   s1.push_back('1');
               }
               else
               {
                   s1.push_back('0');
               }
            }
            
            unsigned long ans = std::bitset<31>(s1).to_ulong();
        
            cout << ans << endl;
        }
       
    
	
	return 0;
}
