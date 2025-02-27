#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#if __cplusplus >= 201103L
#include <ccomplex>
#include <cfenv>
#include <cinttypes>
#include <cstdbool>
#include <cstdint>
#include <ctgmath>
#include <cwchar>
#include <cwctype>
#endif
#include <algorithm>
#include <bitset>
#include <complex>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <typeinfo>
#include <utility>
#include <valarray>
#include <vector>
#if __cplusplus >= 201103L
#include <array>
#include <atomic>
#include <chrono>
#include <condition_variable>
#include <forward_list>
#include <future>
#include <initializer_list>
#include <mutex>
#include <random>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <system_error>
#include <thread>
#include <tuple>
#include <typeindex>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#endif
#define int long long int
#define endl "\n"
#define pb push_back
#define rep(i,n) for(i=0;i<n;++i)
using namespace std;
bool check(int a)
{
    if(a==0)
    {
        return false;
    }
    while (a)
    {
        int b = abs(a)%10;
        if(b==8)
        {
            return true;
        }
        else
        {
            a/=10;
        }
    }
    // for(int f=0;f<10;f++)
    // {
    //     if(llabs(a)>0)
    //     {
    //         int b = a%10;
    //         if(b==8)
    //         {
    //             return true;
    //         }
    //         else
    //         {
    //             return false;
    //         }
    //     }
    //     else
    //     {
    //         break;
    //     }
    // }
    return false;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a=0,ans=1;
    cin >> a;
    // a+=1;
    // do
    // {
    //     ans++;
    //     a+=ans;
    // } while (!check(a));
    for(int i = 1; i <= 16; ++i)
    {
        // ans+=1;
        int b = a+i;
        bool c = check(b);
        if(c==true)
        {
            ans = i;
            break;
        }
        // a+=i;
    }
    cout << ans;
    // if(a%10<8)
    // {
    //     if(check(a))
    //     {
    //         cout << 1;
    //         return 0;
    //     }
    //     else
    //     {
    //         ans = 8-(a%10);
    //         cout << ans;
    //         return 0;
    //     }
    // }
    // else if(a%10==8)
    // {
    //     if(!check(a+1) && abs(a) > 10)
    //     {
    //         cout << 10;
    //         return 0;
    //     }
    //     else if(check(a))
    //     {
    //         cout << 1;
    //         return 0;
    //     }
    // }
    // else 
    // {
    //     if(check(a+1))
    //     {
    //         cout << 1;
    //         return 0;
    //     }
    //     int counter = 1;
    //     a+=1;
    //     while(!check(a))
    //     {
    //         counter++;a++;
    //     }
    //     cout << counter;
    //     return 0;
    // }
    return 0;
}