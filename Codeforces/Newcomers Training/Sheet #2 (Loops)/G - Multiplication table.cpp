#define _USE_MATH_DEFINES // Const(s) of math library, e.g: M_PI, M_E, M_LOG2E...
#include <bits/stdc++.h>
 
using namespace std;
 
// Macros
#define f(i,a,b) for(int i=a; i<b; i++)
#define f_(i,a,b) for(int i=a; i>b; i--)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define endl '\n'
 
// Debuging for variables
#define deb(x) cout << #x << " " << x << '\n';
 
// Shortcuts
typedef long ll;
typedef vector<double> vi;
typedef pair<double,double> pi;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
 
    /* write code here */
    int N;
    cin>>N;
    f(i,1,13) cout<<N<<" * "<<i<<" = "<<N*i<<endl;
 
}