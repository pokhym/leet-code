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
#include <iostream>
using namespace std;

class _1TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size=nums.size();
        int first=0, second=0;
        for(first=0; first<size-1; first++){
                for(second=(first+1); second<size; second++){
                    if(nums[first]+nums[second]==target){
                        vector<int> solution;
                        solution.push_back(first); solution.push_back(second);
                        return solution;
                    }
                }
        }
        return vector<int>();
    }
};
#endif //LEET_CODE_1_TWOSUM_H
