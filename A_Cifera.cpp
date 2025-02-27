// RECURSIVE SOLUTION.........................................................

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
int arr[32];
int counter=0;
// int uni=0;
int is_divisor_of(int n,int l)
{
    if(l%n!=0)
    {
        return 0;
    }
    else if(l/n==1)
    {
        counter++;
        return 1;
    }
    else
    {
        counter++;
        is_divisor_of(n,l/n);
    }
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    memset(arr, 0, sizeof(arr));
    int n;
    cin >> n;
    int num;
    cin >> num;
    if(is_divisor_of(n,num)) cout << "YES" << endl << counter-1;
    else cout << "NO";
    return 0;
}

// WHILE LOOP SOLUTION.......................................................................................

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
//     int n,num;
//     cin >> n >> num;
//     int i=1,j=0;
//     while (i<31)
//     {
//         if(pow(n,i)==num)
//         {
//             j=i;
//             cout << "YES" << endl << j-1;
//             return 0;
//         }
//         else
//         {
//             i++;
//         }
        
//     }
//     cout << "NO";
//     return 0;
// }