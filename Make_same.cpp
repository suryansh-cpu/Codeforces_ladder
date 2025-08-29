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
<<<<<<< HEAD

// int min_operations_to_make_same(string s1, string s2, string s3) {
//     int n = s1.length();
    
//     // Count occurrences of '0' and '1' in each string
//     vector<int> count_0(3, 0), count_1(3, 0);
    
//     for (int i = 0; i < n; i++) {
//         count_0[0] += (s1[i] == '0');
//         count_1[0] += (s1[i] == '1');
//         count_0[1] += (s2[i] == '0');
//         count_1[1] += (s2[i] == '1');
//         count_0[2] += (s3[i] == '0');
//         count_1[2] += (s3[i] == '1');
//     }
    
//     // Total count of '0' and '1' across all strings
//     int total_0 = count_0[0] + count_0[1] + count_0[2];
//     int total_1 = count_1[0] + count_1[1] + count_1[2];

//     // If it's impossible to make all characters the same
//     if (total_0 % 3 != 0 || total_1 % 3 != 0) {
//         return -1;
//     }

//     // Target count of '0' or '1' in each string after operations
//     int target_0 = total_0 / 3;
//     int target_1 = total_1 / 3;

//     // Count moves needed to balance each string to have target_0 '0's
//     int moves = 0;
//     for (int i = 0; i < 3; i++) {
//         if (count_0[i] > target_0) {
//             moves += (count_0[i] - target_0);
//         }
//     }

//     return moves;
// }

// signed main() {
//     int T;
//     cin >> T;
//     while (T--) {
//         int N;
//         cin >> N;
//         string s1, s2, s3;
//         cin >> s1 >> s2 >> s3;

//         cout << min_operations_to_make_same(s1, s2, s3) << endl;
=======
// signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     int t;
// 	cin >> t;
// 	for(int i = 0;i<t;i++)
// 	{
// 	    int n;
// 	    cin >> n;
// 	    int one=0,zero=0;
//         int track[3]={0};
// 	    int arr[3][n];
//         int duplicate[3][2]={0};
//         for (int j = 0; j < 3; j++)
//         {
//             int temp0=0,temp1=0;
//             for (int k = 0; k < n; k++)
//             {
//                 cin >> arr[j][k];
//                 cout << arr[j][k] << endl;
//                 if(arr[j][k]==0)
//                 {
//                     zero+=1;
//                     temp0+=1;
//                 }
//                 else
//                 {
//                     one+=1;
//                     temp1+=1;
//                 }
//             }
//             if(temp0>=temp1)
//             {
//                 // number.insert({j,0});
//                 track[j]=0;
//             }
//             else{
//                 // number.insert({j,1});
//                 track[j]=1;
//             }
//             duplicate[j][0] = temp0;
//             duplicate[j][1] = temp1;
//         }
//         // if(zero%n!=0 || one%n!=0)
//         // {
//         //     cout << -1 << endl;;
//         // }
//         // else
//         // {
//         //     if(zero==0 || zero == n*3)
//         //     {
//         //         cout << 0 << endl;
//         //     }
//         //     else if(zero == n)
//         //     {
//         //         int j;
//         //         rep(j,3)
//         //         {
//         //             if(track[j]==0)
//         //             {
//         //                 cout << duplicate[j][1] << endl;
//         //                 break;
//         //             }
//         //         }
//         //     }
//         //     else if(zero == n*2)
//         //     {
//         //         int j;
//         //         rep(j,3)
//         //         {
//         //             if(track[j]==1)
//         //             {
//         //                 cout << duplicate[j][0] << endl;
//         //                 break;
//         //             }
//         //         }
//         //     }
            
//         // }
>>>>>>> 3578c66 (clean project with proper gitignore)
//     }
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
<<<<<<< HEAD
// // signed main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
int min_operations_to_make_same(string s1, string s2, string s3) {
    int n = s1.length();
    
    // Count occurrences of '0' and '1' in each string
    vector<int> count_0(3, 0), count_1(3, 0);
    
    for (int i = 0; i < n; i++) {
        count_0[0] += (s1[i] == '0');
        count_1[0] += (s1[i] == '1');
        count_0[1] += (s2[i] == '0');
        count_1[1] += (s2[i] == '1');
        count_0[2] += (s3[i] == '0');
        count_1[2] += (s3[i] == '1');
    }
    
    // Total count of '0' and '1' across all strings
    int total_0 = count_0[0] + count_0[1] + count_0[2];
    int total_1 = count_1[0] + count_1[1] + count_1[2];

    // If it's impossible to make all characters the same
    if (total_0 % 3 != 0 || total_1 % 3 != 0) {
        return -1;
    }

    // Target count of '0' or '1' in each string after operations
    int target_0 = total_0 / 3;
    int target_1 = total_1 / 3;

    // Count moves needed to balance each string to have target_0 '0's
    int excess_0 = 0, excess_1 = 0;

    for (int i = 0; i < 3; i++) {
        if (count_0[i] > target_0) {
            excess_0 += (count_0[i] - target_0);
        }
        if (count_1[i] > target_1) {
            excess_1 += (count_1[i] - target_1);
        }
    }

    // The number of swaps required to balance the excess elements
    return (excess_0 + excess_1) / 2;
}

signed main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        string s1, s2, s3;
        cin >> s1 >> s2 >> s3;

        cout << min_operations_to_make_same(s1, s2, s3) << endl;
=======
int i,j;
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t=0;
    // cout << 5;
    cin >> t;
    // t++;
    while(t--)
    {
        int n;
        cin >> n;
        string arr[3];
        int track[3]={0};
        int duplicate[3][2]={0};
        int count0=0,count1=0;
        rep(i,3)
        {
            cin >> arr[i];
            int temp0=0,temp1=0;
            rep(j,n)
            {
                if(arr[i][j]=='1')
                {
                    count1++;
                    temp1++;
                }
                else if(arr[i][j]=='0')
                {
                    count0++;
                    temp0++;
                }
            }
            // cout << "temp:" << temp0 << " " << n << endl;
            if(temp0 == n || temp0 == 0)
            {
                // cout << "IN TRACK = -1" << endl;
                track[i] = -1;
            }
            else if(temp0>=temp1)
            {
                track[i] = 0;
            }
            else
            {
                track[i] = 1;
            }
            duplicate[i][0] = temp0;
            duplicate[i][1] = temp1;
        }
        // cout << "tracks " << track[0] << " " << track[1] << " " << track[2] << endl;
        // cout << "count0=" << count0 << " " << "n*2 = " << n*2 << endl;
        if(count0%n!=0)
        {
            cout << -1 << endl;
        }
        else if(count0 == 0 || count0 == n*3)
        {
            cout << 0 << endl;
        }
        else if(count0==n)
        {
            rep(j,n)
            {
                if(track[j]==0)
                {
                    // cout << "IN TRACK[i] " << track[i] << endl;
                    cout << duplicate[j][1] << endl;
                    break;
                }
            }
        }
        else if(count0==n*2)
        {
            // cout << "IN COUNT0 + N*2" << endl;
            rep(j,n)
            {
                if(track[j]==0)
                {
                    // cout << "IN TRACK[j] " << track[j] << endl;
                    cout << duplicate[j][0] << endl;
                    break;
                }
            }
        }
>>>>>>> 3578c66 (clean project with proper gitignore)
    }
    return 0;
}