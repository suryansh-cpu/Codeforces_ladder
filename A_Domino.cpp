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
    int arr[n][2];
    int i,j;
    rep(i,n)
    {
        rep(j,2)
        {
            cin >> arr[i][j];
        }
    }

    // INPUT CHECKING ................................

    // rep(i,n)
    // {
    //     rep(j,2)
    //     {
    //         cout << arr[i][j];
    //     }
    // }

    int up=0;
    int down=0;
    rep(i,n)
    {
        rep(j,2)
        {
            if(j==0)
            {
                up+=arr[i][j];
            }
            else
            {
                down+=arr[i][j];
            }
        }
    }
    if(up%2==0 && down%2==0)
    {
        cout << 0;
    }
    else if((up%2==0 && down%2==1)||(up%2==1 && down%2==0))
    {
        cout << -1;
    }
    else
    {    
        rep(i,n)
        {
            int temp_up=up-arr[i][0]+arr[i][1];
            int temp_down=up-arr[i][1]+arr[i][0];
            if(temp_down%2==0 && temp_up%2==0)
            {
                cout << 1;
                return 0;
            }
        }    
        cout << -1;
    }
    return 0;
}