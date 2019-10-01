
#include <string>
#include <string.h>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()

#define loop(i,a,b) for (int i = a; i < (b); i++)
#define endl '\n'

bool preced(const string &a, const string &b){
    return strcmp(a.c_str(), b.c_str());
}

int main ()
{

  int n;

  while(cin >> n, n != 0){
    vector<string> a(n);
    loop(i, 0, n) {
     cin >> a[i];
    }
    sort(all(a), preced);
    for(auto item : a)
		cout<< item;
    cout << endl;
  }
  return 0;
}


