#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

#define eleType int

// insert; earse; get; find; updata; size
class sequential {
  private:
    int Size;
    int capacity;
    eleType* data;

  public:
    sequential(int size) : Size(0), capacity(size * 2), data(new eleType[size * 2]) {}
    sequential() : Size(0), capacity(1), data(new eleType[1]) {}
    ~sequential();
    void insert(int index, eleType value);
    void earse(int index);
    eleType get(int index);
    int find(eleType value);
    void updata(int index, eleType value);
    int size();
};
sequential::~sequential() {

    delete[] data;
}
void sequential::insert(int index, eleType value) {

    if (index < 0 || index > Size) {
        throw std::invalid_argument("This is a invalid index");
    }

    if (Size == capacity) {
        int new_capacity = capacity * 2;
        eleType* new_data = new eleType[new_capacity];
        for (int i = 0; i < Size; i++) {
            new_data[i] = data[i];
        }
        delete[] data;
        data = new_data;
        capacity = new_capacity;
    }

    for (int i = Size; i > index; --i) {
        data[i] = data[i - 1];
    }
    data[index] = value;
    Size++;
}
void sequential::earse(int index) {

    if (index < 0 || index >= Size) {
        throw std::invalid_argument("This is a invalid index");
    }

    for (int i = index; i < Size - 1; ++i) {
        data[i] = data[i + 1];
    }
    Size--;
}
eleType sequential::get(int index) {

    if (index < 0 || index >= Size) {
        throw std::invalid_argument("This is a invalid index");
    }
    return data[index];
}
int sequential::find(eleType value) {

    for (int i = 0; i < Size; ++i) {
        if (data[i] == value) {
            return i;
        }
    }
    return -1;
}
void sequential::updata(int index, eleType value) {

    if (index < 0 || index >= Size) {
        throw std::invalid_argument("This is a invalid index");
    }

    data[index] = value;
}
int sequential::size() {

    return Size;
}

int main() {
    sequential list(10);

    for (int i = 0; i < 10; ++i) {
        list.insert(i, i * 10);
    }

    cout << list.size() << endl;
    for (int i = 0; i < list.size(); i++) {
        cout << list.get(i) << ' ';
    }
    cout << endl;

    list.earse(2);
    cout << list.size() << endl;
    for (int i = 0; i < list.size(); i++) {
        cout << list.get(i) << ' ';
    }
    cout << endl;

    vector<int> vec = {1, 2, 3, 4, 5};
    vec.resize(10);

    return 0;
}