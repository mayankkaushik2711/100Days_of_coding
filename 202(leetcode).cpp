class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> mp;
        while(n>1){
            
            int ans=0;
            while(n!=0){
                int rem=n%10;
                ans=ans+(rem*rem);
                n=n/10;
            }
            mp[ans]++;
            for(auto i:mp){
                if(i.second==2){
                    return false;
                }
            }
            n=ans;
        }
        return true;
    }
};