class Solution {
public:
    int reverseBits(int n) {
        int temp=n;
        string res="";
        int ans=0;
        for(int i=0;i<32;i++)
        {
           res+=char((temp%2)+'0');
           temp=temp/2;
        }int k=0;
        for(int i=res.length()-1;i>=0;i--)
        {
            int c=res[i]-'0';
            ans+=c<<k;
            k++;
        }
        return ans;
    }
};