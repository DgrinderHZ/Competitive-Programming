#define _USE_MATH_DEFINES // Const(s) of math library, e.g: M_PI, M_E, M_LOG2E...
#include <bits/stdc++.h>
 
using namespace std;
 
// Macros
#define f(i,a,b) for(int i=a; i<b; i++)
#define f_(i,a,b) for(int i=a; i>=b; i--)
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define endl '\n'
 
// Debuging for variables
#define deb(x) cout << #x << " " << x << '\n';
 
// Shortcuts
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef pair<int,int> pi;
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
 
    /* code */
    int N,a=0,b=1;
    cin>>N;
    if(N==1) cout<<0;
    else
    {
    cout<<a<<" "<<b<<" ";
    f(i,0,N-2)
    {
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    }
}