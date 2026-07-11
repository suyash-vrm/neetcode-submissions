class MinStack {
private:
    stack <long long> st;
    long long min = 2^31 +1;
public:
    MinStack() {
        
    }
    
    void push(int value) {
         if(st.empty()){
            min = value;
            st.push(value);
            return;

        }
        if(value > min){
            st.push(value);
        }else{
            st.push(2LL*value - min);
            min = value;

        }
    }
    
    void pop() {
         if(st.empty()) return ;

        long long x = st.top();
        st.pop();

        if(x<min){
            min = 2LL * min -x;
        }
    }
    
    int top() {
        
        long long x = st.top();
        if(x<min){
            return min;
        }else{
            return x;
        }
    }
    
    int getMin() {
           return min;
    }
};
