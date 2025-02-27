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

// int min_operations_to_make_same(string s1, string s2, string s3) {
//     int n = s1.length();
    
//     // Count occurrences of '0' and '1' in each string
//     vector<int> count_0(3, 0), count_1(3, 0);
    
//     for (int i = 0; i < n; i++) {
//         count_0[0] += (s1[i] == '0');
//         count_1[0] += (s1[i] == '1');
//         count_0[1] += (s2[i] == '0');
//         count_1[1] += (s2[i] == '1');
//         count_0[2] += (s3[i] == '0');
//         count_1[2] += (s3[i] == '1');
//     }
    
//     // Total count of '0' and '1' across all strings
//     int total_0 = count_0[0] + count_0[1] + count_0[2];
//     int total_1 = count_1[0] + count_1[1] + count_1[2];

//     // If it's impossible to make all characters the same
//     if (total_0 % 3 != 0 || total_1 % 3 != 0) {
//         return -1;
//     }

//     // Target count of '0' or '1' in each string after operations
//     int target_0 = total_0 / 3;
//     int target_1 = total_1 / 3;

//     // Count moves needed to balance each string to have target_0 '0's
//     int moves = 0;
//     for (int i = 0; i < 3; i++) {
//         if (count_0[i] > target_0) {
//             moves += (count_0[i] - target_0);
//         }
//     }

//     return moves;
// }

// signed main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         string s1, s2, s3;
//         cin >> s1 >> s2 >> s3;

//         cout << min_operations_to_make_same(s1, s2, s3) << endl;
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
// // signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
int min_operations_to_make_same(string s1, string s2, string s3) {
    int n = s1.length();
    
    // Count occurrences of '0' and '1' in each string
    vector<int> count_0(3, 0), count_1(3, 0);
    
    for (int i = 0; i < n; i++) {
        count_0[0] += (s1[i] == '0');
        count_1[0] += (s1[i] == '1');
        count_0[1] += (s2[i] == '0');
        count_1[1] += (s2[i] == '1');
        count_0[2] += (s3[i] == '0');
        count_1[2] += (s3[i] == '1');
    }
    
    // Total count of '0' and '1' across all strings
    int total_0 = count_0[0] + count_0[1] + count_0[2];
    int total_1 = count_1[0] + count_1[1] + count_1[2];

    // If it's impossible to make all characters the same
    if (total_0 % 3 != 0 || total_1 % 3 != 0) {
        return -1;
    }

    // Target count of '0' or '1' in each string after operations
    int target_0 = total_0 / 3;
    int target_1 = total_1 / 3;

    // Count moves needed to balance each string to have target_0 '0's
    int excess_0 = 0, excess_1 = 0;

    for (int i = 0; i < 3; i++) {
        if (count_0[i] > target_0) {
            excess_0 += (count_0[i] - target_0);
        }
        if (count_1[i] > target_1) {
            excess_1 += (count_1[i] - target_1);
        }
    }

    // The number of swaps required to balance the excess elements
    return (excess_0 + excess_1) / 2;
}

signed main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        cout << min_operations_to_make_same(s1, s2, s3) << endl;
    }
    return 0;
}