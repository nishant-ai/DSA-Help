class MyStack {
public:
    MyStack() {
        
    }
    queue<int> q1;
    
    void push(int x) {
        q1.push(x);
      /*here we are rotating the queues to make it look alike as a stack*/
       for(int i=0;i<q1.size()-1;++i){
			q1.push(q1.front());
			q1.pop();
		}
    }
    
    int pop() {
        int result = q1.front();
        q1.pop();
        return result;
    }
    
    int top() {
        return q1.front();
    }
    
    bool empty() {
        return q1.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */

