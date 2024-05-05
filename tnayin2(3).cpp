#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int LCS (string A, string B)
{
    int n = A.size();
    int m = B.size();
    vector<vector<int>> DP(n+1, vector<int>(m+1, 0));
    
    if(n == 0 || m == 0)
    {
        return 0;
    }
    
    for(int a = 0; a <= n ; a++)
    {
        DP[a][0] = a;
    }
    for(int a = 0; a <= m ; a++)
    {
        DP[0][a] = a;
    }
   
    
    for(int i = 1; i <= n; ++i)
    {
        for(int j = 1; j <= m ; ++j)
        {
            
                if(A[i-1] == B[j-1])
                {
                    DP[i][j] = DP[i-1][j-1];
                }
                
                else
                {
                    DP[i][j] = 1 + min({DP[i][j-1], DP[i-1][j], DP[i-1][j-1]});
                }
                
        }
    }
    
    return DP[n][m];
}

int main()
{
    string word1, word2;
    cin >> word1 >> word2;
    cout << "Output: " << LCS(word1, word2) << endl;
    
    return 0;
}
