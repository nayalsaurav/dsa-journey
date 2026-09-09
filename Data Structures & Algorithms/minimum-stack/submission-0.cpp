class MinStack {
public:
    stack<int>main;
    stack<int>minVals;
    MinStack() {
        
    }
    
    void push(int val) {
        main.push(val);
        if(!minVals.empty()){
            minVals.push(min(minVals.top(),val));
        }else{
            minVals.push(val);
        }
    }
    
    void pop() {
        main.pop();
        minVals.pop();
    }
    
    int top() {
        return main.top();
    }
    
    int getMin() {
        return minVals.top();
    }
};
