
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
  	//freopen ("input.txt","r",stdin);
  	//freopen ("output.txt","w",stdout);
  #endif
  
  int t, n;
  cin>>t;
  queue<int> q;
  while(t--){
  	cin>>n;
  	if(n == 1){
  		cin>>n;
  		q.push(n);
	  }else if(n==2 && !q.empty()) q.pop();
	  else if(n==3){
	  	if(q.empty())
	  		cout<<"Empty!"<<endl;
	  	else
	  		cout<<q.front()<<endl;
	  }
  }
	  
	  
  
   return 0;
}
