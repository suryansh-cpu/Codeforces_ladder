#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;

int countt(int a, int b){
    // vector<vector<int>>visited(a,vector<int>(b));
    queue<pair<int,int>>bfs;
    int ans = 0;
    bfs.push({0,0});
    while(!bfs.empty()){
        int x = bfs.size();
        while(x--){
            pair<int,int> d = bfs.front();
            bfs.pop();
            if(d.first == a-1 && d.second == b-1){
                ans++;
            }
            // else if(visited[d.first][d.second] == 1){
            //     continue;
            // }
            else{
                // visited[d.first][d.second] = 1;
                if(d.second+1<b)bfs.push({d.first,d.second+1});
                if(d.first+1<a)bfs.push({d.first+1,d.second});
            }
        }
    }
    return ans;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while(t--){
        int n,m;
        cin >> n >> m;
        cout << countt(n,m) << "\n";
    }  
    return 0;
}
