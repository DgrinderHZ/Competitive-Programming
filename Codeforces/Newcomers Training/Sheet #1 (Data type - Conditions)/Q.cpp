#include <bits/stdc++.h>
using namespace std;
 
//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
//Macros
#define F first
#define S second
#define pb push_back
#define mp make_pair
#define loop(i,a,b) for (int i = a; i < b; i++)
 
int main ()
{
  //freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);
 
  /* Code here */
  ll a, b, c, d;
 
  cin>>a>>b>>c>>d;
  
  string best = "Amr";
  ll least = a;
  int eq = 1;
	if (b < least){
		best = "Waleed";
		least = b;
		eq = 1;
	}else if (b == least){
		eq += 1;
	}
 
	if (c < least){
		best = "Mustafa";
		least = c;
		eq = 1;
	}else if (c == least){
		eq += 1;
	}
 
 
	if (d < least){
		best = "Youssef";
		least = d;
		eq = 1;
	}else if (d == least){
		eq += 1;
	}
 
	if (eq >= 2)
    	cout<<"We are the best";
    else
    	cout<<best;
 
 
 
 
  return 0;
}
