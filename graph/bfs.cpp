vector<int> bfs(int s,vector< vector<int> > G){
  int n=G.size();
  vector<int> dp(n,-1);
  queue<int> que;
  dp[s]=0;
  que.emplace(s);
  while(!que.empty()){
    int v=que.front();que.pop();
    for(int u:G[v]){
      if(~dp[u]) continue;
      dp[u]=dp[v]+1;
      que.emplace(u);
    }
  }
  return dp;
}
