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
    int fibb[49];
    memset(fibb,0,sizeof(fibb));
    fibb[0]=0;
    fibb[1]=1;
    for(int i = 2;i<49;i++)
    {
        if((fibb[i-1]+fibb[i-2])<=10^9)
            fibb[i] = fibb[i-1]+fibb[i-2];
    }
    int n;
    cin >> n;
    int i;
    int location=0;
    rep(i,49)
    {
        if(n==fibb[i])
        {
            location = i-1;
            break;
        }
    }
    n-=fibb[location];
    cout << fibb[location] << " ";
    rep(i,49)
    {
        if(fibb[i]>n)
        {
            location = i-1;
            break;
        }
    }
    n-=fibb[location];
    cout << fibb[location] << " ";
    rep(i,49)
    {
        if(fibb[i]>n)
        {
            location = i-1;
            break;
        }
    }
    n-=fibb[location];
    cout << fibb[location] << " ";
    return 0;
}