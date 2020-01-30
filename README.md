#Sorting Algorithms & Big 0


A **sorting algorithm** is one that takes an unordered list and returns it ordered. ... **Big-O**, along with **Big-Omega** and **Big-Theta**, describe the performance of an algorithm by estimating the number of operations required as the size of the input approaches infinity.


When we compute the time complexity **T(n)** of an algorithm we rarely get an exact result, just an estimate. That’s fine, in computer science we are typically only interested in how fast T(n) is growing as a function of the input size n.

For example, if an algorithm increments each number in a list of length n, we might say: “This algorithm runs in **O(n)** time and performs **O(1)** work for each element”.

The most common algorithmic complexity functions in which the only factor they depend on is the size of the input sample n, ordered from highest to lowest efficiency are:
`O (1)         Constant order`

`O (log n)     Logarithmic Order`

`O (n)         Linear order`

`O (n log n)   Quasi-linear order`

`O (n2)        Quadratic order`

`O (n3)        Cubic order`

`O (na)        Polynomial order`

`O (2n)        Exponential order`

`O (n!)        Factorial order`

`Or (1): Constant complexity.`


![alt text](https://raw.githubusercontent.com/donbeave/interview/master/big-o-chart.png)

**O (log n):** Logarithmic complexity. This usually appears in certain algorithms with iteration or non-structural recursion, for example binary search.


**O (n):** Linear complexity. It is a good complexity and also very usual. It appears in the evaluation of simple loops as long as the complexity of the interior instructions is constant.


**O (n log n):** Quasi-linear complexity. It is found in algorithms of type divide and conquer as for example in the quicksort sorting method and is considered a good complexity. If n is doubled, the execution time is slightly longer than double.


**O (n2):** Quadratic complexity. It appears in doubly nested loops or cycles. If n is doubled, the execution time increases four times.


**O (n3):** Cubic complexity. It usually occurs in loops with triple nesting. If n is doubled, the execution time is multiplied by eight. For a large value of n it begins to grow dramatically.


**O (na):** Polynomial complexity (a> 3). If it grows, the complexity of the program is quite bad.


**Or (2n):** Exponential complexity. They are not usually very useful in practice because of the very high execution time. They occur in recursive subprograms that contain two or more internal calls.