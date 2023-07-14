//Return the indices of the elements adding upto the target in the vector A.

pair<int,int> twoSum(vector<int> &nums, int target) 
{
	unordered_map<int,int> numMap;
	pair <int,int> answer;
	for (int i = 0; i < nums.size(); i++) 
	{
        int complement = target - nums[i];

        if (numMap.find(complement) != numMap.end())
		{
            answer.first = numMap[complement];
            answer.second = i;
            break;
        }
		numMap[nums[i]] = i;
	}
	return answer;
}
