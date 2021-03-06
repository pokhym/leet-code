//
// Created by pokhym on 1/5/17.
//

#ifndef LEET_CODE_2_ADDTWONUMBERS_H
#define LEET_CODE_2_ADDTWONUMBERS_H

#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
using namespace std;
//You are given two non-empty linked lists representing two non-negative integers.
//The digits are stored in reverse order and each of their nodes contain a single digit.
//Add the two numbers and return it as a linked list.
//
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.
//
//Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
//Output: 7 -> 0 -> 8

//Definition for singly-linked list.
 struct ListNode {
     int val;
     ListNode *next;
     ListNode(int x) : val(x), next(NULL) {}
 };

class _2AddTwoNumbers {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        int val1=ll2num(l1); int val2=ll2num(l2);
//        int sol=val1+val2;
//        cout<<"sum "<<sol<<endl;
//        ListNode *sol_LL=num2ll(sol);

        //perform normal addition and then cycle through the linked list
        //eg 2->4->3
        //+  5->6->4
        //   7 no carry
        //   2->4->3
        //+  5->6->4
        //   7  0 carry 1
        //   2->4->3
        //+  5->6->4
        //   7  0  7+1carry

        //create LL for output
        ListNode *sol=new ListNode(0);
        //do this using a loop while the head pointer !=NULL
        //need to make sure if one reachs NULL before the other assume 0
        int carry=0;
        while(l1!=NULL || l2!=NULL){
            int dig_tot=0; //store sum of current digit
            int val1=0, val2=0; //numbers of l1,l2 current digit
            //if l1!=NULL
            if(l1){
                val1=l1->val+carry;
                l1=l1->next;
            }
            else
                val1=0;
            //if l2!=NULL
            if(l2){
                val2=l2->val;
                l2=l2->next;
            }
            else
                val2=0;
            //compute that digit sum
            dig_tot=val1+val2;
            //if > 10 we have to have a carry term
            carry=dig_tot%10;
        }
        return sol;
    }

    ListNode * num2ll(int sol){
        //convert to string extract digits and recreate LL
//        string str=std::to_string(sol); //convert to string
//        size_t str_len=str.length(); //get length of LL
//        str_len--; //decrement to fit indices
//
//        //recreate LL
//        //grab first value
//        int val=stringdigit(str, size_t(0));
//        cout<<"val"<<val<<endl;
//        ListNode *head=new ListNode(val); //create LL node
//        str_len--; //decrement counter
//        ListNode *temp=head;
//        //loop to create LL
//        while(str_len>=0){
//            ListNode *newnode=new ListNode(stringdigit(str, str_len));
//            temp->next=newnode;
//            temp=newnode;
//            str_len--;
//        }
//        ListNode *asdf=head;
//        while(asdf!=NULL){
//            cout<<asdf->val;
//            asdf=asdf->next;
//        }
//        cout<<endl;
        ListNode *head=new ListNode(0);
        return head;
    }

    int stringdigit(string str, size_t idx){
        const char *digit=&str[idx];
        int dig=0;//stoi(digit);
        return dig;
    }

    int ll2num(ListNode *l){
        //counter for number of digits
        int numDigits=0;
        //vector for storing digits
        vector<int> storage;
        //while pointer is not NULL get #digits
        ListNode *temp=l;
        while(temp!=NULL){
            //update number of digits
            numDigits++;
            //use stack to reverse
            storage.push_back(temp->val);
            temp=temp->next;
        }
        //rebuild number in base 10
        int val=0;
        for(int i=(storage.size()-1); i>=0; --i){
            int digit=storage[i];
            val=val+digit*std::pow(10,i);
        }
        cout<<"ll to num "<<val<<endl;
        return val;
    }
};
#endif //LEET_CODE_2_ADDTWONUMBERS_H
