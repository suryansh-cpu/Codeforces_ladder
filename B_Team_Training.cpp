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
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        map <int,int> arr;
        int i,count=0;
        rep(i,n)
        {
            int a;
            cin >> a;
            if(a>=k)count++;
            else
            {
                arr[a]++;
            }
        }
        map<int,int>::reverse_iterator itr = arr.rbegin();
        int nextt = 0;
        int count_1 = 0;
        while(itr != arr.rend())
        {
            itr->second+=count_1;
            count_1=0;
            if(k/itr->first+1>=itr->second)
            {
                int see = k/itr->first;
                if(see*itr->first==k)
                {
                    count += itr->second/(k/itr->first);
                    count_1 += (itr->second/(k/itr->first))*see;
                }
                else 
                    count += itr->second/((k/itr->first)+1);
                    count_1 += (itr->second/(k/itr->first)+1)*see;
            }
            ++itr;
        }
        cout << count << endl;
    }
    return 0;
}