#include<bits/stdc++.h>
using namespace std;

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        stack<int> st1;
        stack<int> st2;
        Node* head=first;
        while(head!=NULL){
            st1.push(head->data);
            head=head->next;
        }
        
          head=second;
        while(head!=NULL){
            st2.push(head->data);
            head=head->next;
        }
        int carry=0;
        stack<int> st3;
        while(!st1.empty() && !st2.empty()){
            int dig1=st1.top();
            st1.pop();
            int dig2=st2.top();
            st2.pop();
            int sum=dig1+dig2+carry;
            carry=sum/10;
            sum=sum%10;
            st3.push(sum);
            
        }
        while(!st1.empty()){
            int dig3=st1.top();
            st1.pop();
            dig3=dig3+carry;
            carry=dig3/10;
            dig3=dig3%10;
            st3.push(dig3);
            }
        while(!st2.empty()){
            int dig4=st2.top();
            st2.pop();
            dig4=dig4+carry;
            carry=dig4/10;
            dig4=dig4%10;
            st3.push(dig4);
        }
        
        Node* start=NULL;
        while(!st3.empty()){
            int tomp=st3.top();
            st3.pop();
            
            if(start==NULL){
                start=new Node(tomp);
            }
            else{
                Node* temp=start;
                while(temp->next!=NULL){
                    temp=temp->next;
                }
                
                temp->next=new Node(tomp);
            }
        }
        
        
            
        return start;
        
        
    }
};
