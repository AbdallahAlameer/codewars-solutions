using namespace std ;
vector<int> digits(int n){
  //Code Here...
  string str = to_string(n) ; 
  vector<int> result ; 
  for (int i = 0 ; i < str.size() ; i++)
  {
    for(int j = i+1 ; j < str.size() ; j++)
    {
      result.push_back((str[i] - 48 ) + (str[j] - 48 ));
    }
  }
  return result ;
  
