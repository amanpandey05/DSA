class MyQueue {
    int size = 100001;
      int* arr = new int[size];
      
      int front,rear; 
public:
    MyQueue() {
       front = 0;
       rear = 0;  
    }
    
    void push(int x) {
     if(rear == size) {
        return;
     } 
     else {
        arr[rear] = x;
        rear++;
     }  
    }
    
    int pop() {
     if(front == rear) {
        return -1;
     } else {
        int ans = arr[front];
        arr[front] = -1;
        front++;
       
        if(front == rear) {
            front = rear = 0;
        }
         return ans;
     }  
    }
    
    int peek() {
     int ans = arr[front];
     return ans;   
    }
    
    bool empty() {
     if(front == rear) {
        return true;
     }  
     return false; 
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */