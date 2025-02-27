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
// #define si(n) cin>>n;
// #define so(n) cout<<n;
// #define so(n,endl) cout<<n<<endl;
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x1,y1,x2,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int unit=0;
    if(x1==x2)
    {
        unit = abs(y1-y2);
        // if(y1>=y2)
        // {
        //     cout << x1+unit << " " << y1;
        //     cout << " " << x2 << " " << y2;
        // }
        // else
        // {
        //     cout << x1 << " " << y1 << " ";
        //     cout << x2+unit << " " << y2;
        // }
        cout << x1+unit << " " << y1 << " " << x2+unit << " " << y2;
    }
    else if(y2==y1)
    {
        unit = abs(x1-x2);
        cout << x1 << " " << y1+unit << " " << x2 << " " << y2+unit;
    }
    else if((abs(x1-x2)==abs(y1-y2)) && (x1!=x2 && y1!=y2))
    {
        unit = abs(x1-x2);
        if(y1>y2)
        {
            cout << x1 << " " << y1-unit << " " << x2 << " " << y2+unit;
        }
        else
        {
            cout << x1 << " " << y1+unit << " " << x2 << " " << y2-unit;
        }
        
    }
    else {
        cout << "-1";
    }
    return 0;
}