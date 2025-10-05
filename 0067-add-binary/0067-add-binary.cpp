class Solution {
public:
    string addBinary(string a, string b) {
          int i = a.length()-1;
          int j = b.length()-1;
          int carry=0;
          string str="";
        while(i>=0 || j>=0 || carry)
        {   int sum=carry;

            if(i>=0){
                sum+=a[i]-'0';
            }
            if(j>=0)
            {
                sum+=b[j]-'0';
            }
            str += (sum%2)+'0';
            carry = sum/2;
            j--;
            i--;

        }
        reverse(str.begin(),str.end());
        return str;
    }
};