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
    int n,m;
    cin >> n >> m;
    multiset <int> correct;
    multiset <int> incorrect;
    int i;
    rep(i,n){
        int a;cin >> a;
        correct.insert(a);
    }
    rep(i,m){
        int a;cin >> a;
        incorrect.insert(a);
    }
    multiset<int>::iterator itr = correct.begin();
    multiset<int>::iterator itr_2 = incorrect.begin();
    // cout << *itr_2;
    auto x = correct.end();
    x--;
    int tl=*x;
    if(tl<(*itr*2))
    {
        tl=*itr*2;
        if(tl>=*itr_2)
        {
            cout << -1;
            return 0;
        }
        // else
        // {
        //     cout << tl;
        // }
    }
    // cout << tl;
    if(tl>=*itr_2)
    {
        cout << -1;
    }
    else
    {
        cout << tl;
    }
    
    // cout << tl;
    return 0;
}   