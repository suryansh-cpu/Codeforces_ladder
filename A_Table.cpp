// // #include <cassert>
// // #include <cctype>
// // #include <cerrno>
// // #include <cfloat>
// // #include <ciso646>
// // #include <climits>
// // #include <clocale>
// // #include <cmath>
// // #include <csetjmp>
// // #include <csignal>
// // #include <cstdarg>
// // #include <cstddef>
// // #include <cstdio>
// // #include <cstdlib>
// // #include <cstring>
// // #include <ctime>
// // #if __cplusplus >= 201103L
// // #include <ccomplex>
// // #include <cfenv>
// // #include <cinttypes>
// // #include <cstdbool>
// // #include <cstdint>
// // #include <ctgmath>
// // #include <cwchar>
// // #include <cwctype>
// // #endif
// // #include <algorithm>
// // #include <bitset>
// // #include <complex>
// // #include <deque>
// // #include <exception>
// // #include <fstream>
// // #include <functional>
// // #include <iomanip>
// // #include <ios>
// // #include <iosfwd>
// // #include <iostream>
// // #include <istream>
// // #include <iterator>
// // #include <limits>
// // #include <list>
// // #include <locale>
// // #include <map>
// // #include <memory>
// // #include <new>
// // #include <numeric>
// // #include <ostream>
// // #include <queue>
// // #include <set>
// // #include <sstream>
// // #include <stack>
// // #include <stdexcept>
// // #include <streambuf>
// // #include <string>
// // #include <typeinfo>
// // #include <utility>
// // #include <valarray>
// // #include <vector>
// // #if __cplusplus >= 201103L
// // #include <array>
// // #include <atomic>
// // #include <chrono>
// // #include <condition_variable>
// // #include <forward_list>
// // #include <future>
// // #include <initializer_list>
// // #include <mutex>
// // #include <random>
// // #include <ratio>
// // #include <regex>
// // #include <scoped_allocator>
// // #include <system_error>
// // #include <thread>
// // #include <tuple>
// // #include <typeindex>
// // #include <type_traits>
// // #include <unordered_map>
// // #include <unordered_set>
// // #endif
// // #define int long long int
// // #define endl "\n"
// // #define pb push_back
// // #define rep(i,n) for(i=0;i<n;++i)
// // using namespace std;
// // signed main(){
// //     ios::sync_with_stdio(false);
// //     cin.tie(nullptr);
// //     int n,m;
// //     cin >> n >> m;
// //     int arr[n][m];
// //     vector<pair<int,int> > location;
// //     memset(arr,0,m*n*sizeof(int));
// //     int i,j;
// //     rep(i,n)
// //     {
// //         rep(j,m)
// //         {
// //             int a;
// //             cin >> arr[i][j];
// //             if(arr[i][j]==1)
// //             {
// //                 location.push_back({i,j});
// //             }
// //         }
// //     }
// //     int maxx = 0;
// //     int prob[4][4] = {{0,0},{n-1,0},{0,m-1},{n-1,m-1}};
// //     int index1 = 0,index2 = 0;
// //     int counter = 0;
// //     rep(i,4)
// //     {
// //         // cout << i << " ";
// //         // cout << "EDGES FILLING STATUS : " << arr[prob[i][0]][prob[i][1]] << " " << endl << "MIN g,h : ";
// //         if(arr[prob[i][0]][prob[i][1]]==0)
// //         {
// //             // cout << "IN" << endl;
// //             for(auto it : location)
// //             {
// //                 // maxx = max(maxx,(abs(it.first - prob[i][0])+abs(it.second - prob[i][1])));
// //                 if((abs(it.first - prob[i][0])+abs(it.second - prob[i][1]))>maxx)
// //                 {
// //                     index1 = it.first;
// //                     index2 = it.second;
// //                     maxx = (abs(it.first - prob[i][0])+abs(it.second - prob[i][1]));
// //                 }
// //             }


// //             // cout << index1 << " " << index2 << endl;
// //             maxx = 0;


// //             int g = min(index1,prob[i][0]),h = min(index2,prob[i][1]);
            
            
// //             // cout << g << " " << h << " ";
// //             // cout << endl;
// //             // cout << "MAX : " << max(index1,prob[i][0]) << " " << max(index2,prob[i][1]) << endl;


// //             rep(g,max(index1,prob[i][0])+1)
// //             {
// //                 rep(h,max(index2,prob[i][1])+1)
// //                 {
// //                     arr[g][h]=1;
// //                 }
// //             }
// //             counter++;
// //             // cout << "EDGES FILLING STATUS2 : " << arr[prob[i][0]][prob[i][1]] << endl;
// //             // cout << endl;
// //         }
// //         else
// //         {
// //             continue;
// //         }
        
// //     }


// //     cout << counter;
    
// //     // rep(i,4)
// //     // {
// //     //     cout << prob[i][0] << " " << prob[i][1] << endl;
// //     // }
    
    
// //     // rep(i,n)
// //     // {
// //     //     rep(j,m)
// //     //     {
// //     //         cout << arr[i][j] << " ";
// //     //     }
// //     //     cout << endl;
// //     // }



// //     // for(auto it : location)
// //     // {
// //     //         cout << it.first << " ";
// //     //         cout << it.second << endl;
// //     // }
// //     return 0;
// // }
// #include <cassert>
// #include <cctype>
// #include <cerrno>
// #include <cfloat>
// #include <ciso646>
// #include <climits>
// #include <clocale>
// #include <cmath>
// #include <csetjmp>
// #include <csignal>
// #include <cstdarg>
// #include <cstddef>
// #include <cstdio>
// #include <cstdlib>
// #include <cstring>
// #include <ctime>
// #if __cplusplus >= 201103L
// #include <ccomplex>
// #include <cfenv>
// #include <cinttypes>
// #include <cstdbool>
// #include <cstdint>
// #include <ctgmath>
// #include <cwchar>
// #include <cwctype>
// #endif
// #include <algorithm>
// #include <bitset>
// #include <complex>
// #include <deque>
// #include <exception>
// #include <fstream>
// #include <functional>
// #include <iomanip>
// #include <ios>
// #include <iosfwd>
// #include <iostream>
// #include <istream>
// #include <iterator>
// #include <limits>
// #include <list>
// #include <locale>
// #include <map>
// #include <memory>
// #include <new>
// #include <numeric>
// #include <ostream>
// #include <queue>
// #include <set>
// #include <sstream>
// #include <stack>
// #include <stdexcept>
// #include <streambuf>
// #include <string>
// #include <typeinfo>
// #include <utility>
// #include <valarray>
// #include <vector>
// #if __cplusplus >= 201103L
// #include <array>
// #include <atomic>
// #include <chrono>
// #include <condition_variable>
// #include <forward_list>
// #include <future>
// #include <initializer_list>
// #include <mutex>
// #include <random>
// #include <ratio>
// #include <regex>
// #include <scoped_allocator>
// #include <system_error>
// #include <thread>
// #include <tuple>
// #include <typeindex>
// #include <type_traits>
// #include <unordered_map>
// #include <unordered_set>
// #endif
// #define int long long int
// #define endl "\n"
// #define pb push_back
// #define rep(i,n) for(i=0;i<n;++i)
// using namespace std;
// int counter=0;
// int ans[4][2];
// void recur(int a, int b, vector<vector<int> >& input,int n,int m,int i)
// {
//     int x,y;
//     int maxi=0;
//     rep(x,n)
//     {
//         rep(y,m)
//         {
//             if(input[x][y]==1)
//             {
//                 maxi = max(maxi,abs(abs(y-b)+abs(x-a)));
//                 if(maxi==abs(abs(y-b)+abs(x-a)))
//                 {
//                     ans[i][0]=x;
//                     ans[i][1]=y;
//                 }
//             }
//         }
//     }
//     // maxi;
// }
// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int n,m;
//     cin >> n >> m;
//     int i,j;
//     vector<vector<int> > arr(n, vector<int>(m));
//     // memset(arr,0,sizeof(arr));
//     rep(i,n)
//     {
//         rep(j,m)
//         {
//             cin >> arr[i][j];
//         }
//     }
//     int edges[4][2] = {{0,0},{n,0},{0,m},{n,m}};
//     // vector<int>maxx(4);
//     rep(i,4)
//     {
//         recur(edges[i][0],edges[i][1],arr,n,m,i);
//     }
//     rep(i,4)
//     {
//         if(arr[edges[i][0]][edges[i][1]]==0)counter++;
//         for(int s = min(ans[i][0],edges[i][0]);s<max(ans[i][0],edges[i][0]);s++)
//         {
//             for(int t = min(ans[i][1],edges[i][1]);t<max(ans[i][1],edges[i][1]);t++)
//             {
//                 if(arr[s][t]==0)arr[s][t]=1;
//             }
//         }
//     }
//     cout << counter;
//     return 0;
// }
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
    vector<vector<int> >arr(n,vector<int>(m));
    vector<int>c1(2);
    vector<int>c2(2);
    vector<int>c3(2);
    vector<int>c4(2);
    multiset<pair<int,int> >one;
    int i,j;
    rep(i,n)
    {
        rep(i,m)
        {
            cin >> arr[i][j];
            if(arr[i][j]==1)
            {
                one.insert({i,j});
            }
        }
    }

    return 0;
}