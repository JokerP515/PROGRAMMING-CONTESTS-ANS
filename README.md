# PROGRAMMING-CONTESTS-ANS
This repository will have all the problems I've solved in the programming contests I've been present in

# Problem D. Democratic Naming 
Source: Red de Programación Competitiva

Source file name: Democratic.cpp

Input: Standard

Output: Standard

A new county has been created on artificially created land out from the coast, with code name “Built Anew Peninsula County”, but the final name still needs to be chosen. To establish a new name, the cities within the county get to vote on the individual letters of the name. 
As it happens, all cities in the county have a name with exactly m letters, and so they decide the name of the county will also have exactly m letters. Naturally, each city prefers their own name, and thus votes that the ith letter of the county name should match theirs. For each of the m positions, the letter that received the most votes across all cities gets picked. In case of a tie between multiple letters, the one occurring earliest in the English alphabet gets picked. Given the list of the city names, determine the result of the vote for the new county’s name.

Input

The input consists of:
- One line with two integers n and m (1 ≤ n ≤ 1000, 1 ≤ m ≤ 1000), the number of cities and the number of letters in each city name.
- n lines, each with a string of length m, the name of a city.
The city names only consist of lowercase English letters (a-z).

Output

Output the name of the new county.

Example

Input 0

3 5                               
apple
maple
alpha

Output 0

aaple

Input 1

3 4

icpc
back
laps

Output 1

bapc
