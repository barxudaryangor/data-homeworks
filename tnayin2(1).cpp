#include <iostream>
#include <unordered_map>
#include <string>

using namespace std;

int minimalSteps(string str1, string str2)
{
    unordered_map<char,int> string1, string2;
    
    for (char c : str1)
    {
       string1[c]++;
      
    }
    
    for(char c : str2)
    {
        string2[c]++;
    }
    
    int steps = 0;
    
    for(auto &pair : string1)
    {
        char c = pair.first;
        int difference = abs(string1[c] - string2[c]);
        steps+=difference;
        string2.erase(c);
    }
    
    for (auto& pair : string2)
    {
        steps += pair.second;
    }
    
    return steps;
    
}
int main()
{
    string str1, str2;
    cin >> str1>> str2;

    cout << minimalSteps(str1, str2);
    
    
    return 0;
}