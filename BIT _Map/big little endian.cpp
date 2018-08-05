#include<iostream>
#include<stdio.h>
using namespace std;
void show_mem_rep(char *start, int n) 
{
    int i;
    for (i = 0; i < n; i++)
         printf(" %.2x", start[i]);
    printf("\n");
}
 
/*Main function to call above function for 0x01234567*/
int main()
{
   int i = 0x01234567;
   int j=1;
   show_mem_rep((char *)&i, sizeof(i));
   char *c=(char*)&j;
   if(*c)
   	cout<<"little";
	else
		cout<<"big";
   return 0;
}
