//
// Created by pokhym on 1/5/17.
//
#include <iostream>
#include <vector>
using namespace std;

#include "questions/1-TwoSum.h"
#include "questions/2-AddTwoNumbers.h"

int main(){
#ifdef TwoSum
    _1TwoSum functor;
    vector<int> nums={217,231,523,52,547,243,648,509,415,149,689,710,265,187,370,56,977,182,400,329,471,805,955,989,255,766,38,566,79,843,295,229,988,108,781,619,704,542,335,307,359,907,727,959,161,699,123,650,147,459,657,188,304,268,405,685,620,721,351,570,899,60,388,771,24,659,425,440,508,373,32,645,409,272,356,175,533,740,370,152,34,510,745,251,227,494,258,527,817,773,178,194,860,387,627,851,449,736,15,212,529,950,316,28,65,484,968,63,4,643,795,669,203,677,139,636,289,555,430,849,150,493,301,377,240,873,965,441,230,349,447,470};
    int target=718;
    vector<int> sol=functor.twoSum(nums, target);

    cout<<"We wanted a target of "<<target<<" obtained using the following indexes of nums."<<endl;
    auto it=sol.begin();
    int first=-4;
    int second=-3;
    while(it!=sol.end()){
        cout<<*it<<" ";
        if(second==-3 && first==-4){
            first=*it;
        }
        if(first>=0){
            second=*it;
        }
        it++;
    }
    cout<<endl;
    cout<<nums[first]<<"+"<<nums[second]<<"="<<nums[first]+nums[second] <<endl;
#endif
    _2AddTwoNumbers functor;
    ListNode ones(5);
    ListNode tens(4);
    ListNode hundreds(3);
    ones.next=&tens;
    tens.next=&hundreds;
    hundreds.next=NULL;
    ListNode oness(4);
    ListNode tenss(3);
    ListNode hundredss(2);
    oness.next=&tenss;
    tenss.next=&hundredss;
    hundredss.next=NULL;

    ListNode *sol=functor.addTwoNumbers(&ones, &oness);

    while(sol!=NULL){
        cout<<sol->val;
        sol=sol->next;
    }

    return 0;
}

