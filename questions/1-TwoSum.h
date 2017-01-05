//
// Created by pokhym on 1/5/17.
//

#ifndef LEET_CODE_1_TWOSUM_H
#define LEET_CODE_1_TWOSUM_H
//Given an array of integers, return indices of the two numbers such that they add up to a specific target.
//
//You may assume that each input would have exactly one solution.
//
//Given nums = [2, 7, 11, 15], target = 9,
//
//        Because nums[0] + nums[1] = 2 + 7 = 9,
//return [0, 1].


#include <vector>

class _1TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //assuming we have an unordered vector we have to try every possible value
        //therefore we must use a double for loop to check

        int size=nums.size(); //get size of vector
        int first=0;
        int second=0;
        for(first=0; first<size; first++){
            //second for loop will iterate through values after first so we dont double check
            if( (first+1)!=(size-1)) { // make sure in range
                for (second=(first+1); second<size; second++){
                    if(nums[first]+nums[second]==target) //check sum if valid exit loop
                        break;
                }
            }
            if(nums[first]+nums[second]==target) //check sum if valid exit loop
                break;
        }
        //create new vector
        vector<int> solution;
        solution.push_back(nums[first]);
        solution.push_back(nums[second]);

        //return solution
        return solution;
    }
};
#endif //LEET_CODE_1_TWOSUM_H
