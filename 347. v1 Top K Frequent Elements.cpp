class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;
        for (int i : nums) {
            count[i]++;
        }

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        for (auto& t : count) {
            heap.push({t.second, t.first});
            if (heap.size() > k) {
                heap.pop();
            }
        }
        vector<int> res;
        for (int i =0; i<k; ++i) {
            res.push_back(heap.top().second);
            heap.pop();
        }
        return res;
    }
};
