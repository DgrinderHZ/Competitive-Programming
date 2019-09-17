// http://codeforces.com/problemset/problem/368/B
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
#define loop(i,a,b) for (int i = a; i < b; i++)
#define prec setprecision(n)

//Short code
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
typedef unsigned long long ull;
typedef long double ld;

int getValue(char s, string& source) {
    for(int i = 0; i < source.size(); i++) {
        if(source[i] == s) {
            return i;
        }
    }

    return 0;
}


int main ()
{
  freopen ("input.txt","r",stdin);
  //freopen ("output.txt","w",stdout);

    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    
    int n, m, j=1, i, l;
    cin>>n >>m;
    
    vi a;
    while(n--){
    	
    	cin>>i; a.pb(i);
    	
	}
	
	

	while(m--){
		vi pref(a.size()+1, 0), check(100003, 0);
		
    	cin>>l;
    	for(int k=l-1; k < a.size(); k++){
    		
			if(check[a[k]] == 0){
	    		pref[k+1] = pref[k] + 1;
	    			
			}else{
				pref[k+1] = pref[k];
		    		
			}
	    	check[a[k]] = 1;
		}
    	cout<<pref.back()-pref[l-1]<<endl;
	}
	

  //fclose (stdin);
  //fclose (stdout);
  return 0;
}

