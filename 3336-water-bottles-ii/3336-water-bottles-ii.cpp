class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {

       int full=numBottles;
       int empty=0;
       int ex=numExchange;
       int ans=0;
       ans+=full;
           empty=full;
           full=0;
       while(empty>=ex || full>0)
       {
          if(empty<ex){ 
            empty+=full;
             ans+=full;
             full=0;
             }
        
          else{ empty-=ex;
           ex++;
        full++;
          }
       }
       if(full!=0){ans+=full;}
       return ans;

        
    }
};