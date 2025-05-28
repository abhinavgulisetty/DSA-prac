#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/design-hashset/description/
class Node {
    public:
        int key,val;
        Node* next;
        Node(int k,int v,Node* n){
            key = k;
            val = v;
            next = n;
        }
};

class MyHashMap {
    vector<Node*> map;
    int hash(int key){
        return key % 10000;
    }
public:
    MyHashMap() {
        map.resize(10000);
        for(int i=0;i< 10000;i++){
            map[i] = new Node(-1,-1,nullptr);
        }
    }
    
    void put(int key, int value) {
        int hk = hash(key);
        Node* curr = map[hk];
        while(curr->next){
            if(curr->next->key == key){
                curr->next->val = value;
                return;
            }
            curr = curr->next;
        }   
        curr->next = new Node(key,value,nullptr);
    }
    
    int get(int key) {
        int hk = hash(key);
        Node* curr = map[hk];
        while(curr){
            if(curr->key == key)
                return curr->val;
            curr = curr->next;
        }
        return -1;
    }
    
    void remove(int key) {
        int hk = hash(key);
        Node* curr = map[hk];
        while(curr->next){
            if(curr->next->key == key){
                Node* temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
                return;
            }
            curr = curr->next;
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */