// #include <cassert>
// #include <cctype>
// #include <cerrno>
// #include <cfloat>
// #include <ciso646>
// #include <climits>
// #include <clocale>
// #include <cmath>
// #include <csetjmp>
// #include <csignal>
// #include <cstdarg>
// #include <cstddef>
// #include <cstdio>
// #include <cstdlib>
// #include <cstring>
// #include <ctime>
// #if __cplusplus >= 201103L
// #include <ccomplex>
// #include <cfenv>
// #include <cinttypes>
// #include <cstdbool>
// #include <cstdint>
// #include <ctgmath>
// #include <cwchar>
// #include <cwctype>
// #endif
// #include <algorithm>
// #include <bitset>
// #include <complex>
// #include <deque>
// #include <exception>
// #include <fstream>
// #include <functional>
// #include <iomanip>
// #include <ios>
// #include <iosfwd>
// #include <iostream>
// #include <istream>
// #include <iterator>
// #include <limits>
// #include <list>
// #include <locale>
// #include <map>
// #include <memory>
// #include <new>
// #include <numeric>
// #include <ostream>
// #include <queue>
// #include <set>
// #include <sstream>
// #include <stack>
// #include <stdexcept>
// #include <streambuf>
// #include <string>
// #include <typeinfo>
// #include <utility>
// #include <valarray>
// #include <vector>
// #if __cplusplus >= 201103L
// #include <array>
// #include <atomic>
// #include <chrono>
// #include <condition_variable>
// #include <forward_list>
// #include <future>
// #include <initializer_list>
// #include <mutex>
// #include <random>
// #include <ratio>
// #include <regex>
// #include <scoped_allocator>
// #include <system_error>
// #include <thread>
// #include <tuple>
// #include <typeindex>
// #include <type_traits>
// #include <unordered_map>
// #include <unordered_set>
// #endif
// #define int long long int
// #define endl "\n"
// #define pb push_back
// #define rep(i,n) for(i=0;i<n;++i)
// using namespace std;
// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int unused = 0;
//     int req = 3;
//     map <int,int> tracker;
//     int n;
//     cin >> n;
//     if(n==1)
//     {
//         cout << "YES";
//         return 0;
//     }
//     int i;
//     rep(i,n)
//     {
//         int a;
//         cin >> a;
//         tracker[a]++;
//     }
//     for(auto it : tracker)
//     {
//         if(unused == 0)
//         {
//             unused+=it.second;
//             continue;
//         }
//         else
//         {
//             if(it.second > unused)
//             {
//                 unused = it.second - unused - 1;
//             }
//             else if(it.second == unused)
//             {
//                 unused = 1;
//                 if(it.second == 1 && unused == 1)
//                 {
//                     unused = 0;
//                 }
//             }
//             else if(it.second < unused)
//             {
//                 unused = unused - it.second - 1;
//             }
//         }
//     }
//     if(unused == 0)
//     {
//         cout << "YES";
//     }
//     else
//     {
//         cout << "NO";
//     }
    
//     return 0;
// }
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
    map<int,int> input;
    set<int> arr;
    int n;
    cin >> n;
    int i;
    rep(i,n)
    {
        int a;
        cin >> a;
        input[a]++;
    }
    for(auto it : input)
    {
        arr.insert(it.second);
    }
    set <int>::reverse_iterator it = arr.rbegin();
    if(n&1)
    {
        if(*it>(n+1)/2)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        
    }
    else
    {
        if(*it>n/2)
        {
            cout << "NO";
        }
        else
        {
            cout << "YES";
        }
        
    }
    
    return 0;
}