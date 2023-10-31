#include "algorithm.h" 
#include <iostream>

template <typename T> void templated_fn(T){};

int main() {
  Vector<int> v(4, 3);
  std::cout << "My vector is " << std::endl;
  v.print();

  std::cout << std::endl;
  std::cout << "The size is " << v.get_size() << std::endl;
  std::cout << "The capicity is " << v.get_capacity() << std::endl;

  v.push_back(7);
  v.push_back(1);

  std::cout << "after pushing my vector is" << std::endl;

  v.print();
  std::cout << std::endl;

  v.pop_back();
  std::cout << "after poping my vector is " << std::endl;

  v.print();
  std::cout << std::endl;
  std::cout << "First elem of my vector is " << v.front();
  std::cout << std::endl;
  std::cout << "Last elem of my vector is  " << v.back();
  std::cout << std::endl;
  std::cout << v.empty() << std::endl;

  for (Vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    std::cout << *it << " ";
  }
  std::cout << "\n";

  for (int elem : v) {
    std::cout << elem << " ";
  }

  std::cout << std::endl;

  Vector<int> v1(5, 3);
  try {
    std::cout << v1[11];
  } catch (const std::out_of_range &err) {
    std::cerr << "error = " << err.what() << std::endl;
  }

  Vector<int> vec(7, 6);
  vec.push_back(8);

  vec.find(vec.begin(), vec.end(), 8);

  Vector<int>::iterator it = vec.find(vec.begin(), vec.end(), 8);
  std::cout << *it << std::endl;

  Vector<int> vect(4, 3);
  vect.push_back(8);
  vect.push_back(12);
  vect.push_back(3);
  vect.push_back(13);

  sort(vect.begin(), vect.end());
  for (int elem : vect)
    std::cout << elem << " ";
  std::cout << "\n";

  Vector<int> v2 = {14, 45, 0, -4, 10, 3, 2, 5};
  std::cout << "v2 vector  -";
  for (int elem : v2) {
    std::cout << elem << " ";
  }
  std::cout << std::endl;
  sort(v2.begin(), v2.end());
  std::cout << "v2 Vector after sorting - ";
  for (int elem : v2)
    std::cout << elem << " ";

  std::cout << "\n";

  Vector<int> v3 = {12, 34, 56};
  auto max = maxValue(v3.begin(), v3.end());
  std::cout << "max value of v3 vector is - " << max;

  std::cout << std::endl;
  std::cout << std::endl;

  std::cout << std::endl;
  Vector<int> v4(6, 3);
  v4.push_back(5);
  v4.push_back(5);
  std::cout << maxValue(v4.begin(), v4.end()) << std::endl;
  std::cout<< "Number of occurences of 5 in v4: " << count(v4.begin(),v4.end(),5);

  Vector<int> v5={1,3,4};
  std::cout << std::endl;

  std::cout << "The vec v5: ";
  for (int elem : v5)
    std::cout << elem << " ";
  int a = count(v5.begin(),v5.end(),1); 
  std::cout << std::endl << "Number of occurences of 1 in v5: " << a <<std::endl;


  return 0;
} 