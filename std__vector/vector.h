#include <iostream>


template <typename T>
class Vector
{
private:

int size;
int capacity;
T*arr;
public:
  Vector();
  Vector(int _size);
  Vector(int _size, T el);
  ~Vector();
  T at( int index);
  T get_size();
  T get_capacity();
  void push_back(T el);
  void pop_back();
  T front();
  T back();
  void sort() ;
  void insert(int index, T el); 
  bool empty();
  void print();
Vector (const Vector& _vec){
   if(capacity == size){
     capacity = size * 2;
   }
  size = _vec.size;
  capacity = _vec.capacity;
  for(int i = 0; i < _vec.size; ++i)
    {
      arr[i] = _vec.arr[i];
    }
}

};

template<typename T>
Vector<T>::Vector(){
size = 0;
capacity =1;
arr = new T[capacity];
}
template<typename T>
Vector<T>::Vector( int _size){
  size = _size;
capacity = size * 2;
arr = new T[capacity];
  for(int i = 0; i < size; ++i)
    {
      arr[i] = 0;
    }
}
template<typename T>
Vector<T>::Vector( int _size, T el){
  size = _size;
capacity = size * 2;
arr = new T[capacity];
  for(int i = 0; i < size; ++i)
    {
      arr[i] = el;
    }
}
template <class T>
Vector<T>::~Vector(){
  delete[] arr;
}
template<typename T>
 T Vector<T>::at ( int index){
   return arr[index];
 }
template<typename T>
 T Vector<T>::get_size ( ){
   return size;
 }
template<typename T>
 T Vector<T>::get_capacity ( ){
   return capacity;
 }
template<typename T>
 void Vector<T>::push_back (T el ){
   if(capacity == size){
     capacity = size * 2;
     T* new_arr = new T[capacity];
   
  
     for(int i = 0; i < size ; ++size){
        new_arr[i] = arr[i];
     }
      delete [] arr;
     arr = new_arr;
   }
  arr[size] = el;
  size++;
  
  }
   
template<typename T>
void Vector<T>::pop_back( ){
--size;
}
template<typename T>
 T Vector<T>::front(){
   return arr[0];
 }
template<typename T>
 T Vector<T>::back(){
   return arr[size -1];
 }
template<typename T>
void Vector<T>::sort()
{
    T temp;
   for(int i = 0; i < size -1 ; i++)
   {
       for(int j = 1; j <size - i-1;++j )
       {
           if(arr[j] > arr[j + 1])
           {
               temp = arr[j];
               arr[j]= arr[j+1];
               arr[j +1] = temp;
           }
       }
   }
   for(int i = 0; i < size ; i++)
   {
       std::cout<<arr[i]<<" ";
}
}
template<typename T>
void Vector<T>::insert(int index, T el)
{
   if(capacity == size){
     capacity = size * 2;
   }
   T* new_arr = new T[size + 1];
  size +=1;
  for(int i = 0; i < size ; ++size){
    T temp = arr[i];
    if(i == index)
    {
      new_arr[i] == el;
      ++i;
      
    }
    new_arr[i] = temp;
  }
   delete [] arr;
   for(int i = 0; i < size ; i++)
   {
       std::cout<<new_arr[i]<<" ";
}

}
template<typename T>
bool Vector<T>::empty()
{
  return (size == 0) ? true : false ;
}
template<typename T>
void  Vector<T>::print()
{
  for(int i = 0; i < size ; i++)
   {
       std::cout<<arr[i]<<" ";
   }
  std::cout<<"\n";
  
}

