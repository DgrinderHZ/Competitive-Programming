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
  string a;
  getline(cin, a,'\\');
  cout<<a;
  //think twice ;)
  /*
  while(getline(cin, a,' ')){
  	if( find( a.begin(),a.end(),'\\') != a.end()   ){
  		if(*(a.end()-1) == '\\')
  		   cout<<a.substr(0,a.size()-1)<<" ";
  		break;
	  }else{
	    //if(*(a.begin()) != '\\')
	  	   cout<<a<<" ";
	  	
	  }
  }*/
  
 
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
