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
bool comp(int a, int b) {
      return a > b;
}
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n >> m;
    int arr1[n],arr2[m];
    int i,j;
    rep(i,n)
    {
        cin >> arr1[i];
    }
    rep(j,m)
    {
        cin >> arr2[j];
    }
    int a = sizeof(arr1)/sizeof(arr1[0]);int b = sizeof(arr2)/sizeof(arr2[0]);
    sort(arr1,arr1+a,comp);
    sort(arr2,arr2+b,comp);
    i = 0;
    j=0;
    int max=0;
    while(i<n && j<m)
    {
        if(arr1[i]+arr2[j]+max>max && arr2[j]>0)
        {
            max+=arr1[i]+arr2[j];
            j++;
            i++;
        }
        else break;
    }
    // i++;
    while(i<n)
    {
        if(arr1[i]>0)
        {
            max+=arr1[i];
            i++;
        }
        else break;
    }
    cout << max;
    return 0;
}