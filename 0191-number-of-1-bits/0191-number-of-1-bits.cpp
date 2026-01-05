class Solution {
public:
    int hammingWeight(int n) {
        int temp=n;
int count=0;
        while(temp>0)
        {
           if(temp%2==1){count++;}
           temp=temp/2;
        }
        return count;
        
    }
};