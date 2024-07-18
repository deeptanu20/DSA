#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void dfs(int zoneId, vector<int> &visited, unordered_map<int, vector<int>> &m)
    {

        visited[zoneId] = 1;

        for (int neighbour : m[zoneId])
        {
            if (visited[neighbour] == 0)
            {
                dfs(neighbour, visited, m);
            }
        }
    }

    int minSwapCouple(vector<int> &rows)
    {
        int coupleCount = rows.size() / 2;
        vector<int> zone_Number(2 * coupleCount);

        for (int i = 0; i < rows.size(); i++)
        {
            int zone = i / 2;

            zone_Number[rows[i]] = zone;
        }
        unordered_map<int, vector<int>> m;

        for (int i = 0; i < rows.size(); i++)
        {
            int person = rows[i];
            int partner;

            if (person % 2 == 0)
            {
                partner = person + 1;
            }
            else
            {
                partner = person - 1;
            }

            int person_zone = zone_Number[person];
            int partner_zone = zone_Number[partner];

            m[person_zone].push_back(partner_zone);
        }

        int groupCount = 0;
        vector<int> visited(coupleCount, 0);

        for (int i = 0; i < coupleCount; i++)
        {
            if (visited[i] == 0)
            {
                groupCount++;
                dfs(i, visited, m);
            }
        }

        return (coupleCount - groupCount);
    }
};

int main()
{
    return 0;
}