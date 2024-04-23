#include <iostream>
#include <vector>
using namespace std;

// Structure to represent an item
struct Item {
    int weight;
    int value;
};

// Function to solve the 0-1 Knapsack Problem
int knapsack(int W, const vector<Item>& items) {
    int n = items.size();
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));

    for (int i = 1; i <= n; ++i) {
        for (int w = 1; w <= W; ++w) {
            if (items[i - 1].weight <= w) {
                dp[i][w] = max(dp[i - 1][w], items[i - 1].value + dp[i - 1][w - items[i - 1].weight]);
            } else {
                dp[i][w] = dp[i - 1][w];
            }
        }
    }

    return dp[n][W];
}

int main() {
    vector<Item> items = {
        {2, 12},
        {1, 10},
        {3, 20},
        {2, 15}
    };
    int W = 5; // Knapsack capacity

    int maxValue = knapsack(W, items);
    cout << "Maximum value that can be obtained: " << maxValue << endl;

    return 0;
}
