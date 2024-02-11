class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    int n=nums.size();
        vector<int> st;
        int k=target;
         for (int i = 0; i < n; i++)
    {
        int p=nums[i];
        for (int j = i + 1; j < n; j++)
        {
            if (nums[j]== k - p)
            {
                st.push_back(i);
                st.push_back(j);
            }
        }
    }
        return st;
    }
};
