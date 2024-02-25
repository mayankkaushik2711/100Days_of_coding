class Solution {
public:
    string reverseWords(string s) {
        string str="";
        string ans="";
        for(int i=s.size()-1 ; i>=0 ; i--){
            if(s[i]!=' '){
                str+=s[i];
            }
            if(s[i]==' ' && str.size()>0){
                reverse(str.begin(),str.end());
                ans=ans+str+' ';
                str="";
            }
        }
        reverse(str.begin(),str.end());
        ans+=str;
        if(ans[ans.size()-1]!=' '){
            return ans;
        }else{
            return ans.substr(0,ans.size()-1);
        }
        return ans;
    }
};