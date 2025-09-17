class MinStack {
public:
    vector<pair<int,int>> s;
    int tp=-1;
    MinStack() {
        
    }
    
    void push(int val) {
        int mn;
        if(tp==-1)
           mn=val;
           else mn=min(s[tp].second,val);
           tp++;
           s.push_back({val,mn});
        
    }
      void pop() {
        if (tp >= 0) {
            s.pop_back();
            tp--;
        }
    }

    int top() {
        return s[tp].first;
    }

    int getMin() {
        return s[tp].second;
    }
};
