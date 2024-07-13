// island parameter
#include <bits/stdc++.h>
using namespace std;

int islandParameter(vector<vector<int>> &grid)
{
    int n = grid.size();
    int m = grid[0].size();

    int parameter = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (grid[i][j] == 1)
            {
                parameter += 4;

                if (i - 1 >= 0 && grid[i - 1][j] == 1)
                {
                    parameter -= 1;
                }
                if (j - 1 >= 0 && grid[i][j - 1] == 1)
                {
                    parameter -= 1;
                }
                if (j + 1 < m && grid[i][j + 1] == 1)
                {
                    parameter -= 1;
                }
                if (i + 1 < n && grid[i + 1][j] == 1)
                {
                    parameter -= 1;
                }
            }
        }
    }

    return parameter;
}

int main()
{

    vector<vector<int>> grid = {{0, 1, 0, 0}, {1, 1, 1, 0}, {0, 1, 0, 0}, {1, 1, 0, 0}};

    cout << islandParameter(grid);

    return 0;
}
