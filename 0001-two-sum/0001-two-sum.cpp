class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        unordered_map<int, int> m;
        vector<int> ans; //to store indexes to return 

        for(int i=0; i<arr.size(); i++){
            int first = arr[i];
            int sec = tar - first;

            if(m.find(sec) != m.end()){ //to search sec in map 
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
        }

        //if not found store current value in map
        m[first] = i; // key,val
    }
    return ans;
}
};
