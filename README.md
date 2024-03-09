# PROGRAMMING-CONTESTS-ANS
This repository will have all the problems I've solved in the programming contests I've been present in

# Problem B. Battle Bots
Source: Red de Programación Competitiva

Source file name: Battle.cpp

You are participating in the Battle-bots Aggressive Power Contest. It is a tournament where each team builds a robot that can battle with other robots, and you win by destroying your opponent’s robot. Specifically, you win when your opponent’s robot stops moving after its only motor is destroyed.

You have outfitted your bot with two weapons: it has a sword that can slash the opponent’s bot in half, and it has a claw that can take a chunk out of your opponent’s bot and crush it into scrap. The attacks take equally long. The program that controls your bot is always running to decide which attack to use next. If your battle-bot uses the sword attack to cut its opponent in half, the half with the motor will keep moving, and you can ignore the other half. If your battle-bot uses the claw attack, it will take a chunk of size 1 out of the opponent’s bot, but unless you can take the bot out entirely you have to assume that the motor of the bot is in the piece you have not clawed, and keep fighting.

For example, consider the second sample case. If your opponent’s bot is so big it would take 5 claw attacks to completely crush it, you could act as follows. Start with a sword slash, cutting it down into two pieces of size 2 1/2 (mixed number). Then use your claw on the part that is still moving, so it goes down to size 1 1/2 (mixed number). Cut that piece in half with your sword again to bring it down to size 3/4. Then finally use your claw to crush the last moving piece of the bot. That way, you can beat it in four attacks.

Your bot is equipped with a quantum computer that can easily simulate a googol attack patterns per microsecond. However, if it does not know what the fastest attack pattern is, it will never know it has reached that, and never stop searching. 

Finish your battle bot by writing a program that, given how many claw attacks it would take to take out the opponent, determines the minimal number of attacks you need in the worst case to take it out.

Input

The input consists of:

- One line with an integer n (1 ≤ n ≤ 10^18), the number of claw attacks it would take to take out your opponent’s bot.

Output

Output the least number of attacks needed to destroy your opponent’s bot.

## Example

Input 0:

5

Output 0:

4

Input 1:

6

Output 1:

4

Input 2:

3

Output:

3





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

## Example

Input 0:

3 5                               
apple
maple
alpha

Output 0:

aaple

Input 1:

3 4

icpc
back
laps

Output 1:

bapc
