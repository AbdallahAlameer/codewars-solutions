#include <vector>
#include <string>
using namespace std ; 

vector<int> solve(const vector<string>& arr) { 
  vector<int> result ;
  int count = 0 ; 
  for(string word : arr)
  {
    for(int i = 0 ; i <=word.length();i++)
    {
      if(word[i] == i + 97 || word[i] == i + 65)
      {
        count++;
      }
    }
    result.push_back(count);
    count = 0 ; // reset the count 
    
  }
    return result;
};
