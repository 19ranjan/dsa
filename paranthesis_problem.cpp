void solve(int N, vector<string>current, vector<string>&result,int open,int close){
  if(current.length()==N){result.push_back(current);return;}
  if(open<N){
    solve(N,current+'(',open+1,close);
  }
  if(close<open){
    solve(N,current+')',open+close+1);
  }
    
}

vector<string> paranthesis(int N){
  vector<string>result;
  solve(N, "", result,0,0);
  return result;
}
