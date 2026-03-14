# C++ `std::vector` 常见用法学习笔记

`std::vector` 是 C++ 标准库中最常用的动态数组容器，它提供了连续的内存存储和自动扩容功能。本笔记整理其核心用法，适合快速查阅和学习。

---

## 1 头文件和基本定义

```cpp
#include <vector>
using namespace std;

vector<int> vec;          // 定义一个存储 int 类型的空 vector
vector<double> vec2;      // double 类型
vector<string> vec3;      // string 类型
```

---

## 2 初始化（构造函数）

| 语法                                 | 说明                                                         | 示例                                    |
| ------------------------------------ | ------------------------------------------------------------ | --------------------------------------- |
| `vector<T> v;`                       | 默认构造，空 vector                                          | `vector<int> v1;`                       |
| `vector<T> v(n);`                    | 构造含有 n 个元素的 vector，每个元素执行值初始化（int 为 0） | `vector<int> v2(10);`                   |
| `vector<T> v(n, val);`               | 构造 n 个值为 val 的元素                                     | `vector<int> v3(5, 3); // {3,3,3,3,3}`  |
| `vector<T> v(v2);`                   | 拷贝构造                                                     | `vector<int> v4(v3);`                   |
| `vector<T> v(v2.begin(), v2.end());` | 使用迭代器范围构造                                           | `vector<int> v5(v3.begin(), v3.end());` |
| `vector<T> v = {a, b, c...};`        | 使用初始化列表（C++11）                                      | `vector<int> v6 = {1,2,3,4};`           |

**示例**：
```cpp
vector<int> a;                  // 空
vector<int> b(10);              // 10个0
vector<int> c(5, 2);            // 5个2
vector<int> d(c);               // 拷贝c
vector<int> e = {1,2,3,4,5};    // 初始化列表
vector<int> f(e.begin()+1, e.end()-1); // {2,3,4}
```

---

## 3 赋值操作

| 操作                   | 说明                         |
| ---------------------- | ---------------------------- |
| `v.assign(n, val)`     | 重新赋值为 n 个 val          |
| `v.assign(begin, end)` | 重新赋值为迭代器指定范围的值 |
| `v = v2`               | 赋值运算符                   |
| `v = {a,b,c}`          | 列表赋值（C++11）            |

**示例**：
```cpp
vector<int> v;
v.assign(5, 10);            // v = {10,10,10,10,10}
vector<int> v2 = {1,2,3};
v.assign(v2.begin(), v2.end()); // v = {1,2,3}
v = {7,8,9};                // v = {7,8,9}
```

---

## 4 元素访问

| 方法        | 说明                                     | 边界检查 |
| ----------- | ---------------------------------------- | -------- |
| `v[i]`      | 下标访问（不检查越界）                   | 无       |
| `v.at(i)`   | 下标访问（越界抛出 `out_of_range` 异常） | 有       |
| `v.front()` | 返回第一个元素                           | 无       |
| `v.back()`  | 返回最后一个元素                         | 无       |
| `v.data()`  | 返回指向底层数组的指针                   | -        |

**示例**：
```cpp
vector<int> v = {10,20,30,40};
int x = v[2];          // x = 30
int y = v.at(2);       // y = 30
int f = v.front();     // f = 10
int b = v.back();      // b = 40
int* p = v.data();     // p 指向首元素
```

---

## 5 迭代器

| 类型           | 获取方法                             |
| -------------- | ------------------------------------ |
| 正向迭代器     | `v.begin()`, `v.end()`               |
| 反向迭代器     | `v.rbegin()`, `v.rend()`             |
| 常量迭代器     | `v.cbegin()`, `v.cend()` （C++11）   |
| 常量反向迭代器 | `v.crbegin()`, `v.crend()` （C++11） |

**遍历示例**：
```cpp
// 使用下标
for (size_t i = 0; i < v.size(); ++i) cout << v[i] << " ";

// 使用迭代器
for (auto it = v.begin(); it != v.end(); ++it) cout << *it << " ";

// 范围 for（C++11）
for (auto x : v) cout << x << " ";

// 反向遍历
for (auto rit = v.rbegin(); rit != v.rend(); ++rit) cout << *rit << " ";
```

---

## 6 容量操作

| 方法                | 说明                                           |
| ------------------- | ---------------------------------------------- |
| `v.size()`          | 返回当前元素个数                               |
| `v.max_size()`      | 返回可容纳的最大元素数（与系统有关）           |
| `v.capacity()`      | 返回当前分配的存储空间能容纳的元素数           |
| `v.empty()`         | 判断是否为空                                   |
| `v.reserve(n)`      | 预分配至少能容纳 n 个元素的内存（不改变 size） |
| `v.shrink_to_fit()` | 请求减小 capacity 到 size（C++11，非强制）     |

**注意**：
- `size()` 是实际元素个数，`capacity()` 是已分配内存可容纳个数。
- `reserve()` 用于优化频繁插入的性能，避免多次重新分配。
- `shrink_to_fit()` 用于释放多余内存。

**示例**：
```cpp
vector<int> v;
v.reserve(100);          // capacity >= 100, size = 0
for (int i = 0; i < 10; ++i) v.push_back(i);
cout << v.size() << " " << v.capacity(); // 10 100
v.shrink_to_fit();       // capacity 可能变为 10
```

---

## 7 修改操作

### 7.1 添加元素
| 方法                         | 说明                                      |
| ---------------------------- | ----------------------------------------- |
| `v.push_back(val)`           | 在末尾添加一个元素                        |
| `v.emplace_back(args...)`    | 在末尾直接构造一个元素（C++11，效率更高） |
| `v.insert(pos, val)`         | 在迭代器 pos 之前插入一个元素             |
| `v.insert(pos, n, val)`      | 在 pos 前插入 n 个 val                    |
| `v.insert(pos, first, last)` | 在 pos 前插入 [first, last) 区间的元素    |
| `v.emplace(pos, args...)`    | 在 pos 前直接构造一个元素                 |

**示例**：
```cpp
vector<int> v = {1,2,3};
v.push_back(4);                      // {1,2,3,4}
v.emplace_back(5);                   // {1,2,3,4,5}
v.insert(v.begin()+2, 99);           // {1,2,99,3,4,5}
v.insert(v.end(), 2, 100);           // {1,2,99,3,4,5,100,100}
vector<int> tmp = {10,20};
v.insert(v.begin(), tmp.begin(), tmp.end()); // {10,20,1,2,99,3,4,5,100,100}
```

### 7.2 删除元素
| 方法                   | 说明                                                   |
| ---------------------- | ------------------------------------------------------ |
| `v.pop_back()`         | 删除最后一个元素                                       |
| `v.erase(pos)`         | 删除迭代器 pos 指向的元素，返回下一个元素的迭代器      |
| `v.erase(first, last)` | 删除 [first, last) 区间的元素                          |
| `v.clear()`            | 清空所有元素（size=0，capacity 不变）                  |
| `v.resize(n)`          | 改变 size 为 n，多出的元素用默认值填充，不足则删除尾部 |
| `v.resize(n, val)`     | 改变 size 为 n，多出的用 val 填充                      |

**示例**：
```cpp
vector<int> v = {10,20,30,40,50};
v.pop_back();                       // {10,20,30,40}
v.erase(v.begin()+1);               // {10,30,40}
v.erase(v.begin(), v.begin()+2);    // {40}
v.resize(5, 100);                   // {40,100,100,100,100}
v.clear();                          // {}
```

### 7.3 其他
| 方法          | 说明                                   |
| ------------- | -------------------------------------- |
| `v.swap(v2)`  | 交换两个 vector 的内容（快速交换指针） |
| `v1.swap(v2)` | 同上                                   |

---

## 8 二维 vector

使用 `vector<vector<T>>` 表示二维数组。

```cpp
// 定义 3行4列的二维数组，初始化为0
vector<vector<int>> matrix(3, vector<int>(4, 0));

// 访问
matrix[1][2] = 5;

// 遍历
for (auto &row : matrix) {
    for (auto val : row) {
        cout << val << " ";
    }
    cout << endl;
}
```

---

## 9 常见算法配合

`<algorithm>` 头文件中的算法常与 vector 结合使用。

```cpp
#include <algorithm>

vector<int> v = {5, 2, 8, 1, 9};

sort(v.begin(), v.end());                     // 升序排序
sort(v.begin(), v.end(), greater<int>());     // 降序排序

auto it = find(v.begin(), v.end(), 8);        // 查找元素，返回迭代器

reverse(v.begin(), v.end());                   // 反转

int max = *max_element(v.begin(), v.end());    // 最大值

int sum = accumulate(v.begin(), v.end(), 0);   // 求和 (需 #include <numeric>)

v.erase(unique(v.begin(), v.end()), v.end());  // 去重（需先排序）
```

---

## 10 迭代器失效问题

当对 vector 进行插入或删除操作时，可能会导致原有迭代器失效，需特别注意。

- **插入操作**（`insert`、`push_back` 等）可能导致重新分配内存，此时所有指向元素的迭代器、指针、引用都会失效。若未重新分配，则插入位置之后的迭代器失效。
- **删除操作**（`erase`、`pop_back`、`clear`）会使被删除元素及之后元素的迭代器失效。

**安全写法示例**：
```cpp
// 删除特定元素
for (auto it = v.begin(); it != v.end(); ) {
    if (*it == value) {
        it = v.erase(it);      // erase 返回下一个有效迭代器
    } else {
        ++it;
    }
}
```

---

## 11 性能提示

- `vector` 在尾部插入/删除效率高（均摊 O(1)），但在中间或头部插入/删除需要移动元素（O(n)）。
- 预先知道大致元素个数时，使用 `reserve` 预留空间，避免多次扩容。
- 使用 `emplace_back` 代替 `push_back` 可减少一次临时对象的拷贝/移动（对复杂类型有效）。
- `shrink_to_fit` 只是请求，不一定强制释放内存。

---

## 12 总结

`std::vector` 是现代 C++ 开发中最常用的容器，灵活高效，掌握其基本操作和注意事项能极大提高编码效率。本笔记涵盖了其大部分日常用法，可作为快速参考手册。

---

**参考资料**：cppreference.com, C++ Primer