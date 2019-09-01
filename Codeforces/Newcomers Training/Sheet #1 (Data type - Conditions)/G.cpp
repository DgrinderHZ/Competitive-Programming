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
  string s;
 
  cin>>s;
  
  if( (s[0]-48)  % 2 == 0 ) {
  	cout<<"EVEN";
  }else{
  	cout<<"ODD";
  }
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
