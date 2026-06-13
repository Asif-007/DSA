#include <bits/stdc++.h>
using namespace std;

class MinStack {
private:
    stack<long long> st;
    long long mini;

public:

    void push(long long x) {

        if(st.empty()) {
            mini = x;
            st.push(x);
        }

        else if(x >= mini) {
            st.push(x);
        }

        else {

            long long encoded = 2*x - mini;

            st.push(encoded);

            mini = x;
        }
    }

    void pop() {

        if(st.empty()) {
            cout << "Stack Empty\n";
            return;
        }

        long long topVal = st.top();

        st.pop();

        if(topVal < mini) {

            mini = 2*mini - topVal;
        }
    }

    long long top() {

        if(st.empty())
            return -1;

        long long topVal = st.top();

        if(topVal >= mini)
            return topVal;

        return mini;
    }

    long long getMin() {

        if(st.empty())
            return -1;

        return mini;
    }

    bool empty() {
        return st.empty();
    }
};

int main() {

    MinStack st;

    st.push(5);
    st.push(2);
    st.push(1);

    cout << "Min = " << st.getMin() << endl;
    cout << "Top = " << st.top() << endl;

    st.pop();

    cout << "Min = " << st.getMin() << endl;
    cout << "Top = " << st.top() << endl;

    st.pop();

    cout << "Min = " << st.getMin() << endl;
    cout << "Top = " << st.top() << endl;

    return 0;
}