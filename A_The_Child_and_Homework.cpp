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
    multiset <pair<int,char> > len;
    int i;
    rep(i,4){
        string a;
        cin >> a;
        int b = a.length()-2;
        len.insert({b,a[0]});}
        // for(auto it : len) {
        //     cout << it.first << " " << it.second << " ";
        //     set <pair<int,char> >::iterator it1 = len.begin();
        //     cout << it1->first*2 << " " << (++it1)->first << endl;;
        //     set <pair<int,char> >::reverse_iterator itr = len.rbegin();
        //     cout << itr->first << " " << (++itr)->first*2 << endl;
        // }
        // cout << endl;
    bool small = false,large = false;
    set <pair<int,char> >::iterator it = len.begin();
    if(it->first*2<=(++it)->first) small = true;
    set <pair<int,char> >::reverse_iterator itr = len.rbegin();
    if(itr->first>=(++itr)->first*2) large = true;
    if((small && large) || (!small && !large)) cout << "C";
    else
    {
        itr = len.rbegin();
        it = len.begin();
        if(large)cout << itr->second;
        else if(small)cout << it->second;
        else cout << "C";
    }
    return 0;
}