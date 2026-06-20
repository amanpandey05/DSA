class RecentCounter {
    queue<int> q;
    int front,rear;
public:
    RecentCounter() {
      front = 0;
      rear = 0;  
    }
    
    int ping(int t) {
      if(q.empty()) {
        q.push(t);
        return 1;
      }else {
        if(t<=3000) {
            q.push(t);
        } else {
        int diff = t-3000;
        while(!q.empty() && q.front() < diff) {
            q.pop();
        }
        q.push(t);
        }
      }
      return q.size();  
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */