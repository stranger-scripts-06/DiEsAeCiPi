class Solution {
public:
    int hIndex(vector<int>& citations) {

        sort(citations.begin(), citations.end(), greater<int>());
        int n = citations.size(), i;

        for(i=0;i<n;i++){
            if(citations[i]<i+1) break;
        }
        return i;
    }
};

// 6 5 3 1 0
// 1 2 3 4 5 