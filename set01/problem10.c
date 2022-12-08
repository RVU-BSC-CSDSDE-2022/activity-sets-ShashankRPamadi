#include<stdio.h>
#include<string.h> 
 
int main()
{
   char str1[100], str2[100];
   int i, j, flag = 0;
 
   printf("Enter first string: ");
   gets(str1);
 
   printf("Enter second string: ");
   gets(str2);
 
   for(i = 0; str1[i] != '\0'; i++);
   for(j = 0; str2[j] != '\0'; j++, i++)
   {
      str1[i] = str2[j];
   }
   str1[i] = '\0';
   printf("After concatenation: %s", str1);
 
   for(i = 0; str1[i] != '\0'; i++)
   {
      if(str1[i] != str2[i])
      {
         flag = 1;
         break;
      }
   }
 
   if(flag == 1)
   {
      printf("Strings are not same");
   }
   else
   {
      printf("Strings are same");
   }
 
   return 0;
}