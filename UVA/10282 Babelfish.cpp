#include <string>

#include <iostream>
#include <map>
using namespace std;


int main ()
{
  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
  #endif // ONLINE_JUDGE

  string s, d, t;
  map<string, string> m;
  while(getline(cin, t), t != ""){

    int p = t.find(" ");
    s = t.substr(0, p); d = t.substr(p+1);
    m[d] = s;
  }

  while(getline(cin, t)){
    if(m.find(t) != m.end()) cout << m[t] <<endl;
    else cout << "eh" <<endl;
  }
  return 0;
}


