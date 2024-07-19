class MyStack {
public:
    queue<int> q1,q2;
    MyStack() {
        
    }
    
    void push(int x) {
        if(!q1.empty())
        q1.push(x);
        else
        q2.push(x);
    }
    
    int pop() {
        int top=-1;
        if(!q1.empty()){
            while(q1.size()!=1){
                q2.push(q1.front());
                q1.pop();
            }
            top=(q1.front());
            q1.pop();
        }
        else{
            while(q2.size()!=1){
                q1.push(q2.front());
                q2.pop();
            }
            top=(q2.front());
            q2.pop();
        }
        return top;
    }
    
    int top() {
        if(q1.empty())
        return q2.back();
        else
        return q1.back();
    }
    
    bool empty() {
        return q1.empty()&&q2.empty();
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
