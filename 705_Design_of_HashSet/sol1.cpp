#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/design-hashset/description/
class MyHashSet {
    public:
        int n = 10000;
        vector<vector<int>> arr;
        MyHashSet() {
            arr.resize(n);
        }
        
        void add(int key) {
            int idx = key % n;
            for(int i : arr[idx]) {
                if(i == key) return;
            }
            arr[idx].push_back(key);
        }
        
        void remove(int key) {
            int idx = key % n;
            for(int i=0;i < arr[idx].size();i++){
                if(arr[idx][i] == key){
                    arr[idx].erase(arr[idx].begin()+i);
                    return;
                }
            }
        }
        
        bool contains(int key) {
            int idx = key % n;
            for(int i : arr[idx]){
                if(i == key) 
                    return true;
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
// Time Complexity: O(1) for add, remove, and contains operations on average. In the worst case, it can be O(n) if all keys hash to the same index.
// Space Complexity: O(n) where n is the number of elements in the hash set. The space used is proportional to the number of elements stored in the hash set.
// Note: The hash set uses separate chaining to handle collisions, where each index in the array contains a vector of integers.
// The add operation checks if the key already exists before adding it to avoid duplicates.
// The remove operation searches for the key in the vector at the hashed index and removes it if found.
// The contains operation searches for the key in the vector at the hashed index and returns true if found.
