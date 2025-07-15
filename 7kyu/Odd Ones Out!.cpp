using namespace std ; 
#include <vector>

std::vector<int> oddOnesOut(const std::vector<int>& numbers) {
  // your code here
  vector<int> result ;
  for(int num : numbers){
    if(count(numbers.begin(),numbers.end(),num) %2 == 0 )
    {
      result.push_back(num);
    }
  }
  return result ;
}
