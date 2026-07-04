class Solution {
public:
    int search(vector<int>& A, int tar) {
        int st=0, end=A.size()-1;
        while(st<=end) {
            int mid = st+(end-st)/2;
            if(tar == A[mid]) {
                return mid;
            }
            if(tar<A[mid]) {
                end = mid-1;
            }
            if(tar>A[mid]) {
                st = mid+1;
            }
        }
        return -1;        
    }
};