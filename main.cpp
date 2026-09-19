

#include <string>
#include <iostream>
using namespace std;
int main() {
  string str="orf";
  size_t size=str.size();
  int count=0;
  int result=-2;
  for (int i=0;i<size && count<2;i++){
    if (str[i]=='f'){
      count++;
      result=i;
    }
  }
  if (count==0)
    result=-2;
  else if(count==1)
  result=-1;
  cout << result;
  return 0;
 
}