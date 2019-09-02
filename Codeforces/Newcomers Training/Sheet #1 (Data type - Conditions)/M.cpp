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
  
  string a,b,c,d;
  getline(cin,a,' ');
  getline(cin,b);
  getline(cin,c,' ');
  getline(cin,d);
  if(b == d){
  	cout<<"ARE Brothers";
  }else{
  	cout<<"NOT";
  }
  
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
