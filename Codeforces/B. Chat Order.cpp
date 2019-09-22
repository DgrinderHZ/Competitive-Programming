#include <bits/stdc++.h>
using namespace std;

//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sortad(a,n) sort(a,a+n),reverse(a,a+n)

#define F first
#define S second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for (int i = a; i < (b); i++)
#define prec setprecision(n)
#define endl '\n'

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef unsigned long long ull;
typedef long double ld;


int main() {
 #ifndef ONLINE_JUDGE
  	freopen ("input.txt","r",stdin);
  	//freopen ("output.txt","w",stdout);
  #endif
  
  int n;
  string s;
  stack<string> stk;
  unordered_set<string> uset;
  vector<string> v;
  
  cin>>n;
  while(n--){
  	cin>>s;
  	stk.push(s);
  }
  
  while(!stk.empty()){
  	string str = stk.top();
  	if(find(all(v),str) == v.end()) v.pb(str);
  	stk.pop();
  }
	
	for(auto it = v.begin(); it != v.end(); it++){
		cout<< *it <<endl;
	}
  return 0;
}
