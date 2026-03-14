#include <iostream>
#include <stdexcept>
using namespace std;

template <typename eleType>
class stack {
  private:
    eleType* data;
    int Size;
    int capacity;
    void resize() {
        int newCapacity = capacity * 2;
        eleType* newData = new eleType[newCapacity];

        for (int i = 0; i < Size; ++i) {
            newData[i] = data[i];
        }

        delete[] data;
        data = newData;
        capacity = newCapacity;
    }

  public:
    stack() : data(new eleType[10]), Size(0), capacity(10) {}
    ~stack() {
        delete[] data;
    }
    void push(eleType ele) {
        if (Size == capacity) {
            resize();
        }

        data[Size++] = ele;
    }
    void pop() {
        if (Size == 0) {
            throw std::underflow_error("Stack is empty");
        }
        --Size;
    }
    eleType top() const {
        if (Size == 0) {
            throw std::underflow_error("Stack is empty");
        }
        return data[Size - 1];
    }
    int size() const {
        return Size;
    }
};

template <typename T>
class stack_ {

  private:
    struct node {
        T data;
        node* next;

        node(T value) : data(value), next(nullptr) {}
    };
    node* head;
    int Size;

  public:
    stack_() : head(nullptr), Size(0) {}
    ~stack_() {
        while (head) {
            node* tmp = head;
            head = head->next;
            delete tmp;
        }
    };
    void push(T value) {
        node* newNode = new node(value);
        newNode->next = head;
        head = newNode;
        Size++;
    }
    void pop() {
        if (head == NULL) {
            throw std::underflow_error("Stack is empty");
        }
        node* tmp = head;
        head = head->next;
        delete tmp;
        Size--;
    }
    T top() const {
        if (head == NULL) {
            throw std::underflow_error("Stack is empty");
        }
        return head->data;
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

    stack_<int> s;
    s.push(4);
    s.push(7);
    s.push(13);
    cout << s.top() << endl;
    s.pop();
    cout << s.top() << endl;
    cout << s.size() << endl;
}