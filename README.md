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

Steps -
1. Each student who has not been admitted to any universities yet goes to the university that he/she prefers the most to whom he has not applied for admission yet according to the preference list.
2. If a student applies for admission to a university in which the seat is not filled then he/she gets admission in that university.
3. If a student applies for admission to a university in which the seat is already filled, then the university checks its preference order to see which student it prefers more. If the university prefers the new student over its currently enrolled student, then the university drops out it’s old student and enrolls the new student. And the student who was previously admitted  into the university is no more enrolled.
4. These steps are repeated until all the students are enrolled in any of the universities.

Prove that everyone is admitted to one of the university at the end of algorithm.

At the end of the algorithm, all  students will be admitted to one of the universities. This is because each university will eventually be applied for admission by at least one of the students , thus every university will be admitted by some student.














