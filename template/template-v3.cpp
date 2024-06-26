/**
 * Created by akbar on 8/11/2021.
 * https://github.com/akbarhps/cpp-competitive-template
 */

#include <bits/stdc++.h>

using namespace std;

//======================================        typedef        ======================================//

typedef long L;
typedef unsigned long UL;
typedef long long LL;
typedef unsigned long long ULL;

template<typename T>
using Ref = reference_wrapper<T>;

//======================================         loop         =======================================//

#define For(index, from, to) for (int (index) = (from); (index) < (to); (index)++)
#define For_(index, to) For(index, 0, to)
#define ForDec(index, from, to) for (int (index) = (from) - 1; (index) >= (to); (index)--)
#define ForDec_(index, from) ForDec(index, from, 0)
#define Each(element, iterable) for (auto &(element) : (iterable))

//======================================         misc         =======================================//

#define Sqr(var) (1LL * (var) * (var))
#define SqrMod(var, mod) ((1LL * (var) * (var)) % (mod))
#define Fill(iterable, value) Each(e, iterable) e = value
#define Clear(iterable) Fill(iterable, 0)
#define VecAll(vec) (vec).begin(), (vec).end()
#define ArrSize(arr) (sizeof(arr) / sizeof((arr)[0]))

//====================================       std::sort       ========================================//

template<typename T, size_t N>
inline void Sort(T (&arr)[N], bool isDecrement = false) {
    if (isDecrement) sort(arr, arr + ArrSize(arr), greater<>());
    else sort(arr, arr + ArrSize(arr));
}

template<typename T, size_t N, typename U>
inline void Sort(T (&arr)[N], U &_comparator) {
    sort(arr, arr + ArrSize(arr), _comparator);
}

template<typename T>
inline void Sort(vector<T> &vec, bool isDecrement = false) {
    if (isDecrement) sort(VecAll(vec), greater<>());
    else sort(VecAll(vec));
}

template<typename T, typename U>
inline void Sort(vector<T> &vec, U &_comparator) {
    sort(VecAll(vec), _comparator);
}

//======================================         i/o         ========================================//

#define SetIO ios::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

template<typename T>
inline void Scan(T &var) { cin >> var; }

template<typename T, typename... Args>
inline void Scan(T &var, Args &&... args) {
    Scan(var);
    if (sizeof ...(args)) Scan(args...);
}

template<typename T>
inline void Scan(vector<T> &vec, int size) {
    T var;
    For_(i, size) {
        Scan(var);
        vec.emplace_back(var);
    }
}

template<class C, typename T, typename U>
inline void Scan(vector<C> &vec, int size) {
    T var1;
    U var2;
    For_(i, size) {
        Scan(var1, var2);
        vec.emplace_back(var1, var2);
    }
}

template<class C, typename T, typename U, typename V>
inline void Scan(vector<C> &vec, int size) {
    T var1;
    U var2;
    V var3;
    For_(i, size) {
        Scan(var1, var2, var3);
        vec.emplace_back(var1, var2, var3);
    }
}

template<typename T, typename U>
inline void Scan(map<T, U> &map, int size) {
    T first;
    U second;
    For_(i, size) {
        Scan(first, second);
        map[first] = second;
    }
}

inline void Print() { cout << "\n"; }

template<typename T>
inline void Print(T var, bool newLine = true) {
    cout << var;
    if (newLine) Print();
}

template<typename T, typename... Args>
inline void Print(T var, Args... args) {
    Print(var, false);
    if (sizeof...(args)) cout << " ";
    Print(args...);
}

template<typename T>
inline void Print(const vector<T> &vec) {
    Each(e, vec) Print(e);
}

template<typename T, typename U>
inline void Print(const map<T, U> &map) {
    Each(e, map) Print(e.first, e.second);
}

//====================================         timer         ======================================//

struct Timer {
    chrono::time_point<chrono::high_resolution_clock> start, end;
    chrono::duration<float> duration{};

    Timer() {
        start = chrono::high_resolution_clock::now();
    }

    ~Timer() {
        end = chrono::high_resolution_clock::now();
        duration = end - start;
        float ms = duration.count() * 1000.0f;
        cout << "[Execution time " << ms << " ms]\n";
    }
};


//======================================         end         ========================================//


int main() {
    SetIO;
    return 0;
}