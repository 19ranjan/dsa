void get_string_help(int N, string current, vector<string>&result){
  if(N==current.length()){
    result.push_back(current);
    return;
}
get_string_help(N,current+'0',result);
if(current.length()==0||current.back()=='0'){
  get_string_help(N,current+'1', result);
}

}
vector<string>generate_string(int N){
  vector<string>result;
  get_string_help(N,"",result);
  return result;
}
