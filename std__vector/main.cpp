#include <iostream>
#include <vector>
#include <vector.h>


int main(){
std::vector<char> v;
int n;
std::cin>>n;
char a;
for(int i = 0; i < n; ++i)
{
    std::cin>> a;
    v.push_back(a);
}
int temp = 0;
for(int i = 0; i <n/2; ++i)
{
    if(v[i] == v[n-i -1])
    {
       temp++; 
    }
}
if(temp == n/2){
std::cout<<"string is polidrom";
return true;
}
else 
{
    std::cout<<"string is not polidrom";
    return false;
}
}