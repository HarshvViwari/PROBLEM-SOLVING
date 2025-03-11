
#include <iostream>
using namespace std;

int main (){
  string s,rev;
  int len;
  cout << " enter the string to reverse " << endl;
  cin >> s;
  len = s.size();
  for (int i=len-1; i>=0; i--){
  rev = rev + s[i];
  }

  cout << rev;
return 0;
}