#include <iostream>
#include <cstring>
using namespace std;

int fib(int n, int arr[])
{
    arr[0] = 0;
    arr[1] = 1;
    arr[2] = 1;
    
    for(int i = 3; i <= n ; i++)
    {
        arr[i] = arr[i-1] + arr[i-2] + arr[i-3];
    }
    
    return arr[n];
}

int main()
{
    int n;
    std::cin >> n;
    
    int arr[n+1]; 
    
    for (int i = 0; i <= n; ++i) {
        arr[i] = i;
    }
    
    cout << "T = " <<  fib(n, arr);
    return 0;
}