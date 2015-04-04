class Solution {
public:
    vector<int> twoSum(vector<int> &numbers, int target) {
        map<int,int> m;
        vector<int> result;
        for(int i=0; i<numbers.size(); i++){
            // find it!
            if(m.find(numbers[i]) != m.end()){
                result.push_back(m[numbers[i]]+1);
                result.push_back(i+1);
            }
            m[target-numbers[i]] = i;
        }
        return result;
    }
};
