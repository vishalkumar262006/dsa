class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        vector<int> arr;
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return {-1, -1};
        ListNode* prev = head;
        ListNode* curr = head->next;
        int index = 1;
        while (curr->next != NULL) {
            if ((curr->val > prev->val && curr->val > curr->next->val) ||
                (curr->val < prev->val && curr->val < curr->next->val)) {

                arr.push_back(index);
            }

            prev = curr;
            curr = curr->next;
            index++;
        }

        if (arr.size() < 2)
            return {-1, -1};

        int mini = INT_MAX;

        for (int i = 1; i < arr.size(); i++) {
            mini = min(mini, arr[i] - arr[i - 1]);
        }

        int maxi = arr.back() - arr.front();

        return {mini, maxi};
    }
};