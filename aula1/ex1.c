#include <stdio.h>

int main(void) {
  //pointer is a varible, with funciton is saved address of orther variable
  //pointer is represented of "*" before name of variable
  //exemple: "*p" is integer pointer, while "num" is integer variable
  int *p, num = 10;

  //in C, the keyword "&" before a variable, represented the address of a variable assigned
  //exampe: "p" assigned address of variable "num"
  p = &num;

  //the keyword "*" before a variable in printf, represent the value pointed by "p"
  printf("value pointed by 'p': %d\n", *p);

  //the keyword "&" before a variable in printf, represent the address of variable "p" 
  printf("value of address of 'p': %p\n", &p);

  //the pointer variable  "p", represent address of variable "num", assigned in line 7 
  printf("value assigned the 'p': %p\n", p);

  //the integer variable  "num", is equal to the value pointed by "p" in line 14
  printf("value of integer variable 'num': %d\n", num);

  //the address of "num", is equal the valie of "p" in line 19 
  printf("value of address of 'num': %p\n", &num);
}