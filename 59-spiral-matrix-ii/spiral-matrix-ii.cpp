class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
      int m = n;
       vector<vector<int>> matrix(m, vector<int> (n)); 
      int left = 0 , right = m-1;
      int top = 0 , bottom = n-1;
      int t = m*n; // total element
      int cnt = 1;
      vector<int> a;
      while(cnt <= t){
        for( int i=left; i<=right && cnt<=t; i++){
           
           matrix[top][i] = cnt++;
           } 
        top++;
        for(int i=top; i<=bottom && cnt<=t; i++){
           matrix[i][right] = cnt++;
            
        } 
        right--;

        for(int i=right; i>=left && cnt<=t; i--){
         matrix[bottom][i] = cnt++;
           }  
        bottom--;
        // }
        for(int i = bottom; i>=top && cnt<=t; i--){
           matrix[i][left] = cnt++;
        } 
         left++;

      }  
      return matrix; 

    }
};