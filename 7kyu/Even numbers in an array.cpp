#include <vector>
using namespace std ; 
vector<int> evenNumbers(vector<int> arr, int n) {
  //your code here
  vector<int> evens ;
  for(int i = 0 ; i < arr.size() ; i++)
  {
    if(arr[i] % 2 == 0 )
    {
      evens.push_back(arr[i]);
    }
  }
  vector<int> result (evens.end() - n , evens.end()) ;
  return result ; 
}
