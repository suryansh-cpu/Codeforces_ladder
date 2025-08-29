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
    string a;
    cin >> a;
    int max_local = 0,ans = INT_MIN;
    int index1 = 0,index2=0;
    string answer;
    for(int i = 0;i<a.length()-2;++i)
    {
        // int ans = 0;
        // if(a[i] == 'x')
        // {
        //     if(a[i+1] == 'o')ans+=2;
        //     for (int k = i+2; k < a.length()-2; k++)
        //     {
        //         if(a[k]=='x' && a[k+1]=='0'){ans+=2;k++;}
        //         else
        //         {
        //             if(max_local < ans)max_local = ans;
        //             break;
        //         }
        //     }
            
        // }
        // else continue;
        if((a[i]=='x' && a[i+1]=='o') && a[i+2] == 'x')
        {
            // max_local+=2;
            answer += "so";
            i+=2;
        }
        else
        {
            // if(ans<max_local){
            //     ans = max_local;
            //     index1 = (i-1) - max_local + 1;
            //     index2 = i-1;
            // }
            // max_local = 0;
            answer+=a[i];
        }
    }
    // answer+=a[a.length()-2];
    // answer+=a[a.length()-1];
    for(int j = 0;j<answer.length()-1;j++)
    {

    }
    cout << answer;
    // cout << "starting index : " << index1 << " ending index : " << index2 << " ans : " << ans;
    return 0;
}