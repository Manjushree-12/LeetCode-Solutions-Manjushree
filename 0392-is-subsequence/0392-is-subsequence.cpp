class Solution {
public:
    bool isSubsequence(string s, string t) {
        
         if(s.empty() && t.empty()){ return true;}
         int n =s.length();
         int tn=t.length();
       int i=0,j=0;
         while(j<tn)
         {
            if(s[i]==t[j]){ i++;}
            j++;

            if(i==n){ return true;}
         }
        return false;
        
    }
};