#This returns a fibonacci sequence based on the following arithemetic operations
#using Dynamic programming
#By : Monjok Joseph Terem 
#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int value;
    int type;
}  Node;

typedef enum typetag{
    ADD,
    SUB,
    MUL,
    DIV
} typetag;

Node*makeFunc(typetag type) {
    Node*result=(Node*)malloc(sizeof(Node));
    result->type=type;
    return result;
}

Node*addFunction(int a,int b) {
    Node*result=(Node*)malloc(sizeof(Node));
    result->type=ADD;
    result->value=a+b;
    return result;
}

Node*subFunction(int a,int b) {
    Node*result=(Node*)malloc(sizeof(Node));
    result->type=SUB;
    result->value=a-b;
    return result;
}

Node*mulFunction(int a,int b) {
    Node*result=(Node*)malloc(sizeof(Node));
    result->type=MUL;
    result->value=a*b;
    return result;
}

Node*divFunction(int a,int b) {
    Node*result=(Node*)malloc(sizeof(Node));
    result->type=DIV;
    result->value=a/b;
    return result;
}

void calc(Node*node){
    switch(node->type){
        case ADD:
        printf("add:%d\n",node->value);
        break;
         case SUB:
        printf("sub:%d\n",node->value);
        break;
         case MUL:
        printf("mul:%d\n",node->value);
        break;
         case DIV:
        printf("div:%d\n",node->value);
        break;
        default:
        printf("unknown operation\n");
        break;
    }
}

int fibonacci(int n){
    int*fib=(int*)malloc((n+1)*sizeof(int));
    fib[0]=0;
    fib[1]=1;

    for(int i = 2; i<=n;i++){
        fib[i]=fib[i-1]+fib[i-2];
    }

    int result=fib[n];
    free(fib);
    return reult;
    
}

int main(){
    Node*add=addFunction(10,6);
    Node*mul=mulFunction(5,4);
    Node*sub=subFunction(mul->value,add->value);
    Node*fibo=subFunction(sub->value,0);

    calc(add);
    calc(mul);
    calc(sub);
    calc(fibo);

    int fibonacci_reult= fibonacci(fibo->value);
    printf("Fibonacci of %d:^d\n",fibo->value,fibonacci_reult);


    free(add);
    free(mul);
    free(sub);
    free(fibo);

    return 0;

}



}
