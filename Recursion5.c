/*
- Linear search algorithm for finding an element X in an array, with three implementations
  - Recherche_iter1: Iterative approach using a flag.
  - Recherche_iter2: Iterative approach without using a flag.
  - Recherche_recu: Recursive approach.
*/

#include <stdio.h>
#include <stdlib.h>

int Recherche_iter1(int* Tab, int n, int X)
{
                int flag;
                if (n < 0)
                                flag = 0;
                else
                {
                                int i;
                                for(i = 0;i<n; i++)
                                {
                                                if(Tab[i] == X)
                                                {
                                                                flag = 1;
                                                                break;
                                                }
                                }
                }
                return flag;
}

int Recherche_iter2(int* Tab, int n, int X)
{
                if (n < 0)
                                return 0;
                else
                {
                                int i;
                                for(i = 0;i<n; i++)
                                {
                                                if (Tab[i] == X)
                                                {
                                                                return 1;
                                                }
                                }
                                return 0;
                }
}

int Recherche_recu(int* Tab, int n, int X)
{
                if(n<0)
                                return 0;
                else
                {
                                if(Tab[n] == X)
                                                return 1;
                                else
                                                return Recherche_recu(Tab, n-1,X);
                }
}

int main()
{
                int T[] = {0,1,2,3,4,5,6,7,8,9};
                int n = 10, X =5, flag;
                flag = Recherche_iter1(T,n,X);
                //flag = Recherche_iter2(T,n,X);
                //flag = Recherche_recu(T,n-1,X);
                if(flag == 0)
                                printf("The element %d is not in the Array.\n", X);
                else if (flag == 1)
                                printf("The element %d is in the Array.\n",X);
                                
}
