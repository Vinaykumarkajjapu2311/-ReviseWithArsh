class Solution {
public:
    int minMoves2(vector<int>& arr) {
        sort(arr.begin(),arr.end()); //sort the elements of the array
        int n=arr.size();
        int middle=arr[n/2]; //find the middle element
        int ans=0;
        for(int i=0;i<n;i++)
        {
            ans+=abs(arr[i]-middle); //the decrement and increment means the abs difference between elements
        }
        return ans;
    }
};
