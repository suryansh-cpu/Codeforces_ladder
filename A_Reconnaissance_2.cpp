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
//     // multiset<int> m;
//     // int m[n];
//     // int mm[n][1];
//     int ans[2];
//     multiset<pair<int,int> > mm;
//     int i;
//     rep(i,n)
//     {
//         int a;
//         // cin >> a;
//         // cin >> m[i];
//         cin >> a;
//         mm.insert({a,i});
//         // m[i][0] = 
//         // m.insert(a);
//     }
//     int minn = INT_MAX;
//     // sort(mm,m+n);
//     // rep(i,n-1)
//     // {
//     //     minn = min(minn,abs(m[i]-m[i+1]));
//     // }
//     multiset<pair<int,int> >::iterator it2;
//     for(auto it = mm.begin();it!=mm.end();++it)
//     {
//         // auto it2 = next(it);
//         it2 = next(it);
//         if(it == mm.end() || it2 == mm.end())break;
//         minn = min(minn,abs(it->first-it2->first));
//         if(minn == abs(it->first-it2->second))
//         {
//             ans[0] = it->second;
//             ans[1] = it2->second;
//         }
//     }
//     // ans+=y;
//     // cout << minn;
//     cout << ans[0] << " " << ans[1];
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
    int arr[n+1];
    int i;
    rep(i,n)
    {
        cin >> arr[i];
    }
    arr[n] = arr[0];
    // sort(arr,arr+n);
    int minn=INT_MAX;
    int a,b;
    rep(i,n)
    {
        // for(int j = i+1; j<n;++j)
        // {
        //     // cout << "I=" << i << " J = " << j << endl;
            minn = min(minn,abs(arr[i]-arr[i+1]));
            if(minn == abs(arr[i]-arr[i+1]))
            {
                a = i;b = i+1;
            }
        // }
    }
    // cout << minn;
    if(b == n) cout << a+1 << " " << 1;
    else cout << a+1 << " " << b+1;
    return 0;
}