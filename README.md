# ACC45DAYSOFCODE-2024
Repository created for "45 days of code challenge", year 2024

Day 1 

Easy: 
The cricket World Cup has started in Chefland. There are many teams participating in the group stage matches. Any team that scores 
12
12 or more points in the group stage matches qualifies for the next stage.

You know the score that a particular team has scored in the group stage matches. Determine if the team has qualified for the next stage or not.

Medium:
Easy Pronunciation
Words that contain many consecutive consonants, like "schtschurowskia", are generally considered somewhat hard to pronounce.

We say that a word is hard to pronounce if it contains 
4 or more consonants in a row; otherwise it is easy to pronounce. For example, "apple" and "polish" are easy to pronounce, but "schtschurowskia" is hard to pronounce.

You are given a string S consisting of N lowercase Latin characters. Determine whether it is easy to pronounce or not based on the rule above — print YES if it is easy to pronounce and NO otherwise.

For the purposes of this problem, the vowels are the characters 
{a,e,i,o,u} and the consonants are the other 21 characters.

Hard:
Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Day2:

Subscriptions
A new TV streaming service was recently started in Chefland called the Chef-TV.
A group of N friends in Chefland want to buy Chef-TV subscriptions. We know that 6 people can share one Chef-TV subscription.
Also, the cost of one Chef-TV subscription is X rupees. Determine the minimum total cost that the group of N friends will incur so that everyone
in the group is able to use Chef-TV.

TCS Examination
Two friends, Dragon and Sloth, are writing a computer science examination series. There are three subjects in this series: 
DSA,TOC, and DM. Each subject carries 100 marks.
You know the individual scores of both Dragon and Sloth in all 3 subjects. You have to determine who got a better rank.
The rank is decided as follows:
The person with a bigger total score gets a better rank
If the total scores are tied, the person who scored higher in DSA gets a better rank
If the total score and the DSA score are tied, the person who scored higher in TOC gets a better rank
If everything is tied, they get the same rank.

Remove Duplicates From a sorted Array
Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once.
The relative order of the elements should be kept the same. Then return the number of unique elements in nums.
Consider the number of unique elements of nums to be k, to get accepted, you need to do the following things:
Change the array nums such that the first k elements of nums contain the unique elements in the order they were present in nums initially.
The remaining elements of nums are not important as well as the size of nums.
Return k.

Day 3:

Chef in his Office
Recently Chef joined a new company. In this company, the employees have to work for X hours each day from Monday to Thursday. Also, in this company, Friday is called Chill Day — employees only have to work for Y hours (Y<X) on Friday. Saturdays and Sundays are holidays.
Determine the total number of working hours in one week.


Break the Stick
Chef has a stick of length N.
He can break the stick into 2 or more parts such that the parity of length of each part is same. For example, a stick of length 11 can be broken into three sticks of lengths {3,3,5} since each part is odd, but it cannot be broken into two sticks of lengths {5,6} since one is even and the other is odd.
Chef can then continue applying this operation on the smaller sticks he obtains, as many times as he likes.
Can Chef obtain a stick of length exactly X by doing this?

Roman To Integer:
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two ones added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

DAY 4:
The Three Topics
The Chef has reached the finals of the Annual Inter-school Declamation contest.
For the finals, students were asked to prepare 10 topics. However, Chef was only able to prepare three topics, numbered A, B and C — he is totally blank about the other topics. This means Chef can only win the contest if he gets the topics A, B,or C to speak about.
On the contest day, Chef gets topic X. Determine whether Chef has any chances of winning the competition.

Print "Yes" if it is possible for Chef to win the contest, else print "No".

You may print each character of the string in either uppercase or lowercase (for example, the strings yEs, yes, Yes, and YES will all be treated as identical).

DAY 5:
Water Filling
Chef has three water bottles. At any point, if at least two of them are empty, she will fill them up. But if at most one bottle is empty, she will wait, and not fill them up now.
You are given three integers - B1, B2, and B3.
If B1 = 1, it means that the first bottle is full.
If B1 = 0, it means that the first bottle is empty.
Similarly, B2 denotes whether the second bottle is full or empty, and B3
denotes it for the third bottle.
Output "Water filling time", if Chef has to fill the bottles now. If not, output "Not now".

Elections in Chefland
There are 101 citizens in Chefland. It is election time in Chefland and 3 parties, A,B, and C are contesting the elections. Party A receives X(a) votes, party B receives X(b) votes, and party C receives X(c) votes.
The constitution of Chefland requires a particular party to receive a clear majority to form the government. A party is said to have a clear majority if it receives strictly greater than 50 votes.
If any party has a clear majority, print the winning party (A, B or C). Otherwise, print NOTA.

Rotate Array:
Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

DAY 6:
A or B
There are two problems in a contest.
Problem A is worth 500 points at the start of the contest.
Problem B is worth 1000 points at the start of the contest.
Once the contest starts, after each minute:
Maximum points of Problem A reduce by 2 points .
Maximum points of Problem B reduce by 4 points.
It is known that Chef requires X minutes to solve Problem A correctly and Y minutes to solve Problem B correctly.
Find the maximum number of points Chef can score if he optimally decides the order of attempting both the problems.

Hostel Room
There are initially X people in a room.

You are given an array A of length N which describes the following events:

If A[i] ≥ 0, then A[i] people enter the room at the i-th minute.
For example, if A[2] = 3, then 3 people enter the room at the 2nd minute.

If A[i] < 0, then |A[i]| people leave the room at the i-th minute.
Here |A[i]| denotes the absolute value of A[i].
For example, if A[4] = -2, then 2 people leave the room at the 4th minute.

Determine the maximum number of people in the room at any moment of time.

It is guaranteed in the input that at any moment, the number of people in the room does not become negative.

DAY 7:
Janmansh and Assignments
Janmansh has to submit 3 assignments for Chingari before 10 PM. He starts working on the assignments at X PM. Each assignment takes him 1 hour to complete.

Can you determine whether Janmansh will be able to finish all the assignments on time?

ATM Machine
Read problem statements in: Bengali, Mandarin Chinese, Russian, and Vietnamese.
There is an ATM machine that initially contains K units of money. There are N people (numbered from 1 to N) who want to withdraw money. For each valid person i (1 ≤ i ≤ N), the i-th person wants to withdraw A₁, A₂, ..., Aₙ units of money.

The people try to withdraw money one by one, in increasing order of their indices. If the ATM has at least the required amount of money, it will dispense the required amount. Otherwise, the machine will throw an error and not dispense any money. In such cases, the person will return home directly without attempting to withdraw again.

For each person, determine whether they will successfully withdraw the required amount of money or not.

Jump Game:
ou are given an integer array nums. You are initially positioned at the array's first index, and each element in the array represents your maximum jump length at that position.

Return true if you can reach the last index, or false otherwise.

DAY 8:
Monopoly
There are 4 companies in the markets of Chefland, A, B, C, and D.
This year,
Company A made a profit of P lakh rupees,
Company B made a profit of Q lakh rupees,
Company C made a profit of R lakh rupees,
Company D made a profit of S lakh rupees.
There is said to be a monopoly in the market if the profit made by one company is strictly greater than the sum of profits made by all other companies.
Determine if there is a monopoly in the market or not.

Problem: Pseudo-Sorted Array
An array A of length N is said to be pseudo-sorted if it can be made non-decreasing by performing at most one operation:

Operation:
Choose an index i such that 1 ≤ i ≤ N−1 and swap A[i] and A[i+1].
Task:
Given an array A, determine if it is pseudo-sorted or not.

Find the Index of the First Occurrence in a String:
Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack.

DAY 9:
Plus One
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

DAY 10:
Valid Parenthese
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.

DAY 11
Permutations
Given an array nums of distinct integers, return all the possible 
permutations.
You can return the answer in any order.

DAY 12:
Flip the cards
There are N cards on a table, out of which X cards are face-up and the
remaining are face-down.
In one operation, we can do the following:
Select any one card and flip it (i.e. if it was initially face-up, after
the operation, it will be face-down and vice versa).
What is the minimum number of operations we must perform so that all the
cards face in the same direction
(i.e. either all are face-up or all are face-down)?

Tanu and Head-bob
Tanu has got interested in signs and gestures that we use for communication. One such gesture is the head-bob.
When we want to signal "Yes" to someone, we move the head up-and-down. For "No", the head is moved left-and-right, rotating about the vertical axis.
There is a peculiar way of gesturing "Yes", commonly seen in India, by moving head sideways (rotating about the forward-back axis). This is called the Indian head-bob.

Tanu observed many people on the railways station, and made a list of gestures that they made. Usual "Yes" gesture is recorded as "Y", no as "N" and Indian "Yes" gesture as "I". (Assume no foreigner uses the Indian "Yes" gesture and vice-versa). Identify which of them were Indians, which were not Indian, and which one you cannot be sure about.

DAY 13:
Expert Setter
A problem setter is called an expert if at least 50% of their problems are approved by Chef.
Munchy submitted X problems for approval. If Y problems out of those were approved, find whether Munchy is an expert or not.

Card Removal
You have N cards placed in front of you on the table. The ith card has the number Ai written on it.

In one move, you can remove any one card from the remaining cards on the table.

Find the minimum number of moves required so that all the cards remaining on the table have the same number written on them.

DAY 14:
Maximise the Tastiness
Chef is making a dish that consists of exactly two ingredients. He has four ingredients A,B,C and D with tastiness a,b,c,and d respectively. He can use either A or B as the first ingredient and either C or D as the second ingredient.
The tastiness of a dish is the sum of tastiness of its ingredients. Find the maximum possible tastiness of the dish that the chef can prepare.

Ratio by 2
You are given two positive integers, X and Y. In a single operation, you can increase or decrease the value of either integer by 1.
Your task is to find the minimum number of operations required to ensure that either:
X is at least twice as large as Y (i.e., X≥2×Y), or
Y is at least twice as large as X (i.e., Y≥2×X).

Linked List Cycle
iven head, the head of a linked list, determine if the linked list has a cycle in it.

There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Internally, pos is used to denote the index of the node that tail's next pointer is connected to. Note that pos is not passed as a parameter.

Return true if there is a cycle in the linked list. Otherwise, return false.

DAY 15:
Fill Candies
Chef received N candies on his birthday. He wants to put these candies in some bags. A bag has K pockets and each pocket can hold at most M candies. Find the minimum number of bags Chef needs so that he can put every candy into a bag.

DAY 16:
Encoding Message
Read problems statements in Mandarin chinese, Russian and Vietnamese as well.
Chef recently graduated Computer Science in university, so he was looking for a job. He applied for several job offers, but he eventually settled for a software engineering job at ShareChat. Chef was very enthusiastic about his new job and the first mission assigned to him was to implement a message encoding feature to ensure the chat is private and secure.

Chef has a message, which is a string S with length N containing only lowercase English letters. It should be encoded in two steps as follows:

Swap the first and second character of the string S, then swap the 3rd and 4th character, then the 5th and 6th character and so on. If the length of S is odd, the last character should not be swapped with any other.
Replace each occurrence of the letter 'a' in the message obtained after the first step by the letter 'z', each occurrence of 'b' by 'y', each occurrence of 'c' by 'x', etc, and each occurrence of 'z' in the message obtained after the first step by 'a'.
The string produced in the second step is the encoded message. Help Chef and find this message.

DAY 17:
Car or Bike
Chef wants to reach home as soon as possible. He has two options:
Travel with his BIKE which takes X minutes.
Travel with his CAR which takes Y minutes.
Which of the two options is faster or do they both take same time?

Bear and Candies 123
Bears love candies and games involving eating them. Limak and Bob play the following game. Limak eats 1 candy, then Bob eats 2 candies, then Limak eats 3 candies, then Bob eats 4 candies, and so on. Once someone can't eat what he is supposed to eat, he loses.

Limak can eat at most A candies in total (otherwise he would become sick), while Bob can eat at most B candies in total. Who will win the game? Print "Limak" or "Bob" accordingly.

DAY 18:
Binary BattlesN teams have come to participate in a competitive coding event called “Binary Battles”. It is a single-elimination tournament consisting of several rounds.

Note: It is known that N is a power of 2.

In one round, each team will be paired up with and compete against one of the other teams. If there are X teams before the start of a round, X/2 matches are held simultaneously during the round between X/2 pairs of teams. The winning team of each match will move on to the next round, while the losing team of each match will be eliminated. There are no ties involved. The next round will then take place in the same format between the remaining teams. The process will continue until only one team remains, which will be declared the overall winner.

The organizers want to find the total time the event will take to complete. It is given that each round spans A minutes, and that there is a break of B minutes between every two rounds (no break after the last round).

For example, consider a case when 
N = 4, A=10 and B=5. The first round will consist of two matches and will take 10 minutes to complete. Two teams move on to round 2 and the other two get eliminated. Then there is a break of 5 minutes. The two remaining teams compete in round 2, which lasts 10 more minutes. The team that wins is declared the overall winner. Thus the total time taken is 10+5+10=25 minutes.

Can you help the organizers determine how long the event will take to finish?

DAY 19:
Test Score
In a test, there are N problems, each carrying X marks.
In each problem, Chef either received X marks or 0 marks.
Determine whether is it possible for Chef to achieve exactly Y marks.

DAY 20:
Sasta Shark Tank
Devendra just had a million-dollar idea and he needs funds to startup. He was recently invited to Sasta Shark Tank (A TV show where entrepreneurs pitch their ideas to investors hoping to get investment in return).

He was offered deals from two investors. The first investor offers A dollars for 10% of his company and the second investor offers B dollars for 20% of his company. Devendra will accept the offer from the investor whose valuation of the company is more. Determine which offer will Devendra accept or if both the offers are equally good.

For example, if the first investor offers 300 dollars for 10% of the company, then the first investor's valuation of the company is 3000 dollars since 10% of 3000 = 300. 
If the second investor offers 500 dollars for 20% of the company, then the second investor's valuation of the company is 2500 dollars since 20% of 2500 =500.

DAY 21:
IPL and RCB
It's IPL time and as usual RCB are finding it tough to qualify for playoffs. RCB needs a minimum of X more points to qualify for playoffs in their remaining Y matches. A win, tie and loss in a match will yield 2,1,0 points respectively to a team.

You being a true RCB supporter want to find the minimum number of matches RCB needs to win to qualify for playoffs. It is guaranteed that RCB will qualify for playoffs if they win all their remaining Y matches.

Single-use Attack
Chef is playing a video game, and is now fighting the final boss.

The boss has H health points. Each attack of Chef reduces the health of the boss by X.
Chef also has a special attack that can be used at most once, and will decrease the health of the boss by Y.

Chef wins when the health of the boss is ≤0.
What is the minimum number of attacks needed by Chef to win?

DAY 22:
Degree of Polynomial
In mathematics, the degree of polynomials in one variable is the highest power of the variable in the algebraic expression with non-zero coefficient.

Chef has a polynomial in one variable x with N terms.

Find the degree of the polynomial.

Note: It is guaranteed that there exists at least one term with non-zero coefficient.

DAY 23:
Remove Bad elements
Chef has an array A of length N.

In one operation, Chef can remove any one element from the array.

Determine the minimum number of operations required to make all the elements same.

DAY 24:
Dracula Eats
Eat, drink, and be scary

There are N spooky days left until Halloween.
Dracula dines at a mysterious restaurant that changes its spooky menu daily. He particularly enjoys what they serve on Tuesday.

Today is Monday, so he wishes to calculate how many times he can indulge in his favourite menu in the next N days (including today) before Halloween.

Note that Dracula follows the standard 7-day calendar, with Tuesday immediately following Monday.

DAY 25:
Having already mastered cooking, Chef has now decided to learn how to play the guitar. Often while trying to play a song, Chef has to skip several strings to reach the string he has to pluck. Eg. he may have to pluck the 1st  string and then the 6th  string. This is easy in guitars with only 6 strings. 
However, Chef is playing a guitar with 10 raise to 6 strings. In order to simplify his task, Chef wants you to write a program that will tell him the total number of strings he has to skip while playing his favourite song.

This is how guitar strings are numbered (In ascending order from right to left). Eg. to switch from string 1 to 6, Chef would have to skip 4 strings (2,3,4,5).

DAY 26:
Buy1-Get1
One day Alice visited Byteland to purchase jewels for her upcoming wedding anniversary.

In Byteland, every Jewelry shop has their own discount methods to attract the customers. One discount method called Buy1-Get1 caught Alice's attention. That is, Alice buys one jewel, then she can get one additional jewel with the same color without charge by Buy1-Get1.

Alice lists the needed jewels as a string S, each letter denotes one jewel, and the same letters denote the same colors of jewels, and the different letters denote the different colors of jewels. The cost of each jewel is 1. Your task is to calculate the minimum cost for getting all the jewels Alice listed.

DAY 27:
Primality Test

Alice and Bob are meeting after a long time. As usual they love to play some math games. This times Alice takes the call and decides the game. The game is very simple, Alice says out an integer and Bob has to say whether the number is prime or not. Bob as usual knows the logic but since Alice doesn't give Bob much time to think, so Bob decides to write a computer program.

Help Bob accomplish this task by writing a computer program which will calculate whether the number is prime or not.

Note that 1 is not a prime number.

DAY 28:
Reach fast
Chef is standing at coordinate A while Chefina is standing at coordinate B.

In one step, Chef can increase or decrease his coordinate by at most K.

Determine the minimum number of steps required by Chef to reach Chefina.

DAY 29:
Pascal's Triangle
Given an integer numRows, return the first numRows of Pascal's triangle.
In Pascal's triangle, each number is the sum of the two numbers directly above it.

It is My Serve
Alice and Bob are playing a game of table tennis where irrespective of the point scored, every player makes 2 consecutive serves before the service changes. Alice makes the first serve of the match. Therefore the first 2 serves will be made by Alice, then the next 2 serves will be made by Bob and so on.

Ups and Downs
You will be given a zero-indexed array A. You need to rearrange its elements in such a way that the following conditions are satisfied:

A[i] ≤ A[i+1] if i is even.
A[i] ≥ A[i+1] if i is odd.
In other words the following inequality should hold: A[0] ≤ A[1] ≥ A[2] ≤ A[3] ≥ A[4], and so on. Operations ≤ and ≥ should alter.

DAY 30:
Is the Score Consistent
Chef is watching a football match. The current score is A:B, that is, team 1 has scored A goals and team 2 has scored B goals. Chef wonders if it is possible for the score to become C:D at a later point in the game (i.e. team 1 has scored C goals and team 2 has scored D goals). Can you help Chef by answering his question?

DAY 31:
Chef Fantasy 11
All of Chef's friends are playing fantasy cricket based upon the ODI World Cup, and Chef would like to join them.

For a certain cricket match, Chef has decided upon his team of 11 players. However, he hasn't yet decided who should be the captain and who should be the vice-captain.

He's narrowed his decision down to N players out of the 11, from which he'll choose one to be the captain and one to be the vice captain.
How many different choices does he have?

DAY 32:
The Lead Game
The game of billiards involves two players knocking 3 balls around on a green baize table. Well, there is more to it, but for our purposes this is sufficient.

The game consists of several rounds and in each round both players obtain a score, based on how well they played. Once all the rounds have been played, the total score of each player is determined by adding up the scores in all the rounds and the player with the higher total score is declared the winner.

The Siruseri Sports Club organises an annual billiards game where the top two players of Siruseri play against each other. The Manager of Siruseri Sports Club decided to add his own twist to the game by changing the rules for determining the winner. In his version, at the end of each round, the cumulative score for each player is calculated, and the leader and her current lead are found. Once all the rounds are over the player who had the maximum lead at the end of any round in the game is declared the winner.

Prime Generator
Ram wants to generate some prime numbers for his cryptosystem. Help him please! Your task is to generate all prime numbers between two given numbers.

DAY 33:
Good Program
In computing, the collection of four bits is called a nibble.

Chef defines a program as:

Good, if it takes exactly X nibbles of memory, where X is a positive integer.
Not Good, otherwise.
Given a program which takes N bits of memory, determine whether it is Good or Not Good.

DAY 34:
Blackjack
Chef is playing a variant of Blackjack, where 3 numbers are drawn and each number lies between 1 and 10 (with both 1 and 10 inclusive). Chef wins the game when the sum of these 3 numbers is exactly 21.

Given the first two numbers A and B, that have been drawn by Chef, what should be 3-rd number that should be drawn by the Chef in order to win the game?

Note that it is possible that Chef cannot win the game, no matter what is the 3-rd number. In such cases, report −1 as the answer.

DAY 35:
Qualify the round
In a coding contest, there are two types of problems:

Easy problems, which are worth 1 point each
Hard problems, which are worth 2 points each
To qualify for the next round, a contestant must score at least X points. Chef solved A Easy problems and B Hard problems. Will Chef qualify or not?

DAY 36:
Dracula Eats
Eat, drink, and be scary

There are N spooky days left until Halloween.
Dracula dines at a mysterious restaurant that changes its spooky menu daily. He particularly enjoys what they serve on Tuesday.

Today is Monday, so he wishes to calculate how many times he can indulge in his favourite menu in the next N days (including today) before Halloween.

Note that Dracula follows the standard 7-day calendar, with Tuesday immediately following Monday.

DAY 37:
Minimum number of Flips
Chef has an array A of length N consisting of 1 and −1 only.

In one operation, Chef can choose any index i (1≤i≤N) and multiply the element Ai by −1.

Find the minimum number of operations required to make the sum of the array equal to 0. Output -1 if the sum of the array cannot be made 0.

DAY 38:
Binary Battles
N teams have come to participate in a competitive coding event called “Binary Battles”. It is a single-elimination tournament consisting of several rounds.

Note: It is known that N is a power of 2.

In one round, each team will be paired up with and compete against one of the other teams. If there are X teams before the start of a round, matches are held simultaneously during the round between 
​pairs of teams. The winning team of each match will move on to the next round, while the losing team of each match will be eliminated. There are no ties involved. The next round will then take place in the same format between the remaining teams. The process will continue until only one team remains, which will be declared the overall winner.

The organizers want to find the total time the event will take to complete. It is given that each round spans A minutes, and that there is a break of B minutes between every two rounds (no break after the last round).

For example, consider a case when N=4, A=10 and B=5. The first round will consist of two matches and will take 10 minutes to complete. Two teams move on to round 2 and the other two get eliminated. Then there is a break of 5 minutes. The two remaining teams compete in round 2, which lasts 10 more minutes. The team that wins is declared the overall winner. Thus the total time taken is 10+5+10=25 minutes.

Can you help the organizers determine how long the event will take to finish?

Day 39:
Cyclic Quadrilateral
You are given the sizes of angles of a simple quadrilateral (in degrees) A, B, C and D, in some order along its perimeter. Determine whether the quadrilateral is cyclic.

Note: A quadrilateral is cyclic if and only if the sum of opposite angles is 180∘.

DAY 40:
Watching Movies at 2x
Chef started watching a movie that runs for a total of X minutes.

Chef has decided to watch the first Y minutes of the movie at twice the usual speed as he was warned by his friends that the movie gets interesting only after the first Y minutes.

How long will Chef spend watching the movie in total?

Note: It is guaranteed that Y is even.

DAY 41:
Bath in Winters
A geyser has a capacity of X litres of water and a bucket has a capacity of Y litres of water.

One person requires exactly 2 buckets of water to take a bath. Find the maximum number of people that can take bath using water from one completely filled geyser..