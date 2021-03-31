 #include <stdio.h>//Pre Process directive to include standard input output functions header file
void fun(int a){
    printf("Value of a is %d\n", a);
}
int main(){
    void (*fun_ptr)(int) = &fun;// fun_ptr is a pointer to function fun() 
   
    (*fun_ptr)(10);// Invoking fun() using fun_ptr 
    return 0;   //return statemnet 
}