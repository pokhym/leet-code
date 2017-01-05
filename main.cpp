//
// Created by pokhym on 1/5/17.
//
#include <iostream>
#include <vector>
using namespace std;

#include "questions/1-TwoSum.h"

int main(){
#ifdef _1-TwoSum
    _1TwoSum functor;
    vector<int> nums={2,3,7,11,15};
    int target=9;
    vector<int> sol=functor.twoSum(nums, target);

    cout<<"We wanted a target of "<<target<<" obtained using the following numbers."<<endl;
    auto it=sol.begin();
    while(it!=sol.end()){
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
#endif
    return 0;
}

