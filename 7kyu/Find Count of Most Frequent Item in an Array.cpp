#include <vector>
using namespace std ;  

unsigned int most_frequent_item_count(const vector<int>& collection) {
  //your code here
  int result = 0 ; 
   for( int i = 0 ; i < collection.size() ; i++ )
   {
     int count = 0 ; 
     for( int j = 0 ; j < collection.size() ; j++ )
     {
       if(collection[i]==collection[j])
       {
         count++;
       }
     }
     if(count>result) result = count ;
   }
  return result;
}
