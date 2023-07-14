//First creating the target sum as -nums[i] and then using two pointer approach to find other two elements

vector<vector<int>> threeSum(vector<int> &nums) 
{
    vector<vector<int>> triplets;

    sort(nums.begin(), nums.end());

    int n = nums.size();

    for (int i = 0; i < n - 2; i++) {
        if (i > 0 && nums[i] == nums[i - 1]) 
            continue;

        int start = i + 1;
        int end = n - 1;
        int target = -nums[i];

        while (start < end) 
		{
            int sum = nums[start] + nums[end];

            if (sum == target) 
			{
                triplets.push_back({nums[i], nums[start], nums[end]});

                while (start < end && nums[start] == nums[start + 1])
                    start++;
                while (start < end && nums[end] == nums[end - 1])
                    end--;

                start++;
                end--;
			}
			else if (sum < target)
                start++;
            else
                end--;
        }
    }

    return triplets;
}
