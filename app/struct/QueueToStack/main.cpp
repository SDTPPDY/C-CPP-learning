#include <iostream>
#include <queue>
using namespace std;

template <typename T>
class stack {
  private:
    queue<T> inQueue;
    queue<T> outQueue;
    int Size;

  public:
    stack() : Size(0) {}
    void push(T value) {
        inQueue.push(value);
        Size++;
    }
    T top() { // error is inQueue == NULL
        while (inQueue.size() > 1) {
            outQueue.push(inQueue.front());
            inQueue.pop();
        }
        T ret = inQueue.front();
        outQueue.push(inQueue.front());
        inQueue.pop();

        while (!outQueue.empty()) {
            inQueue.push(outQueue.front());
            outQueue.pop();
        }
        return ret;
    }
    void pop() {
        while (inQueue.size() > 1) {
            outQueue.push(inQueue.front());
            inQueue.pop();
        }
        inQueue.pop();

        while (!outQueue.empty()) {
            inQueue.push(outQueue.front());
            outQueue.pop();
        }
        Size--;
    }
    int size() const {
        return Size;
    }
};

int main() {
    stack<int> st;
    st.push(4);
    st.push(7);
    st.push(13);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
}