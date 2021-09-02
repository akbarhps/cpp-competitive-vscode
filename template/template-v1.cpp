/**
 * Created by akbar on 8/10/2021.
 * https://github.com/akbarhps/cpp-competitive-template
 */

//#include <bits/stdc++.h>
// bits/stdc++ is not std lib
// some compiler wont work

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <set>

using namespace std;

// typedef
#define TType template <typename T>
#define TUType template <typename T, typename U>

typedef long L;
typedef unsigned U;
typedef long long LL;
typedef unsigned long UL;
typedef unsigned long long ULL;

TType using Vec = vector<T>;

// loop
#define Each(element, iterable) for (auto &element : iterable)
#define For(index, from, to) for (size_t index = from; index < to; index++)
#define ForDec(index, from, to) for (size_t index = from - 1; index >= to; index--)
#define For_(index, to) For(index, 0, to)
#define ForDec_(index, to) ForDec(index, to, 0)
#define WDec(index) while (index--)

// util
#define Push push_back
#define Pop pop_back
#define Beg(vec) vec.begin()
#define End(vec) vec.end()
#define Sqr(var) (ll)(var * var)
#define SqrM(var, mod) (ll)((var * var) % mod)
#define Eq(var1, var2) var1 == var2

#define Clear(iterable) Each(element, iterable) element = 0
#define Fill(iterable, length, value) Each(element, iterable) element = value

#define VecAll(vec) Beg(vec), End(vec)
#define ArrSize(arr) sizeof(arr) / sizeof(arr[0])

// std::sort
#define SortArr(arr) sort(arr, arr + ArrSize(arr))
#define SortArrDec(arr) sort(arr, arr + ArrSize(arr), greater<>())
#define SortVec(vec) sort(VecAll(vec))
#define SortVecDec(vec) sort(VecAll(vec), greater<>())

// stream
#define In(var) cin >> var
#define In2(var1, var2) cin >> var1 >> var2
#define Out(var) cout << var << endl
#define Out2(var1, var2) cout << var1 << " " << var2 << endl
#define InArr(arr, length) Each(element, arr) In(element)
#define OutArr(arr) Each(element, arr) Out(element)
#define OutVec(arr) OutArr(arr)

TType inline Vec<T> InVec(const size_t &size)
{
    Vec<T> vector;
    For_(index, size)
    {
        T e;
        In(e);
        vector.Push(e);
    }
    return vector;
}

int main()
{
}