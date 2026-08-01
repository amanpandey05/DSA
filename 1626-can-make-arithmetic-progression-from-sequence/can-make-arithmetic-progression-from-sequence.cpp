class Solution {
public:
    bool canMakeArithmeticProgression(vector<int>& arr) {
     bool f = true;
     sort(arr.begin(), arr.end());
     for(int i = 1; i<arr.size()-1; i++) {
        if((arr[i]-arr[i-1]) != (arr[i+1]-arr[i])) {
            f= false;
            break;
        }
     }
     if(f) return true;
     return false;   
    }
};