/*
    7 kyu

    42145 -> 54421

*/

#include <cinttypes>
#include <vector>

using namespace std;

uint64_t descendingOrder(uint64_t a)
{
  
  unsigned long long firstInt = a;

  vector<unsigned long long> vec;

  while(firstInt > 0){
      vec.push_back(firstInt % 10);
      firstInt = firstInt / 10;
  }

  for(int i = 0 ; i < vec.size(); i++){
      for(int j = 0; j < vec.size(); j++){
          if(vec[i] > vec[j]){
              int temp = vec[i];
              vec[i] = vec[j];
              vec[j] = temp;
          }
      }       
  }

  for(int i = 0; i < vec.size(); i++){
      firstInt = firstInt * 10 + vec[i];
  }
  return firstInt;
}



#include <cinttypes>
#include <string>
#include <algorithm>

uint64_t descendingOrder(uint64_t a)
{
  std::string s = std::to_string(a);
  std::sort(s.rbegin(), s.rend());
  return std::stoull(s);
}


#include <cinttypes>

uint64_t descendingOrder(uint64_t a)
{ 
  std::vector<int> c ;
  
  for(uint64_t b = a ; b > 0 ; b /=10) 
    c.push_back(b % 10);
  
  for(int i=0 ; i < c.size() ; i++)
    for(int j=i; j < c.size() ; j++) 
      if(c[i] < c[j]) 
        std::swap(c[i],c[j]);
  
  a=0;
  
  for(int i=0; i < c.size() ;i++)
    a = a*10 + c[i];
  
  return a;
}