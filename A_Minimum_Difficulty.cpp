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
//     int n;
//     cin >> n;
//     int arr[n];
//     int i;
//     int max=0;
//     int temp=0;
//     // int max_bolt=0;
//     rep(i,n)
//     {
//         if(i==0)
//         {
//             cin>>arr[i];
//         }
//         else
//         {
//             cin >> arr[i];
//             if(temp<arr[i]-arr[i-1])
//             {
//                 temp=arr[i]-arr[i-1];
//                 // max_bolt = i;
//             }
//         }
        
//     }
//     int min=0;
//     bool bolt=false;
//     set <int> minn;
//     rep(i,n-2)
//     {
//         if(i==0)
//         {
//             min=arr[i+2]-arr[i];
//             if(min>=temp)
//             {
//                 max=min;
//                 bolt=true;
//             }
//         }
//         else{
//             int a=arr[i+2]-arr[i];
//             min=a;
//             if(bolt==false){
//                 if(min>=temp && min<max)
//                 {
//                     bolt=true;
//                     max=min;
//                 }
//             }
//             minn.insert(min);
//         }
//     }
//     // cout << max;
//     for(auto it:minn)
//     {
//         if(it>=max)
//         {
//             cout << max;
//             return 0;
//         }
//     }
//     cout << max;
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
    int n;
    cin >> n;
    int i;
    int arr[n];
    int max=0;
    rep(i,n)
    {
        cin >> arr[i];
        if(i>0)
        {
            if(max<arr[i]-arr[i-1])
            {
                max = arr[i]-arr[i-1];
            }
        }
    }
    set <int> ans;
    for(int j=1;j<n-1;j++)
    {
        int a = arr[j+1]-arr[j-1];
        if(a>=max)
        {
            ans.insert(a);
        }
        if(a<max)
        {
            ans.insert(max);
        }
    }
    auto it = ans.begin();
    advance(it,0);
    if(*it<max)
    {
        cout << max;
    }
    else
    {
        cout << *it;
    }
    // cout << *it; 
    return 0;
}