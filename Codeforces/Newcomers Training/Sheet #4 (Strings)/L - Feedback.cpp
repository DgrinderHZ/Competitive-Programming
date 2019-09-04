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
  
  int n; cin>>n; cin.ignore();
  while(n--){
    string a;
  	getline(cin, a);
  	if(a.find("010")!=string::npos || a.find("101")!=string::npos)
  	  cout<<"Good\n";
  	else
  	  cout<<"Bad\n";
  }
  
  
  
  
 
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
