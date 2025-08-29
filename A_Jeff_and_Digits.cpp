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
    int five=0,zero=0,i;
    rep(i,n)
    {
        int a;
        cin >> a;
        if(a==0)zero++;
        else five++;
    }
    if(n==five)cout << -1 << endl;
    else if(five<9)
    {
        if(zero>=15-five)
        {
            if(five == 0)cout << 0;
            else
            {
                rep(i,five)cout << 5;
                rep(i,zero)cout << 0;
            }
        }
        else if(zero>0)cout << 0;
        else cout << -1;
    }
    else if(five==9)
    {
        if(zero>0){
        rep(i,9)cout << 5;
        rep(i,zero)cout << 0;}
        else cout << -1;
    }
    else if(five>9)
    {
        rep(i,five-five%9)
        {
            cout << 5;
        }
        rep(i,n-five)
        {
            cout << 0;
        }
    }
    return 0;
}