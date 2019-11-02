class Solution {
public:
    void reverseString(vector<char>& s) {
        //cout << *(s.begin()));
        for(int i=0;i<s.size()/2;i++)
        {   
            char tmp = s[i];
            s[i]=s[(s.size()-1-i)];
            s[s.size()-1-i] = tmp;
        }
        
        for(int i=0;i<s.size();i++)
        {
            cout << s[i] << " ";
        }
    }
};