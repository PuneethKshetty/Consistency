Time complexity : O(N)
Space complexity : O(1)

int removeduplicates(vector<int> nums)
{
    // base condition
  if(nums.size() == 0)
    return 0;
  
  int i = 0;
  for(int j = 1; j < nums.size();j++)
  {
     if(nums[j] != nums[i])
     {
       i++;
       nums[i] = nums[j];
     }
  }
  return i+1;
}
