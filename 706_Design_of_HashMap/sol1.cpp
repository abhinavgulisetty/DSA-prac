#include <bits/stdc++.h>
using namespace std;
// https://leetcode.com/problems/design-hashset/description/
class MyHashMap {
    public:
        int n = 10000;
        vector<vector<pair<int,int>>> arr;
        MyHashMap() {
            arr.resize(n);
        }
        
        void put(int key, int value) {
            int idx = key % n;
            for(auto& [a,b] : arr[idx]){
                if(a == key){
                    b = value;
                    return;
                }
            }
            arr[idx].push_back({key,value});
        }
        
        int get(int key) {
            int idx = key % n;
            for(auto& [a,b] : arr[idx]){
                if(a == key)
                    return b;
            }
            return -1;
        }
        
        void remove(int key) {
            int idx = key % n;
            for(int i=0;i<arr[idx].size();i++){
                if(arr[idx][i].first == key){
                    arr[idx].erase(arr[idx].begin() + i);
                    return;
                }
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
// Time Complexity: O(1) for put, get, and remove operations on average. In the worst case, it can be O(n) if all keys hash to the same index.
// Space Complexity: O(n) where n is the number of elements in the hash map. The space used is proportional to the number of elements stored in the hash map.
// Note: The hash map uses separate chaining to handle collisions, where each index in the array contains a vector of pairs (key, value).
// The put operation checks if the key already exists before adding or updating it to avoid duplicates.
// The get operation searches for the key in the vector at the hashed index and returns its value if found, or -1 if not found.
// The remove operation searches for the key in the vector at the hashed index and removes it if found.
