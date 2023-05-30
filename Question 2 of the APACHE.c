#Approach 1: Recursive solution
#This approach uses a recursive() 'fibonacciRecursive' to calculate the fibonacci value based on the given recurrence relation
#This checks the base cases(n=0,1and 2)and recursively calls itself with the reduced values of n until it reaches the base cases.

#include<stdio.h>
int fibonacciRecursive(int n){
    if(n==o)
     return 0;
    else if(n==1)
     return 1;
    else if(n==2)
     return 2;
    else
     return fibonacciRecursive(n-3)+fibonacciRecursive(n-2);

}

#Approach 2:Iterative solution
#It uses iterative loops to calculate the fibonacci value based on the recurrence relation
#It starts from the base cases and iteratively computes the next fibonacci value by updating the values 'prevPrev','prev' and 'current'
#This approach avoids the overhead of recursive function calls and is generally more efficient than the recursive solution.
#include<stdio.h>
int fibonacciIterative(int n){
    if (n==0)
       return 0;
    else if(n==1)
       return 1;
    else if(n==2)
       return 2;

    int prevPrev=0;
    int prev=1;
    int current=2;
    int i;

    for(i=3;i,=n;i++){
        int temp=current;
        current=prevPrev+prev;
        prevPrev=prev;
        prev=temp;
    }
    return current;
}


#Approach 3: Dynamic programming solution

#include<stdio.h>

int fibonacciDynamic(int n){
    if(n==0)
     return 0;
    else if(n==1)
     return 1;
    else if(n==2)
     return 2;

    int fib[n+1];
    fib[0]=0;
    fib[1]=1;
    fib[2]=2;
    int 1;

    for(i=3;i<=n;i++){
        fib[i]=fib[i-3]+fib[i-2];
    }
    return fib[n];
}


#B). The advantages and disadvantages between the three recurrence relationare;
#1).RECURSIVE solution
-Advantage:
Easy to understand and implement.
-Disadvantage:
Inefficient for large values of 'n'due to redundant recursive calls#

#2).ITERATIVE solution
-Advantage:
More efficient than the recursive solution for large values of n,as it avoids redundant calls.
-Disadvantage:
It requires more lines of code compared to the recursive solution.#

#3).DYNAMIC solution
-Advantage:
It is efficient for large values of 'n,'as it avoids redundant calculations by storing previously computed values in an array
-Disadvantage:
It requires additional memory to store the array of previously computed values.#