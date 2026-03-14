#include <iostream>
#include <stdexcept>
using namespace std;

// this is queue with array
// include push, pop, front, size
template <typename t>
class Queue {
  private:
    t* data;
    int Front;
    int rear;
    int capacity;

    void doubleCapacity() {
        t* newData = new t[capacity * 2];
        for (int i = 0; i < rear; ++i) {
            newData[i] = data[i];
        }
        capacity *= 2;
        delete[] data;
        data = newData;
    }

  public:
    Queue() : data(new t[1]), Front(0), rear(0), capacity(1) {}
    ~Queue() {
        delete[] data;
    }
    void push(t value) {
        if (rear == capacity) {
            doubleCapacity();
        }
        data[rear++] = value;
    }
    void pop() {
        if (rear == Front) {
            throw std::underflow_error("Queue is empty");
        }
        Front++;
    }
    t front() const {
        if (Front == rear) {
            throw std::underflow_error("Queue is empty");
        }
        return data[Front];
    }
    int size() const {
        return rear - Front;
    }
};

// this si queue with list
// include push, pop, front, size
template <typename t>
class Queue_ {
  private:
    struct node {
        t data;
        node* next;

        node(t value) : data(value), next(NULL) {}
    };
    node* head;
    node* tail;
    int Size;

  public:
    Queue_() : head(NULL), tail(NULL), Size(0) {}
    ~Queue_() {
        while (head) {
            node* tmp = head;
            head = head->next;
            delete tmp;
        }
    }
    void push(t value) {
        node* nd = new node(value);
        if (head == NULL) {
            head = nd;
            tail = head;
        }
        else {
            tail->next = nd;
            tail = tail->next;
        }

        Size++;
    }
    void pop() {
        if (head == NULL) {
            throw std::underflow_error("Queue is empty");
        }
        node* tmp = head;
        head = head->next;
        delete tmp;
        Size--;
    }
    t front() {
        if (head == NULL) {
            throw std::underflow_error("Queue is empty");
        }
        return head->data;
    }
    int size() {
        return Size;
    }
};

int main() {
    Queue_<int> qu;
    qu.push(4);
    qu.push(7);
    qu.push(13);
    cout << qu.front() << endl;
    qu.pop();
    cout << qu.front() << endl;
    cout << qu.size() << endl;
    // text eh Queue_
    return 0;
}