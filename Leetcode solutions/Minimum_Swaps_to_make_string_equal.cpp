class Solution {
public:
    int minimumSwap(string s1, string s2) {
        
        int l = s1.length();
        int xy=0,yx=0,ans=0;
        for(int i=0;i<l;i++)
        {
            if(s1[i]=='x' && s2[i]=='y')
            {
                xy+=1;
            }
            else if(s1[i]=='y' && s2[i]=='x')
            {
                yx+=1;
            }
        }
        if(xy%2==1 && yx%2==1)
        {
            ans+=2;
        }
        else if(xy%2==1 && yx%2==0)
        {
            ans=-1;
            return ans;
        }
        else if(xy%2==0 && yx%2==1)
        {
            ans=-1;
            return ans;
        }
        if(xy!=0)
        {
            ans+=xy/2;
        }
        if(yx!=0)
        {
            ans+=yx/2;
        }
        
        return ans;
        
    }
};