class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int>ls;   // initializing the list of friends
        for(int i=0;i<n;i++)
        {
            ls.push_back(i); // storing each friend from 0 to n-1 in the list
        }

        int idx=0; // used for removing the friend who is out in the game
        while(ls.size()>1) // simulating the given process
        {
            idx=idx+(k-1);  // moving the idx to k place since idx is 0 based the k becomes k-1
            idx=idx%ls.size(); // taking care of out of bound by moduling it with no of friends in the game
            ls.erase(ls.begin()+idx); //removing the friend from the game who is lost
        }
        return ls[0]+1; // adding 1 because the friends are 0 based but answer should be in 1 based
    }
};
