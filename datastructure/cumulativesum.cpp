template<typename T>
struct CumulativeSum{
  vector<T> sm;
  CumulativeSum(const vector<T> &as){
    int n = as.size();
    sm.resize(n + 1);
    sm[0] = T();
    for(int i = 0; i < n; i++)
      sm[i + 1] = sm[i] + as[i];
  }
  // [l, r)
  T query(int l,int r){return -sm[l] + sm[r];}
};

