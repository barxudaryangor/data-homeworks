#include <iostream>
#include <vector>

int cut_rod_dp(std::vector<int> weights, int n, std::vector<int> arr) {
    int q = 0;
    int t;
    if (n == 0) 
    {
        q = 0;
    } 
    else 
    {
        q = -1;
    

    for (int i = 1; i <= n; ++i) 
    {
        if (arr[n - i] != -1) 
        {
            int t = arr[n - i];
        } 
        else 
        {
            t = cut_rod_dp(weights, n - i, arr);
            q = std::max(q, weights[i] + t);
        }
        
        arr[n] = q;
    }
    }
    return q; 
}

int cut_rod(std::vector<int> weights, int n) 
{
    std::vector<int> arr(n+1);
    for (int i = 0; i <= n; ++i) 
    {
        arr[i] = -1;
    }
    return cut_rod_dp(weights, n, arr);
}

int main() {
    std::vector<int> weights = {0, 1, 5, 8, 9, 10, 17, 17, 20, 24, 30};
    
    int n = weights.size();
    std::cout << "Maximum obtainable value is: " << cut_rod(weights, 5) << std::endl;
    return 0;
}