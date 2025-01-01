class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        int n=nums.size(); //size of the array
        sort(nums.begin(),nums.end());  //sort the array
        int i=1; 
        int j=n-1;
        vector<int>temp(n);
        while(i<n)
        {
            temp[i]=nums[j];
            j--;
            i+=2;
        }

        i=0;
        while(i<n)
        {
            temp[i]=nums[j];
            j--;
            i+=2;
        }

        for(int i=0;i<n;i++)
        {
            nums[i]=temp[i];
        }
    }
};
