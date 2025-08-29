// #include <bits/stdc++.h>
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

signed main() {
    string s;
    cin >> s;
    int n = s.size();

    // dp[i][j] = min operations to match prefix of s up to i with current last digit being j
    // Since only last digit matters (due to full B application), we can optimize it further.

    vector<vector<int>> dp(n + 1, vector<int>(10, INT_MAX));
    dp[0][0] = 0;

    for (int i = 0; i < n; ++i) {
        int target_digit = s[i] - '0';
        for (int d = 0; d < 10; ++d) {
            if (dp[i][d] == INT_MAX) continue;

            // Try all x such that (d + x) % 10 == target_digit
            for (int x = 0; x < 10; ++x) {
                if ((d + x) % 10 == target_digit) {
                    int new_digit = target_digit;
                    int cost = dp[i][d] + 1 + x; // 1 for A, x for B
                    dp[i + 1][new_digit] = min(dp[i + 1][new_digit], cost);
                }
            }
        }
    }

    int ans = *min_element(dp[n].begin(), dp[n].end());
    cout << ans << endl;
    return 0;
}