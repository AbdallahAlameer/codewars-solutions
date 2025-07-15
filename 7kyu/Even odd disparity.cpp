
using namespace std ;
int solve(vector<string>v){
int result = 0 ;
for(string str : v )
{
  if(isdigit(str.front()))
  {if(stoi(str) % 2 == 0 )
  {
    result++ ;
  }
  else  result-- ; 
  }
}
  return result ;
}
