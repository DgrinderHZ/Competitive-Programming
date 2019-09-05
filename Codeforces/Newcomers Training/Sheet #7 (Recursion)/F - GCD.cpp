#include <bits/stdc++.h>
 
 using namespace  std;
/* 
 // TLE :)
 int gcd(int a,int b){
 	if(a == 0) return b;
 	if(b == 0) return a;
 	if(a > b)  return gcd(a % b, b);
 	else       return gcd(b % a, a);
 }*/
 typedef long long ll;
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
 int main(int argc, char const *argv[])
 {
 	ll a,b;
 	cin>>a>>b;
 	//cout<< __gcd(a,b); // <algorithm>
 	cout<<abs(gcd(a,b));
 	return 0;
 }
