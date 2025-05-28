#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/design-hashset/description/
class LinkedList{
    public:
        int val;
        LinkedList* next;
        LinkedList() {
            this->val = 0;
            next = nullptr;
        }
        LinkedList(int val){
            this->val = val;
            next = nullptr;
        }
    };
class MyHashSet {
    LinkedList* head;
public:
    MyHashSet() {
        head = new LinkedList(-1);
    }
    
    void add(int key) {
        LinkedList* curr = head;
        while(curr->next != nullptr){
            if(curr->next->val == key) 
                return;
            curr = curr->next;
        }
        curr->next = new LinkedList(key);
    }
    
    void remove(int key) {
     LinkedList* curr = head;
     while(curr->next != nullptr){
        if(curr->next->val == key){
            curr->next = curr->next->next;
            break;
        }
        curr = curr->next;
     }   
    }
    
    bool contains(int key) {
        LinkedList* curr = head;
        while(curr->next != nullptr){
            if(curr->next->val == key)
                return true;
            curr = curr->next;
        }
        return false;
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */