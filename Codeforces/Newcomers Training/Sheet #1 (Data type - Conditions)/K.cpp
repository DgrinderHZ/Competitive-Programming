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
  
  string a,s,b;
  getline(cin,a,' ');
  getline(cin,s,' ');
  getline(cin,b);
  switch(s[0]){
  	case '<':
  	    if(atoi(a.c_str()) < atoi(b.c_str()))
  		     cout<<"Right";
  	    else
  	         cout<<"Wrong";
  		break;
  	case '=':
  		if(atoi(a.c_str() )== atoi(b.c_str()))
  		     cout<<"Right";
  	    else
  	         cout<<"Wrong";
  		break;
  	case '>':
  		if(atoi(a.c_str()) > atoi(b.c_str()))
  		     cout<<"Right";
  	    else
  	         cout<<"Wrong";
  		break;
  }
  //fclose (stdin);
  //fclose (stdout);
  return 0;
}
 
