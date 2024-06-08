## Descriptions of the problems I've solved will be present here

# Problem B. Battle Bots
Source: Red de Programación Competitiva

Source file name: [Battle.cpp](/Battle.cpp)

Input: Standard

Output: Standard

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
```
5
```
Output 0:
```
4
```
Input 1:
```
6
```
Output 1:
```
4
```
Input 2:
```
3
```
Output 2:
```
3
```




# Problem D. Democratic Naming 
Source: Red de Programación Competitiva

Source file name: [Democratic.cpp](/Democratic.cpp)

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
```
3 5                               
apple
maple
alpha
```
Output 0:
```
aaple
```
Input 1:
```
3 4
icpc
back
laps
```
Output 1:
```
bapc
```
# Problem L – LED Matrix

Author : Alejandro Strejilevich de Loma, Argentina

Source: Red de Programación Competitiva

Source file name: [L.cpp](/L.cpp)

A LED matrix is a two-dimensional array of LEDs that is used to display information. This is achieved by turning on the LEDs that form a desired pattern. The figure below represents a LED matrix displaying a smiling-face pattern. LEDs that are turned off are shown in white, while LEDs that are turned on appear colored.

<p align="center">
  <img src="https://github.com/JokerP515/PROGRAMMING-CONTESTS-ANS/assets/106451105/14a49eba-03c8-401e-a7d8-b923ded8429b" alt = "LEDs that are turned on"/>
</p>


Some LED matrices scroll the pattern from right to left across the matrix, turning on just the appropriate LEDs at each step. Thus, any pattern with the same height than the matrix can be displayed, even patterns that are wider than the matrix. The pattern scrolling works as follows: Initially, all the LEDs in the matrix are turned off. The next step, the last column of the matrix displays the first column of the pattern. At each new step the pattern is moved one column to the left across the matrix, until the first column of the matrix displays the last column of the pattern. Finally, all the LEDs in the matrix are turned off again. If a LED matrix is equipped with pattern scrolling, the scrolling occurs even if the pattern if not wider than the matrix. The picture below shows all the step required to display a pattern of an arrow that is pointing to the left.

<p align="center">
  <img src="https://github.com/JokerP515/PROGRAMMING-CONTESTS-ANS/assets/106451105/6d23eb50-6992-457c-b522-c596f3d7522f" alt="Arrow pattern"/>
</p>

Astrid has just received an old LED matrix with pattern scrolling, and she thinks that some LEDs might be broken. Since broken LEDs cannot be turned on, she is worried that some patterns will not display properly. Given the description of the state of each LED, and the pattern to display, you must tell whether the appropriate LEDs can be turned on at every step of the pattern scrolling.

Input

The first line contains three integers R, C and K (1 ≤ R, C, K ≤ 1000), indicating respectively the number of rows of both the LED matrix and the pattern, the number of columns of the matrix, and the number of columns of the pattern.

The next R lines describe the matrix and the pattern from top to bottom. Each of these lines contains a string M of length C and a string P of length K, describing respectively a row of the matrix and a row of the pattern. Each character of both M and P is either “*” (asterisk) or “-” (hyphen). For M, the character “*” (asterisk) indicates a good LED while the character “-” represents a broken LED. For P, the character “*” (asterisk) indicates a LED the must be turned on while the character “-” represents a LED that must be turned off.

Output

Output a single line with the uppercase letter “Y” if the appropriate LEDs can be turned on at every step of the pattern scrolling, and the uppercase letter “N” otherwise.

## Example

Sample input 1:
```
6 6 6

****** --*---
****** -**---
****** ******
****** ******
****** -**---
*****- --*---
```
Sample output 1:
```
N
```
Sample input 2:
```
2 4 6

**** ------
***- *-----
```
Sample output 2:
```
N
```
Sample input 3:
```
2 6 4

****** ****
*-**-* ----
```
Sample output 3:
```
Y
```
Sample input 4:
```
1 1 1

* *
```
Sample output 4:
```
Y
```
Sample input 5:
```
1 1 1

* -
```
Sample output 5:
```
Y
```
Sample input 6:
```
1 1 1

- *
```
Sample output 6:
```
N
```
Sample input 7:
```
1 1 1

- -
```
Sample output 7:
```
Y
```


# Problem A. An Easy-Peasy Problem

Source: Red de Programación Competitiva

Source file name: [Peasy.cpp](/Peasy.cpp)

Input: Standard

Output: Standard

Travis was recently saddled with writing the easy problem for a competitive programming contest aimed at high school students. Writing an easy problem is a bit of a challenge for Travis; a problem labeled as “Medium Difficulty Level” by Travis typically ends up being the hardest problem of the set! 

But this time things were different. When the contest was over, Travis was happy that everyone solved his problem. However, some of the other judges informed Travis a problem is easy only if at least half of the contestants solve the problem in the first half of the contest.

Travis has some data on his problem, and now he wants to determine: was his problem truly easy?

In programming competitions, the term “solves” is used to refer to the number of correct submissions for a problem, i.e., that many contestants solved the problem.

Given the number of solves for Travis’s problem at the end of the first half and at the end of the contest, determine whether at least half the people solved the problem in the first half. Note that solves at the end of the contest includes solves of the first half as well.

## Input

There is only one input line; it contains two integers, s1 and s2 (0 ≤ s1 ≤ s2; 1 ≤ s2 ≤ 100), representing solves of Travis’s problem at the end of the first half and at the end of the contest, respectively.

## Output

Print “E” (quotes for clarity) if the problem is considered easy by the other judges’ standards. Print “H” (quotes for clarity) if the problem is not considered easy by the other judges’ standards. Everyone knows that if Travis is not writing an easy problem, the problem is probably hard!

## Example

Input 0:
```
10 20
```
Output 0:
```
E
```
Input 1:
```
6 13
```
Output 1:
```
H
```
Input 2:
```
15 22
```
Output 2:
```
E
```

# Problem B. Age Expression

Source: Red de Programación Competitiva

Source file name: [Age.cpp](/Age.cpp)

Input: Standard

Output: Standard

Dr. O has two granddaughters (named Alyssa and Konari) and they keep Dr. O young!

When people ask Dr. O how old he is, rather than giving one positive integer (his age), Dr. O provides two positive integers a and k; Dr. O’s age can then be computed using the expression (a × Alyssa’s age) + (k × Konari’s age).

Given three positive integers (Dr. O’s age, Alyssa’s age, and Konari’s age), determine if the positive integers a and k exist.

## Input

There is only one input line; it provides (respectively) Dr. O’s age, Alyssa’s age, and Konari’s age. Assume that 1 ≤ Konari’s age < Alyssa’s age < Dr. O’s age ≤ 150.

## Output

Print 1 (one) if a and k exist, 0 (zero) otherwise. Note that a and k must both be greater than zero.

## Example

Input 0:
```
69 9 1
```
Output 0:
```
1
```
Input 1:
```
76 11 7
```
Output 1:
```
1
```
Input 2:
```
50 9 3
```
Output 2:
```
0
```
Input 3:
```
70 10 5
```
Output 3:
```
1
```
Input 4:
```
10 7 2
```
Output 4:
```
0
```

# Problem C. Increasing Sublist

Source: Red de Programación Competitiva

Source file name: [Increasing.cpp](/Increasing.cpp)

Input: Standard

Output: Standard

Given a list of numbers, we define a sublist as one or more consecutive elements in the list. An increasing sublist is when the consecutive elements are in strictly increasing order, i.e., each element is greater than the element to its left in the sublist (except the first element in the sublist which does not have an element
to its left).

Given a list, find the length (number of elements) of the longest increasing sublist, i.e., the length of the sublist with the most number of elements.

## Input

The first input line contains an integer, n (1 ≤ n ≤ 30), indicating the number of elements in the list. The next input line provides the n elements in the list. Assume each element is between 1 and 100, inclusive.

## Output

Print the length (number of elements) of the longest increasing sublist.

## Example

Input 0:
```
6
5 7 2 4 6 3
```
Output 0:
```
3
```
Input 1:
```
15
10 70 80 5 5 5 15 20 30 40 60 9 8 70 80
```
Output 1:
```
6
```

# Problem D. Let’s Portmanteau

Source: Red de Programación Competitiva

Source file name: [Portmanteau.cpp](/Portmanteau.cpp)

Input: Standard

Output: Standard

From “yourdictionary.com”: Portmanteau, pronounced “port-man-tow,” refers to a new word made from two words and their meanings. For example, the portmanteau brunch refers to a combined meal of breakfast and lunch, and spork is a mix between a spoon and a fork. 

You are to combine two words using a simplified approach.

Rules for combining:

1. Get the first letter of the first word regardless of what (vowel or consonant) it is. Then, starting from the second letter of the first word, get letters moving right until you reach a vowel. If no vowels while moving right, all letters will be taken. If there is a vowel moving right, let’s call it v1.

2. Get the last letter of the second word regardless of what (vowel or consonant) it is. Then, starting from the letter next to the last letter of the second word, get letters moving left until you reach a vowel. If no vowels while moving left, all letters will be taken. If there is a vowel moving left, let’s call it v2.

3. Combine the two words by listing the letters taken from the first word (Step 1), followed by a vowel (let’s call it the merging vowel), followed by the letters taken from the second word (Step 2). The merging vowel is as follows:

* If the second word has a vowel while moving left (i.e., v2 exists), v2 is the merging vowel.

* If the second word does not have a vowel while moving left (i.e., v2 does not exist) but the first word has a vowel while moving right (i.e., v1 exists), v1 is the merging vowel. 

* If v1 and v2 don’t exist (i.e., neither word has a vowel while moving right/left), use the letter “o” as the merging vowel.

Assume the vowels are “aeiou”.

## Input

There are two input lines: the first line provides the first word and the second line provides the second word. Assume that each word starts in column 1, is at least 4 letters and at most 20 letters, and contains only lowercase letters.

## Output

Print the combined word on one output line.

## Example

Input 0:
```
abcdefun
ghijku
```
Output 0:
```
abcdijku
```
Input 1:
```
abcdefun
ghmn
```
Output 1:
```
abcdeghmn
```
Input 2:
```
abycd
fgyhu
```
Output 2:
```
abycdofgyhu
```

# Problem C - Cuckoo Synchronization

Source: Red de Programación Competitiva

Source file name: [C_(202406).py](/C_(202406).py)

Input: Standard

Output: Standard

Artem is excited to be visiting his grandma for the weekend since he is able to play around with her vast collection of N cuckoo clocks. Artem has put a lot of effort on synchronizing the clocks so that all of them emit their first cuckoo at minute 1. But having such a variety of clocks comes with a problem: each clock will repeat their sounds at different intervals.

To be more specific, the i−th (1 ≤ i ≤ N) cuckoo clock will make a sound every i minutes after their synchronized sound. For example, for N ≥ 3 the i = 3 clock will keep emitting sounds every 3 minutes after it’s first cuckoo at time 1. So Artem will be able to listen to it’s beautiful sound on the 1, 4, 7, 10, . . . minutes.

Excited for all of his hard work, Artem wants to show the experiment to his grandma.

Currently it’s time 0 and he knows that his grandma will be back from the store in T minutes.

Artem wants you to help him figure out how many clocks will make their cuckoo sound exactly when his grandma arrives!

## Input

The first line contains an integer Q(1 ≤ Q ≤ 100) - the number of test cases.

For each test case, the only line contains two integers - N(1 ≤ N ≤ 10^9) and T(1 ≤ T ≤ 10^9), for the number of cuckoo clocks and the time in minutes when Artem’s grandma is back, respectively.

## Output

For each test case, output the number of clocks that make the cuckoo sound at exactly T minutes.

## Example

Sample input 1:
```
5
5 1
10 5
10 6
5 3
6 11
```
Sample output 1:
```
5
3
2
2
3
```
Sample input 2:
```
3
1000 647
1000000 123456
1000000000 1000000000
```
Sample output 2:

```
8
4
20
```

# Problem F – Fair Prize

Source: Red de Programación Competitiva

Source file name: [F_(202406).cpp](/F_(202406).cpp)

Input: Standard

Output: Standard

John is at the fair and has finally won a prize in the marble game. In the prize selection, there are n different prizes arranged in a row, each of the n prizes has a label vi (1 ≤ i ≤ N) that represents the value of the prize. John has scored p points in the marble game, and, according to the marble game rules, he can select a prize that has a value less than or equal to p.

Given the values of the n prizes, can you help John select the prize with the highest value that he can choose?

## Input

The first line of input contains two integer numbers separated by a space, n (1 ≤ n ≤ 1000) and p (1 ≤ p ≤ 1000), representing the number of prizes in the marble game and the amount of points John scored in the game, respectively.

The second and last line of input contains n integer numbers separated by a space, where the i-th number represents the value vi (1 ≤ vi ≤ 1000) of the i-th prize.

## Output

Output a line with a single integer number, the value of the prize with the highest value that John can choose.

## Example

Sample input 1:
```
5 10
4 2 4 3 9
```
Sample output 1:
```
9
```
Sample input 2:
```
1 10
10
```
Sample output 2:
```
10
```
Sample input 3:
```
3 6
6 2 4
```
Sample output 3:
```
6
```

# Problem L – Lost Shoes

Source: Red de Programación Competitiva

Source file name: [L_(202406).cpp](/L_(202406).cpp)

Input: Standard

Output: Standard

Summer is coming! And for Miguel’s family, it means a celebration is coming, but they are a pretty weird family. Not only do they hate music and celebrate summer, but they are also shoemakers, so his mother Coco gifts the whole family with a pair of shoes every year.

However, this year Miguel’s dog has made a mess and the shoes got all mixed up. Everyone got a left shoe and a right shoe, but not necessarily the shoes they were supposed to get. So now they have asked for your help to get everyone their shoes.

To do this, two people can swap a shoe between them, but only if they are of the same side (they can only swap a left shoe with a left shoe and a right shoe with a right shoe). They want to know what is the minimum number of swaps they need to do so everyone ends with their shoe.

## Input

The first line contains a number N (1 ≤ N ≤ 10^6) indicating the number of people in the family.

The second line contains N numbers a1, ..., aN (1 ≤ ai ≤ N). The i-th number indicates who is the owner of the right shoe the i-th person has. 

The third line contains N numbers b1, ..., bN (1 ≤ bi ≤ N). The i-th number indicates who is the owner of the left shoe the i-th person has.

## Output

Print a line with a number k, the minimum number of swaps they need to do so everyone has their shoes.

## Example

Sample input 1:
```
2
1 2
2 1
```
Sample output 1:
```
1
```
Sample input 2:
```
3
1 3 2
2 1 3
```
Sample output 2:
```
2
```
Sample input 3:
```
5
4 5 1 2 3
3 1 4 5 2
```
Sample output 3:
```
8
```
