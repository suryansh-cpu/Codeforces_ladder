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
    set <int> positive,negetive,zero;
    int i;
    rep(i,n)
    {
        int a;
        cin >> a;
        if(a<0) negetive.insert(a);
        else if(a>0) positive.insert(a);
        else zero.insert(a);
    }
    int sn,sp,sz;
    sn = negetive.size();
    sp = positive.size();
    sz=1;
    if(positive.empty())
    {
        auto itr1 = negetive.begin();
        ++itr1;
        auto itr2 = next(itr1);
        positive.insert(*itr1);
        positive.insert(*itr2);
        negetive.erase(itr2);
        negetive.erase(itr1);
        sn = negetive.size();
        if(sn%2==0)
        {
            auto itr3 = negetive.begin();
            zero.insert(*itr3);
            negetive.erase(itr3);
        }
    }
    else
    {
        if(sn%2==0)
        {
            auto itr = negetive.begin();
            zero.insert(*itr);
            negetive.erase(itr);
        }
    }
    sn = negetive.size();
    sz = zero.size();
    sp = positive.size();
    cout << sn << " ";
    for(auto it : negetive)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << sp << " ";
    for(auto it : positive)
    {
        cout << it << " ";
    }
    cout << endl;
    cout << sz << " ";
    for(auto it : zero)
    {
        cout << it << " ";
    }
    cout << endl;
    return 0;
}