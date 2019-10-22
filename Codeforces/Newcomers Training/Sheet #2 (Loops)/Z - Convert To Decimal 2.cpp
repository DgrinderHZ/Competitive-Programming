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
 
vi toBin(int n)
{
    vi res;
    while(n>0)
    {
        res.PB(n%2);
        n/=2;
    }
    return res;
}
 
int main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    //freopen("in.txt", "r", stdin);
    //freopen("out.txt", "w", stdout);
 
    /* code */
    int T;
    cin>>T;
    while(T--)
    {
        int N;
        vi res;
        int sum=0, F=1;
        cin>>N;
        res = toBin(N);
        f_(i,res.size()-1,0)
            if(res[i]==1)
            {
                sum+=F;
                F*=2;
            }
        cout<<sum<<endl;
    }
}