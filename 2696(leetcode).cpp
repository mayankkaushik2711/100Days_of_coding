class Solution {
public:
    int minLength(string s) {
        stack<char> st;
        st.push('#');
        for(int i=0 ; i<s.size()-1 ; i++){
            char a=st.top();
            if((a+1=='B' && s[i]=='B') || (a+1=='D' && s[i]=='D') ){
                st.pop();
            }
            else{
                st.push(s[i]);
            } 
        }
        st.push(s[s.size()-1]);

        char a=st.top();
        st.pop();
        char b=st.top();
        if( (b+1=='B' && a=='B') || (b+1=='D' && a=='D') ){
            st.pop();
        }
        else{
            // st.push(b);
            st.push(a);
        }


        
        int count=0;
        while(st.empty()!=1){
            count++;
            st.pop();
        }
        // cout<<st.top()<<" ";
        return count-1;
    }
};