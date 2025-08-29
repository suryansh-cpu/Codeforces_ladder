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
    
//     return 0;
// }
#include <stdio.h>
#include <limits.h>

int main() {
    int T;
    if (scanf("%d", &T) != 1) return 0;

    while (T--) {
        int n;
        long long k;
        scanf("%d %lld", &n, &k);

        static long long a[200000], b[200000];
        for (int i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
        }
        for (int i = 0; i < n; i++) {
            scanf("%lld", &b[i]);
        }

        // First check if there's at least one known b[i]
        long long forced_x = -1;
        for (int i = 0; i < n; i++) {
            if (b[i] != -1) {
                long long x_i = a[i] + b[i];
                forced_x = (forced_x == -1 ? x_i : forced_x);
                if (forced_x != x_i) {
                    // conflicting sums → impossible
                    forced_x = LLONG_MAX;
                    break;
                }
            }
        }

        if (forced_x == LLONG_MAX) {
            // Conflict among known b[i] values
            printf("0\n");
            continue;
        }

        if (forced_x != -1) {
            // We have a single forced_x; check all positions
            long long x = forced_x;
            int ok = 1;
            for (int i = 0; i < n; i++) {
                long long bi = x - a[i];
                if (bi < 0 || bi > k) {
                    ok = 0;
                    break;
                }
            }
            printf("%d\n", ok);
        }
        else {
            // All b[i] are -1 → x can vary
            long long L = 0, R = LLONG_MAX;
            // intersect all intervals [a[i], a[i]+k]
            for (int i = 0; i < n; i++) {
                if (a[i] > L) L = a[i];
                long long up = a[i] + k;
                if (up < R) R = up;
            }
            long long ways = (R >= L ? (R - L + 1) : 0);
            printf("%lld\n", ways);
        }
    }

    return 0;
}