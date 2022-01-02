class Solution{   
public:
    string printMinNumberForPattern(string S){
         string res = "1";
        if(S.size()==0) return res;
        
        queue<char> q({'2','3','4','5','6','7','8','9'});
        string t;
        for(auto c: S)
        {
            if(c=='I')
            {
                if(t.size()!=0)
                {
                    for(int i=t.size()-1;i>=0;i--)
                    {
                        res += t[i];
                    }
                    t.clear();
                }
                res += q.front();
                q.pop();
            }
            else
            {
                if(t.size()==0)
                {
                    t = res.back();
                    res.pop_back();
                }
                t += q.front();
                q.pop();
            }
        }
        
        for(int i=t.size()-1;i>=0;i--)
        {
            res += t[i];
        }        
        return res;
    }
};