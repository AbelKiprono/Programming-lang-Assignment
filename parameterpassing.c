#include <stdio.h>

 
 
   //SWAP = PASS BY VALUE
   //SWAP2 = PASS BY REFERENCE  AND POINTER
   //Learnt in a tutorial that in C there is no pass by refernce it's pass by pointers which is interchangebly called pass by reference
 
 
 void swap(int a, int b);
  void swap2(int *a, int *b);

int main()
{
   int x= 5;
   int y = 10;
   swap(x, y);
   printf("%d\n %d\n", x, y);
   swap2(&x, &y);

   printf("%d\n %d\n", x, y);

    return 0;
}

void swap(int a, int b)
{

    int temp;
    temp = a;
    a= b;
    b =temp;
}


void swap2(int *a, int *b)
{
  int temp;
  temp = *a; 
  * a = * b;
  *b = temp;


}