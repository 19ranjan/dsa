void insert_bottom(stack<int>&s, int top){
  if(s.empty()){
    s.push(top);
  }
  else{
    int key=s.top();
    s.pop();
    insert_bottom(s,top);
    s.push(key);
  }
}


void reverse(stack<int>&s){
  if(s.empty()){
    return;}
  else{
    int top=s.top();
    s.pop();
    reverse(s);
    insert_bottom(s,top);
  }
}
