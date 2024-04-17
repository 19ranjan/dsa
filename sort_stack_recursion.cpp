void sortS(stack<int>&s, int key){
  if(s.empty()||key>s.top()){
    s.push(top);
  }
  else{
    int top=s.top();
    s.pop();
    sortS(s,top);
  }
}
stack SortedStack(stack<int>s){
if(!s.empty()){
int top=s.top();
s.pop();
SortedStack(s);
sortS(s,top);
}
