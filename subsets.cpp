void solve(vector<int>&nums, vector<int>current, vector<vector<int>>result, int index){
  if(index==current.size()){ result.push_back(current);return; }
  current.push_back(nums[i]);
  solve(nums,current,result,index+1);
  current.pop_back;
  solve(nums,current,result,index+1);
}


vector<vector<int>> subset(vector<int> &nums){
  vector<vector<int>>result;
  vector<int>current;
  solve(nums,current, result,0);
  return result;
}
