# CS201_Project_Gale_Shapley_Algo
Implementation of Gale-Shapley Algorithm (Stable match making Algorithm ) on student-university matching problem in C
Gale Shapley Algorithm : This algorithm is used in solving stable match-making problem, it is also called as Deferred Acceptance Algorithm.
To explain the problem and algorithm, we implemented the algorithm in making stable matched pairs of University and Student.

What is Stable Matching problem?
Stable Matching Problem is the problem to find stable matching between two equally sized sets. The matching is based on a given order of preference.
A matching from one set to the other set is a bijection. Every element in one set is paired with an element in the other set.

Let there be two sets (let say one is a set of students and the other is a set of universities)
And (S,U) is a pair of student and university then the pair will be considered not stable if:
i) There a student let say S'(other than S) in set of students that prefers university U more than S AND
ii) U also prefers student S' more than student S.

-----------------------
OR
i) There is a University U'(other than U) that prefers student S more than U AND
ii)S also prefers University U' more than it prefers U.


Using Gale-Shapley Algo all pairs formed are made stable.
To make it more simpler we will consider N students and N universities.
Given these two sets with this algo we will form stable pairs of Students and their respective Universities.














