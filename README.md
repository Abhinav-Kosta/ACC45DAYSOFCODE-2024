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