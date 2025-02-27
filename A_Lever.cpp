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
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string a;
    cin >> a;
    int left=0,right=0;
    int i,middle=a.length()/2;

    rep(i,a.length())
    {
        if(a[i]=='^')
        {
            middle = i;
        }
    }
    rep(i,middle)
    {
        if(a[i]>='1' && a[i]<='9')
        {
            int num = a[i] - '0';
            left += (middle - i)*num;
        }
    }
    for(i = middle+1; i<a.length(); ++i)
    {
        if(a[i]>='1' && a[i]<='9')
        {
            int num = a[i] - '0';
            right += (i - middle)*num;
        }
    }
    // rep(i,a.length())
    // {
    //     if(i<middle)
    //     {
    //         if(a[i]=='=')
    //         {
    //             continue;
    //         }
    //         else if(a[i]>='1' && a[i]<='9')
    //         {
    //             int num =a[i]-'0';
    //             left += (i+1)*num;
    //         }        
    //     }
    //     if(a[i]=='^')
    //     {
    //         middle = i;
    //     }
    //     if(i>middle)
    //     {
    //         if(a[i]=='=')
    //         {
    //             continue;
    //         }
    //         else if(a[i]>='1' && a[i]<='9')
    //         {
    //             int numm =a[i]-'0';
    //             right += (i+1)*numm;
    //         }
    //     }
    // }


    // cout << (left>right)?("left"):((right>left)?"right":"balance");
    
    // cout << a[1] << " " << 'a[1]' << " " << ((a[0]-'0')*2);

    if(left > right)
    {
        cout << "left";
    }
    else if(right > left)
    {
        cout << "right";
    }
    else
    {
        cout << "balance";
    }
    
    return 0;
}