Solved Daily challenge - Streak challenge (Consistency)

Time complexity : O(N)
Space complexity : O(1)
  
int uniqueOccur(vector<int> arr)
{
  //This is to find the unique elements in an array
  unordered_map<int,int> freq;
  for(int nums:arr)
    freq[num]++;
  
  //This is to count the number of occurence of unique elements
  unordered_set<int> freqS;
  for(auto[key,value] : freq)
    freqS.insert(value);
  
  // Here I check whether the all the occurrence of the unique elements are unique
  return freqS.size() == freq.size();
  
  
}
