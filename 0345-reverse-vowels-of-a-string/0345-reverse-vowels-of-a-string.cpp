class Solution {
public:
    string reverseVowels(string s) {
        int n=s.length();
        int i=0;
        int j=n-1;
        while(i<j)
        {
            if(toupper(s[i])=='A' || toupper(s[i])=='E'|| toupper(s[i])=='I'||toupper(s[i])=='O' || toupper(s[i])=='U')
          {
            if(toupper(s[j])=='A' || toupper(s[j])=='E' || toupper(s[j])=='I' ||toupper(s[j])=='O' || toupper(s[j])=='U')
            {
                char temp=s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
          }
          if(toupper(s[i])!='A' && toupper(s[i])!='E'&&toupper(s[i])!='I'&&toupper(s[i])!='O'&&toupper(s[i])!='U'){ i++;}
          if(toupper(s[j])!='A' && toupper(s[j])!='E'&&toupper(s[j])!='I'&&toupper(s[j])!='O'&&toupper(s[j])!='U'){j--;}
          
          

            
        }
        return s;
        
    }
};