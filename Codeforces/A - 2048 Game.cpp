//https://codeforces.com/contest/1221/problem/A

#include <bits/stdc++.h>
using namespace std;

//Macros
#define PI 3.14159265359
#define all(v) v.begin(),v.end()
#define sortva(v) sort(all(v))
#define sortvd(v) sort(v.rbegin(),v.rend())
#define sortaa(a,n) sort(a,a+n)
#define sortad(a,n) sort(a,a+n),reverse(a,a+n)
#define sfi1(v) scanf("%d",&v)
#define sfi2(v1,v2) scanf("%d %d",&v1,&v2)
#define sfi3(v1,v2,v3) scanf("%d %d %d",&v1,&v2,&v3)
#define sfll1(v) scanf("%I64d",&v);
#define sfll2(v1,v2) scanf("%I64d %I64d",&v1,&v2)
#define sfll3(v1,v2,v3) scanf("%I64d %I64d %I64d",&v1,&v2,&v3)
#define sfstr(v) scanf("%s", v);
#define sz(v) (int)v.size()
#define ndl puts("")
#define SS stringstream
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


int main ()
{
  #ifndef ONLINE_JUDGE
  	freopen ("input.txt","r",stdin);
  	//freopen ("output.txt","w",stdout);
  #endif
  
    
    int q, n;
    ll a, ans;
    cin>>q;
	
    while(q--){
    	
    	ans = 0;
    	
    	cin>> n;
    	vi v(n);
    	
    	loop(i, 0, n){
    		cin>> v[i];
    		if(v[i] == 2048){
    			ans = 1;
			}
		}
		
		if(ans){
			cout<<"yes\n"; continue;
		}
    	
    	sort(all(v));
    	
    	while(1){
    		int toNext = 0;
	    	vi temp;
	    	loop(i, 0, v.size()){
	    		if(i+1 < v.size() && v[i] == v[i+1]){
	    			temp.pb(v[i]*2);
	    			toNext = 1;
	    			if(temp.back() == 2048){
		    			ans = 1; break;
					}
					i++;
				}else{
					temp.pb(v[i]);
				}  
			}
	    	
	    	if(ans){
				cout<<"yes\n"; break;
			}
			
			
			v.clear();
			sort(all(temp));
			for(int cpy: temp) v.pb(cpy);
			
			if(!toNext) {
				// all is distinct
				break;
			}
		}
		
		if(!ans){
				cout<<"no\n";
			}	
    	
	}
  //fclose (stdin);
  //fclose (stdout);
}
