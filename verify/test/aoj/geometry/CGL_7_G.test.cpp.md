---
layout: default
---

<!-- mathjax config similar to math.stackexchange -->
<script type="text/javascript" async
  src="https://cdnjs.cloudflare.com/ajax/libs/mathjax/2.7.5/MathJax.js?config=TeX-MML-AM_CHTML">
</script>
<script type="text/x-mathjax-config">
  MathJax.Hub.Config({
    TeX: { equationNumbers: { autoNumber: "AMS" }},
    tex2jax: {
      inlineMath: [ ['$','$'] ],
      processEscapes: true
    },
    "HTML-CSS": { matchFontHeight: false },
    displayAlign: "left",
    displayIndent: "2em"
  });
</script>

<script type="text/javascript" src="https://cdnjs.cloudflare.com/ajax/libs/jquery/3.4.1/jquery.min.js"></script>
<script src="https://cdn.jsdelivr.net/npm/jquery-balloon-js@1.1.2/jquery.balloon.min.js" integrity="sha256-ZEYs9VrgAeNuPvs15E39OsyOJaIkXEEt10fzxJ20+2I=" crossorigin="anonymous"></script>
<script type="text/javascript" src="../../../../assets/js/copy-button.js"></script>
<link rel="stylesheet" href="../../../../assets/css/copy-button.css" />


# :warning: test/aoj/geometry/CGL_7_G.test.cpp
<a href="../../../../index.html">Back to top page</a>

* <a href="{{ site.github.repository_url }}/blob/master/test/aoj/geometry/CGL_7_G.test.cpp">View this file on GitHub</a>
    - Last commit date: 2019-11-13 14:47:25 +0900


* see: <a href="http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_G">http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_G</a>


## Depends On
* :warning: <a href="../../../../library/geometry/geometry.cpp.html">geometry/geometry.cpp</a>


## Code
{% raw %}
```cpp
#define PROBLEM "http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=CGL_7_G"
#include<bits/stdc++.h>
using namespace std;

#define call_from_test
#include "../../../geometry/geometry.cpp"
#undef call_from_test

#define ERROR "0.00001"

//Common Tangent
signed main(){
  Circle c1,c2;
  cin>>c1>>c2;
  auto ls=tangent(c1,c2);
  Polygon ps;
  for(auto l:ls) ps.emplace_back(getCrossPointCL(c1,l)[0]);
  sort(ps.begin(),ps.end());
  for(auto p:ps) cout<<p<<endl;
  return 0;
}

```
{% endraw %}

<a href="../../../../index.html">Back to top page</a>
