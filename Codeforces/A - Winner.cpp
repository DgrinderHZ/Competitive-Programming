// https://codeforces.com/contest/2/problem/A
// fixeded 'at least' bug

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

typedef struct{
	string nm;
	int scr;
}Round;

int main() {
 #ifndef ONLINE_JUDGE
  	freopen ("input.txt","r",stdin);
  	//freopen ("output.txt","w",stdout);
  #endif
  
  int n;
  int m = -1002;
  vector<Round> record;
  map<string, int> roundw, final;
  Round t;
  cin>> n; 
  while(n--){
  	
  	cin>> t.nm >> t.scr; 
  	roundw[t.nm] += t.scr;
  	record.pb(t);
  	
  }
  // find the max
  for(auto it = roundw.begin(); it != roundw.end(); it++){
  	pair<string, int> temp = *it;
  	if(roundw[temp.F] > m){
  		m = roundw[temp.F];
	  }
  }
  // find the winner
  for(auto rnd: record){
  	
  	final[rnd.nm] += rnd.scr;
  	// the bag: gathered at least m points (>= m)
  	if(final[rnd.nm] >= m && roundw[rnd.nm] == m){
  		cout<< rnd.nm;
  		return 0;
	}
  }
}
