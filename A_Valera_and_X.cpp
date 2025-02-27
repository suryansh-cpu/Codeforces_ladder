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
    char arr[n][n];
    int i,j;
    rep(i,n)
    {
        rep(j,n)
        {
            cin >> arr[i][j];
        }
    }
    char diag=arr[0][0];
    char outer_box = arr[0][1];
    if(diag==outer_box)
    {
        cout << "NO";
        return 0;
    }
    rep(i,n)
    {
        if(arr[i][n-i-1]!=diag || arr[i][i]!=diag)
        {
            cout << "NO";
            return 0;
        }
        // else
        // {
        //     cout << "NO";
        //     return 0;
        // }
        
        rep(j,n)
        {
            if((j==(n-i-1))||(j==(i)))
            {
                continue;
            }
            else
            {
                if(arr[i][j]==outer_box)
                {
                    continue;
                }
                else
                {
                    cout << "NO";
                    return 0;
                }
                
            }
        }
    }
    cout << "YES";
    return 0;
}