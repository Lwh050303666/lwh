//#include<iostream>
//using namespace std;
//class Solution {
//public:
//    int removeElement(vector<int>& nums, int val) {
//        for (int i = 0; i < nums.size() - 1; i++) {
//            if (nums[i] == val) {
//                nums.size()--;
//                do { nums[i] = nums[i++]; } while{i < nums.size()};
//            }
//
//        }
//        return nums.size();
//    };




//class Solution {
//public:
//    bool backspaceCompare(string S, string T) {
//        return build(S) == build(T);
//    }
//
//    string build(string str) {
//        string ret;
//        for (char ch : str) {
//            if (ch != '#') {
//                ret.push_back(ch);
//            }
//            else if (!ret.empty()) {
//                ret.pop_back();
//            }
//        }
//        return ret;
//    }
//};




//class Solution {
//public:
//    bool backspaceCompare(string S, string T) {
//        int i = S.length() - 1, j = T.length() - 1;
//        int skipS = 0, skipT = 0;
//
//        while (i >= 0 || j >= 0) {
//            while (i >= 0) {
//                if (S[i] == '#') {
//                    skipS++, i--;
//                }
//                else if (skipS > 0) {
//                    skipS--, i--;
//                }
//                else {
//                    break;
//                }
//            }
//            while (j >= 0) {
//                if (T[j] == '#') {
//                    skipT++, j--;
//                }
//                else if (skipT > 0) {
//                    skipT--, j--;
//                }
//                else {
//                    break;
//                }
//            }
//            if (i >= 0 && j >= 0) {
//                if (S[i] != T[j]) {
//                    return false;
//                }
//            }
//            else {
//                if (i >= 0 || j >= 0) {
//                    return false;
//                }
//            }
//            i--, j--;
//        }
//        return true;
//    }
//};





//class Solution {
//public:
//    int minSubArrayLen(int s, vector<int>& nums) {
//        int n = nums.size();
//        if (n == 0) {
//            return 0;
//        }
//        int ans = INT_MAX;
//        int start = 0, end = 0;
//        int sum = 0;
//        while (end < n) {
//            sum += nums[end];
//            while (sum >= s) {
//                ans = min(ans, end - start + 1);
//                sum -= nums[start];
//                start++;
//            }
//            end++;
//        }
//        return ans == INT_MAX ? 0 : ans;
//    }
//};




