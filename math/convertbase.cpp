#include<bits/stdc++.h>
using namespace std;
using Int = long long;
template<typename T1,typename T2> inline void chmin(T1 &a,T2 b){if(a>b) a=b;}
template<typename T1,typename T2> inline void chmax(T1 &a,T2 b){if(a<b) a=b;}
//BEGIN CUT HERE
template<typename T>
vector<T> convert_base(T x,T b){
  vector<T> res;
  T t=1,k=abs(b);
  while(x){
    res.emplace_back((x*t)%k);
    if(res.back()<0) res.back()+=k;
    x-=res.back()*t;
    x/=k;
    t*=b/k;
  }
  if(res.empty()) res.emplace_back(0);
  reverse(res.begin(),res.end());
  return res;
}
//END CUT HERE

//INSERT ABOVE HERE
signed ABC105_C(){
  long long p;
  cin>>p;
  auto ans=convert_base(p,-2LL);
  for(auto x:ans) cout<<x;
  cout<<endl;
  return 0;
}
/*
  verified on 2019/03/31
  https://atcoder.jp/contests/abc105/tasks/abc105_c
*/

signed AOJ_0233(){
  long long p;
  while(cin>>p,p){    
    auto ans=convert_base(p,-10LL);
    for(auto x:ans) cout<<x;
    cout<<endl;
  }
  return 0;
}
/*
  verified on 2019/03/31
  http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0233
*/


signed main(){
  //ABC105_C();
  //AOJ_0233();
  return 0;
}