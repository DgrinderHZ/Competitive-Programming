// this gives runtime error!!!!


#include <cmath>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
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
    freopen("input.txt", "r", stdin);
  int n, i = 0;

  while(1){
    cin >> n;
    if (n == 0) break;
    if(i > 1) cout << endl;
    i++;
    deque<int> dq;
    vi desc;
    loop(i, 1, n+1) dq.pb(i);

    while(dq.size() >= 2){
         desc.pb(dq.front()); dq.pop_front();
         int temp = dq.front(); dq.pop_front();
         dq.push_back(temp);
    }

    cout<<"Discarded cards: ";
    loop(i, 0, desc.size()-1) cout<< desc[i] <<", ";
    cout << desc.back() <<endl;
    cout<<"Remaining card: "<< dq.front();


  }

  return 0;
}
