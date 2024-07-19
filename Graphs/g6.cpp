#include<bits/stdc++.h>
using namespace std;

int rottingOranges(vector<vector<int>>& grid) {
    int n = grid.size();
    int m = grid[0].size();

    int freshOrangesCount = 0;
    queue<pair<int, int>> q;

    vector<vector<int>> visited = grid;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j] == 1) {
                freshOrangesCount++;
            }
            else if (visited[i][j] == 2) {
                q.push({i, j});
            }
        }
    }

    if (freshOrangesCount == 0) {
        return 0;
    }
    if (q.size() == 0) {
        return -1;
    }

    int minutes = -1;
    vector<pair<int, int>> dirs = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    while (!q.empty()) {
        minutes++;
        int qsize = q.size();
        while (qsize--) {
            auto [x, y] = q.front();
            q.pop();

            for (auto [dx, dy] : dirs) {
                int i = x + dx;
                int j = y + dy;

                if (i >= 0 && i < n && j >= 0 && j < m && visited[i][j] == 1) {
                    visited[i][j] = 2;
                    q.push({i, j});
                    freshOrangesCount--;
                }
            }
        }
    }

    if (freshOrangesCount > 0) {
        return -1;// There are still fresh oranges left
    }

    return minutes;
}

int main(){
    return 0;
}