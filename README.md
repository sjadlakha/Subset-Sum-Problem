# Subset-Sum-Problem
Solving subset sum problem by two different algorithms and comparing their peformance.
The algorithms are referred from the following papers published in International Journal of Computer Applications (0975 – 8887) and International Journal of Emerging Trends & Technology in Computer Science (IJETTCS)

{1} The Subset-Sum Problem: Revisited with an Improved Approximated Solution by Hashem A. Isa (Faculty of Information Technology, Al-Balqa Applied University, Jordan), Saleh Oqeili (Faculty of Information Technology, Al-Balqa Applied University, Jordan), Sulieman Bani-Ahmad(Faculty of Information Technology, Al-Balqa Applied University, Jordan)

{2} Subset Sum Problem-New Representation Approach for finding the solution by Dr. Anil Kumar Singh(Jagran Institute of Management 620-W block Saket Nagar, Kanpur-208014 (U.P.), India), Mr. Anand Kumar Dixit(Jagran Institute of Management 620-W block Saket Nagar, Kanpur-208014 (U.P.), India)

Approximation approach:
Inputs:
Integer N, number of elements Elements, a set of N distinct positive integers Integer C, the target sum 

Output:
All subsets of the set Elements that have a sum equal to C. 

Important declarations:

SSP (int N, int Elements[N], int C) int Bitmap[N]; int K; int PSum; int Iteration; int Count; int I, J; boolean Found; 
Where

1. Bitmap is an array of size N and is used to store ones and zeros; 1 at position x indicated that the xth element is part of the identified solution. N is the size of the set of integers in hand.

2. K is the index of the last element in the sorted array that is smaller than the required sum C.

3. PSum holds the current partial sum.

4. Iteration is the number of already elapsed iterations (required to control the number of iterations covered).

5. Count holds the total number of already identified valid solutions.

Backtracking:

The main condition to take care is:-

if(subset is satisfying the constraint) 
  print the subset exclude the current element and consider next element 
else 
  generate the nodes of present level along breadth of tree and recursion for next levels
  
Real time Application of subset sum problem:-

Computer Passwords:-

A computer needs to verify a user's identity before allowing him or her access to an account. The simplest system would have the machine keep a copy of the password in an internal file, and compare it with what the user types. A drawback is that anyone who sees the internal file could later impersonate the user.

I believe this alternative is actually implemented on some systems the computer generates a large number (say 500) of a i . They are stored in the internal file. A password is a subset of {1, 2, 3…….500}. (in prac-tice, there is a program to convert a normal sequence-of-symbols password to such a subset.) Instead of having the password for the user, the computer keeps the total associated with the appropriate sub-set. When the user types in the subset, the computer tests whether the total is correct. It does not keep a record of the subset. Thus impersonation is possible only if somebody can reconstruct the subset knowing the a i and the total.

Message Verification:-

A sender wants to send messages to a receiver. Keeping the message secret is important. So receiver wants to be sure that the message he/ she is receiving is not from a fraud and has not been tampered. So with the help of subset sum problem we can generate a verification code so that anybody who wants to read, first verify this by a pass-word.

Used in Industries:- Suppose a factory gets a contract to finish a product in 2 days and it has several machines which take different time to complete the work, using the subset sum algorithm we can find out which machines are suitable to complete the work on time.
