/*Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

    push(x) -- Push element x onto stack.
    pop() -- Removes the element on top of the stack.
    top() -- Get the top element.
    getMin() -- Retrieve the minimum element in the stack.

 

Example:

MinStack minStack = new MinStack();
minStack.push(-2);
minStack.push(0);
minStack.push(-3);
minStack.getMin();   --> Returns -3.
minStack.pop();
minStack.top();      --> Returns 0.
minStack.getMin();   --> Returns -2.
*/
class MinStack {
public:
    /** initialize your data structure here. */
   
   /* vector<int> s,m;   //first approach using two vectors

    MinStack() {
        //return s;
    }
    
    void push(long long x) {
        s.push_back(x);
        if(m.empty() || m.back()>=x)
            m.push_back(x);
    }
    
    void pop() {
        
        if(m.back()==s.back())
            m.pop_back();
        s.pop_back();
    }
    
    int  top() {
       return s.back();
    }
    
    int getMin() {
        
        return m.back();
    }*/
    vector<pair<int, int >> s;   //second approach using vector of pair note you can also use stack of pairs for that you have to change push, pop, top operations accordingly.
   // int minEle = INT_MAX;
    int min(int a, int b){
         
        return a<b?a:b;
    }
       
    MinStack() {
        //return s;
    }
    
    void push(long long x) {
        //s.push_back(x);
        if(s.empty())
            s.push_back({x,x});
        else
        {
            s.push_back({x , min(s.back().second, x)});
        }
            
    }
    
    void pop() {
        s.pop_back();
    }
    
    int  top() {
       return s.back().first;
    }
    
    int getMin() {
        
        return s.back().second;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
