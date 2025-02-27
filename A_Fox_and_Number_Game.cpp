// // #include <cassert>
// // #include <cctype>
// // #include <cerrno>
// // #include <cfloat>
// // #include <ciso646>
// // #include <climits>
// // #include <clocale>
// // #include <cmath>
// // #include <csetjmp>
// // #include <csignal>
// // #include <cstdarg>
// // #include <cstddef>
// // #include <cstdio>
// // #include <cstdlib>
// // #include <cstring>
// // #include <ctime>
// // #if __cplusplus >= 201103L
// // #include <ccomplex>
// // #include <cfenv>
// // #include <cinttypes>
// // #include <cstdbool>
// // #include <cstdint>
// // #include <ctgmath>
// // #include <cwchar>
// // #include <cwctype>
// // #endif
// // #include <algorithm>
// // #include <bitset>
// // #include <complex>
// // #include <deque>
// // #include <exception>
// // #include <fstream>
// // #include <functional>
// // #include <iomanip>
// // #include <ios>
// // #include <iosfwd>
// // #include <iostream>
// // #include <istream>
// // #include <iterator>
// // #include <limits>
// // #include <list>
// // #include <locale>
// // #include <map>
// // #include <memory>
// // #include <new>
// // #include <numeric>
// // #include <ostream>
// // #include <queue>
// // #include <set>
// // #include <sstream>
// // #include <stack>
// // #include <stdexcept>
// // #include <streambuf>
// // #include <string>
// // #include <typeinfo>
// // #include <utility>
// // #include <valarray>
// // #include <vector>
// // #if __cplusplus >= 201103L
// // #include <array>
// // #include <atomic>
// // #include <chrono>
// // #include <condition_variable>
// // #include <forward_list>
// // #include <future>
// // #include <initializer_list>
// // #include <mutex>
// // #include <random>
// // #include <ratio>
// // #include <regex>
// // #include <scoped_allocator>
// // #include <system_error>
// // #include <thread>
// // #include <tuple>
// // #include <typeindex>
// // #include <type_traits>
// // #include <unordered_map>
// // #include <unordered_set>
// // #endif
// // #define int long long int
// // #define endl "\n"
// // #define pb push_back
// // #define rep(i,n) for(i=0;i<n;++i)
// // using namespace std;
// // signed main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     int n;
// //     cin >> n;
// //     multiset <int> num;
// //     int i;
// //     rep(i,n)
// //     {
// //         int s;
// //         cin >> s;
// //         num.insert(s);
// //     }
// //     //  for(auto it : num)
// //     // {
// //     //     cout << it << " ";
// //     // }
// //     int j;
// //     auto endd = num.rbegin();
// //     auto po = num.begin();
// //     auto it = num.rbegin();
// //     auto pit = next(it);
// //     while (*po != *endd)
// //     {
// //         // cout << "IN WHILE ";
// //         if(*it>*pit)
// //         {
// //             // cout << "IN IF" << endl;
// //             int f = *it - *pit;
// //             num.insert(f);
// //             num.erase(*it);
// //             // cout << "INSERTING ELEMENT" << endl;
// //             it = num.rbegin();
// //             pit = next(it);
// //             po = num.begin();
// //             // break;
// //         }   
// //         // ++pit;
// //         else
// //         {
// //             // ++it;
// //             ++pit;
// //         }
// //         // while (condition)
// //         // {
// //         //     /* code */
// //         // }
        
// //     }
// //     int sum=0;
// //     for(auto it : num)
// //     {
// //         sum += it;
// //     }
// //     cout << sum;
// //     // for(auto it : num)
// //     // {
// //     //     cout << it << " ";
// //     // }
// //     return 0;
// // }
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
//     int i;
//     multiset <int> num;
//     rep(i,n)
//     {
//         int s;
//         cin >> s;
//         num.insert(s);
//     }
//     auto it = num.rbegin();
//     auto nit = next(it);
//     auto terminator = num.begin();
//     auto terminator2 = num.begin();
//     int small = *terminator;
//     ++terminator;
//     int j=1;
//     while (j>0)
//     {
//         // if(*it == *terminator2)
//         // {
//         //     // if(*it == *terminator)
//         //     // {
//         //         break;
//         //     // }
//         //     // ++it;
//         //     // nit = next(it);
//         // }
//         if(*it==*terminator)
//         {
//             if(*it==*nit)
//                 if(it != num.rend())
//                 {
//                     it++;
//                     nit = next(it);
//                 }
//             small = min(small,*it-*nit);
//         }
//         else
//         {
//             if(*it!=*nit)
//             {    small = min(small,*it-*nit);
//                 ++it;
//                 // ++nit;
//                 if (it != num.rend()) {
//                     // nit = next(it);
//                     break;
//                 }   
//                 else
//                 {
//                     nit = next(it);
//                 }
                
//                 // nit = next(it);
//             }
//             else
//             {
//                 ++nit;
//             }
            
//         }
        
//     }
//     cout << small*n;
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
    rep(i,n)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int small = arr[0];
    // rep(i,n)
    // {
    //     cout << arr[i] << " ";
    // }
    for(int j=n-1;j>0;j--)
    {
        for (int k = j-1; k >= 0; k--)
        {
            if(arr[j]==arr[k])
            {
                continue;
            }
            else if(arr[k]<arr[j])
            {
                small = min(small,arr[j]-arr[k]);
                arr[j] = arr[j]-arr[k];
                j+=1;
                sort(arr,arr+n);
                break;
            }
        }
        
    }
    cout << small*n;
    return 0;
}