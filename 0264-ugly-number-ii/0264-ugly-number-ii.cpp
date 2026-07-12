class Solution {
public:
    int nthUglyNumber(int n) {
       vector<int>ugly(n);
       ugly[0]=1;

       int id2=0,id3=0,id5=0;

       for(int i=1;i<n;i++)
       {
         int next=INT_MAX;
         next=min(ugly[id2]*2,ugly[id3]*3);
         next=min(next,ugly[id5]*5);
         ugly[i]=next;
         if(next==ugly[id2]*2){ id2++;}
         if(next==ugly[id3]*3){ id3++;}
         if(next==ugly[id5]*5){ id5++;}
       }
       return ugly[n-1];
    }
};