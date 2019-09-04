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
  string a,b;
  getline(cin, a);
  getline(cin, b);
  
  cout<<a.size()<<" "<< b.size()<<"\n"
      << a+b <<"\n";
  char c = a[0];
  a[0] = b[0];
  b[0] = c;
  cout<<a<<" "<< b;
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
  
