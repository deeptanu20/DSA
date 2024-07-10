// Tower of hanoi

class Solution
{
public:
    long long TOH(int n, int s, int d, int a)
    {
        // base case
        int count = 0;
        if (n == 1)
        {
            count++;
            return;
        }
        TOH(n - 1, s, a, d);
        count++;
        TOH(n - 1, a, d, s);
        return count;
    }
};