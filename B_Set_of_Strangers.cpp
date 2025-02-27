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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        map<int, int> freq1, freq2;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < m; ++j) {
                cin >> grid[i][j];
                if ((i + j) % 2 == 0)
                    freq1[grid[i][j]]++;
                else
                    freq2[grid[i][j]]++;
            }
        }

        pair<int, int> max1 = {0, 0}, second1 = {0, 0}, max2 = {0, 0}, second2 = {0, 0};
        
        for (auto [color, count] : freq1) {
            if (count > max1.second) {
                second1 = max1;
                max1 = {color, count};
            } else if (count > second1.second) {
                second1 = {color, count};
            }
        }
        
        for (auto [color, count] : freq2) {
            if (count > max2.second) {
                second2 = max2;
                max2 = {color, count};
            } else if (count > second2.second) {
                second2 = {color, count};
            }
        }

        int totalCells = n * m;
        int option1 = totalCells - max1.second - (max1.first == max2.first ? second2.second : max2.second);
        int option2 = totalCells - max2.second - (max2.first == max1.first ? second1.second : max1.second);
        
        cout << min(option1, option2) << "\n";
    }
    
    return 0;
}