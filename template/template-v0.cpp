/**
 * Created by akbar on 8/9/2021.
 * https://github.com/akbarhps/cpp-competitive-template
 */
#include <bits/stdc++.h>

using namespace std;

/**
 * fast stream
 * @param x variable or array to store
 * @param n array length
 * @param sn string max length
 */
#define sInt(x) scanf("%d", &x)
#define sUInt(x) scanf("%u", &x)
#define sFlo(x) scanf("%f", &x)
#define sDb(x) scanf("%lf", &x)
#define sStr(x, sn)  \
    char z[sn];      \
    scanf("%s", &z); \
    x = z

#define pInt(x) printf("%d\n", x)
#define pUInt(x) printf("%u\n", &x)
#define pFor(x) printf("%f\n", x)
#define pDb(x) prinf("%lf\n", x)
#define pStr(x) printf("%s\n", x.c_str())

#define sIntA(x, n) For0(i, n) sInt(x[i])
#define sUIntA(x, n) For0(i, n) sUInt(x[i])
#define sFlA(x, n) For0(i, n) sFlo(x[i])
#define sDbA(x, n) For0(i, n) sDb(x[i])
#define sStrA(x, n, sn) For0(i, n) sStr(x[i], sn)

int main()
{
}