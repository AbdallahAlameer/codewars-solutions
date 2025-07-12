#include <vector>
using namespace std ;

vector <int>between(int start , int end )
{
  vector <int> nums ;
  for(int i = start ; i <= end ; i++)
  {
    nums.push_back(i);
  }
  return nums ; 
}
