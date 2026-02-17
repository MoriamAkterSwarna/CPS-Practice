
// https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/?envType=study-plan-v2&envId=leetcode-75




class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

        vector<bool>maxCand;

        int maxCandies = *max_element(candies.begin(), candies.end());

        for(int i = 0; i <candies.size(); i++){
            if(candies[i] + extraCandies >= maxCandies){
                maxCand.push_back(true);
            }else {
                maxCand.push_back(false);
            }
        }
              return maxCand;
    }

       

};