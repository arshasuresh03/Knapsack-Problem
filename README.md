# Knapsack-Problem
Given a set of items with weights and values, determine the most valuable combination of items that fit into a knapsack with a limited weight capacity.

The Knapsack Problem is a classic optimization problem in computer science and mathematics. It involves selecting items from a set, each with a weight and a value, to maximize the total value while keeping the total weight within a given limit (the capacity of the knapsack).

Step-by-step process of solving the Knapsack Problem:
1.	Problem Statement: Given a set of items, each with a weight 𝑤𝑖wi and a value 𝑣𝑖vi, and a knapsack with a maximum weight capacity 𝑊W, find the most valuable combination of items that can be put into the knapsack without exceeding its capacity.
2.	Initialization: Initialize a table (often a 2D array) to store the maximum value achievable for different combinations of items and different capacities of the knapsack.
3.	Base Cases: Set the values for the base cases. When there are no items or the knapsack has zero capacity, the maximum value achievable is zero.
4.	Dynamic Programming: Use dynamic programming to iteratively calculate the maximum value achievable for different combinations of items and knapsack capacities.
5.	Fill the Table: Iterate through each item and each possible capacity of the knapsack. For each item, consider whether including it in the knapsack would result in a higher total value compared to excluding it. Update the table accordingly.
6.	Optimal Solution: Once the table is filled, the maximum value achievable is found in the bottom-right corner of the table.
7.	Backtracking: Trace back through the filled table to determine which items were selected to achieve the maximum value. This provides the solution to the original Knapsack Problem.
8.	Output: Return the maximum value achievable and the list of items selected to achieve it.

DEMO:


![image](https://github.com/arshasuresh03/Knapsack-Problem/assets/160167081/65f8858c-6247-41c4-92bf-c6f8f6e05633)
