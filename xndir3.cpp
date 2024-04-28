#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

vector<vector<int>> pascalTriangle(int rows)
{
    vector<vector<int>> triangle;
    
    triangle.push_back({1});
    
    for(int i = 1 ; i < rows ; ++i)
    {
        vector<int> row;
        
        row.push_back(1);
        
        for(int j = 1 ; j < i ; ++j)
        {
            row.push_back(triangle[i-1][j-1] + triangle[i-1][j]);
        }
        
        row.push_back(1);
        triangle.push_back(row);
    }
    return triangle;
}

void print(vector<vector<int>> triangle)
{
    for(auto& row : triangle)
    {
        for(int num : row)
        {
            cout << num << " ";
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    
    vector<vector<int>> pascal = pascalTriangle(n);
    print(pascal);
}