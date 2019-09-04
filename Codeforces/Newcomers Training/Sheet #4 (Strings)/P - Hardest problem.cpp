#include<iostream>
#include <string>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int main()
{
   string s,x,y;
   string a,n;
 
   cin >> s;
   a = s;
   for(int i=1;i<s.size();i++)
   {
       x = s.substr(0,i);
       y = s.substr(i,s.size()-1);
 
       sort(x.begin(),x.end());
       sort(y.begin(),y.end());
       n = x + y;
       if(a > n)
            a = n;
   }
   
 
   cout <<a <<endl;
 
	return 0;
}
