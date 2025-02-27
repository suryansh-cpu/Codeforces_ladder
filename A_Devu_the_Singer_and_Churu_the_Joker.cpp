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
#define rep(i,n) for(i=0;i<n;i++)
using namespace std;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,limit;
    cin >> n >> limit;
    int joker = 10;
    int arr[n];
    int i=0;
    rep(i,n)
    {
        cin >> arr[i];
    }
    int total=0;
    i=0;
    int j=n;
    while(j)
    {
        total+=joker;
        total+=arr[i];
        ++i;
        j--;
    }
    if(total > limit)
    {
        total-=10;
        if(total>limit)
        {
            cout << -1;
        }
        else if(total+5<=limit)
        {
            cout << ((n-1)*2)+1;
        }
        else
        {
            cout << ((n-1)*2);
        }
    }
    else if(total==limit)
    {
        cout << ((n-1)*2)+2;
    }
    else if(total<limit)
    {
        int count=2;
        while(total<limit)
        {
            total+=5;
            count++;
        }
        cout << ((total>limit)?((n-1)*2+(count-1)):((n-1)*2+count));
    }
    return 0;
}