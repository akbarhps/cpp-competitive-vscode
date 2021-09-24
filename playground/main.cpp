/**
 * Created by akbar on 8/11/2021.
 */
#include <bits/stdc++.h>
using namespace std;

#ifdef DEBUG
template <typename T>
inline void DebugPrint(const char *label, T &&var)
{
    std::cout << '(' << label << ": " << var << ')' << '\n';
}

template <typename T, typename... Args>
inline void DebugPrint(const char *labels, T &&var, Args &&...args)
{
    const char *del = strchr(labels, ',');
    std::cout << '(';
    std::cout.write(labels, del - labels) << ": " << var << "), ";
    return DebugPrint(del + 2, args...);
}
#define Debug(...) DebugPrint(#__VA_ARGS__, __VA_ARGS__)
#else
#define Debug(...)
#endif

int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    return 0;
}