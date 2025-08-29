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
//     int n,m;
//     cin >> n >> m;
//     vector<vector<pair<int,int> > >locations(n);
//     vector<vector<int> >inputs;
//     int counter = 0;
//     int i;
//     rep(i,m)
//     {
//         int a;
//         cin >> a;
//         int j;
//         rep(j,a)
//         {
//             int b;
//             cin >> b;
//             inputs[i].push_back(b);
//             locations[b].push_back({i,j});
//         }
//     }
//     rep(i,n)
//     {
//         int a;
//         cin >> a;
//         for(auto it : locations[a])
//         {
//             inputs[it.first].erase(inputs[it.first].begin()+it.second);
//             if(inputs[it.first].empty())
//             {
//                 counter++;
//             }
//         }
//         cout << counter << endl;
//     }
//     return 0;
// }
#include <iostream>
#include <vector>
#include <algorithm>

#define int long long int
#define endl "\n"
#define pb push_back
#define rep(i,n) for(i=0;i<n;++i)

using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<vector<int>> inputs(m); // ingredients per dish
    vector<vector<pair<int, int>>> locations(n + 1); // ingredient -> list of (dish index, ingredient value)

    int i,j;
    rep(i, m) {
        int k;
        cin >> k;
        rep(j, k) {
            int ing;
            cin >> ing;
            inputs[i].pb(ing);
            locations[ing].pb({i, ing});
        }
    }

    int counter = 0;
    rep(i, n) {
        int overcome;
        cin >> overcome;

        for (auto it : locations[overcome]) {
            auto& vec = inputs[it.first];
            vec.erase(remove(vec.begin(), vec.end(), it.second), vec.end());
            if (vec.empty()) {
                counter++;
            }
        }

        cout << counter << endl;
    }

    return 0;
}
