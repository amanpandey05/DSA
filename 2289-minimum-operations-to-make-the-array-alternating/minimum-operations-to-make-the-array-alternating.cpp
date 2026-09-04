class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        unordered_map<int, int> mpe;
        unordered_map<int, int> mpo;

        for(int i = 0; i<nums.size(); i++) {
             if(i%2 == 0) {
                mpe[nums[i]]++;
             } else {
                     mpo[nums[i]]++;
             }
        } 
        int sece = 0, seco = 0;
        int ve = -1, vo = -1;
        int maxie = 0;
        int maxio = 0;
        for(auto i: mpe) {
          if(i.second > maxie){ sece = maxie;
           maxie = i.second;
           ve = i.first;}
           else if(i.second > sece) {
            sece = i.second;
           }
        }
        for(auto i: mpo) {
           if(i.second > maxio) {
            seco = maxio;
            maxio = i.second;
            vo = i.first;
           } else if(i.second > seco) {
            seco = i.second;
           }
        }
            int ans = 0;
        int n = nums.size();
        int cnte = (n+1)/2;
        int cnto = n/2;
        if(ve != vo) {
            ans = (cnte - maxie) + (cnto - maxio);
        } else {
            int ans1 = (cnte - sece) + (cnto - maxio);
            int ans2 = (cnte - maxie) + (cnto - seco);
            ans = min(ans1, ans2);
        }
        return ans;
    }
};