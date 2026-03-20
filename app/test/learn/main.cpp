#include <iostream>
#include <type_traits>
using namespace std;

template <typename T>
T myadd(T value) {
    return value;
}

template <typename T, typename... Args>
typename std::common_type<T, Args...>::type myadd(T first, Args... rest) {
    return first + myadd(rest...);
}

int main() {
    cout << myadd(2, 3) << "\n";
    cout << myadd(2, 3, 4) << "\n";
}
