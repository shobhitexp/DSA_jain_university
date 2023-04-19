void main()
{
int i, count=0;
char name[20];
/* scanf("%s", name);*/ gets(name);
// printf("Name = %s \n", name);
puts(name);
for (i=0; name[i]!='\0'; i++)
if (name[i] == ‘n') count++;
printf("Total n's = %d\n", count);
}
    
    
==================================================================================
                             string length
==================================================================================   
#include <stdio.h>
#include <string.h>
int strlen (const char *s) {
int n;
for (n=0; *s!=‘\0’; ++s)
++n;
return n;
}

    

==================================================================================
                             strcat()
================================================================================== 
#include <stdio.h>
#include <string.h>

int main()
    {
char *strcat(char *s1, const char *s2)
{
char *p = s1;
while (*p != ‘\0’) /* go to end */
++p;
while(*s2 != ‘\0’)
*p++ = *s2++; /* copy */
*p = ‘\0’;
return s1;
}
    
==================================================================================
                            strcmp()
==================================================================================     
#include <stdio.h>
#include <string.h>
int main ()
{
char STR1[18]; char STR2[18]; int ret;
strcpy(STR1, "abcdef"); strcpy(STR2, "ABCDEF");
ret = strcmp(STR1, STR2);
if(ret < 0)
{
printf("str1 is less than str2");
}
else if(ret > 0)
{
printf("str2 is less than str1");
}
else
{
printf("str1 is equal to str2");
} 
}

    
==================================================================================
                                strcpy()
================================================================================== 
#include <stdio.h>
#include <string.h>
int main( )
{
char source[ ] = "home sweet home" ;
char target[20]= "" ;
printf ( "\nsource string = %s", source ) ;
printf ( "\ntarget string = %s", target ) ;
strcpy ( target, source ) ;
printf ( "\ntarget string after strcpy( ) = %s",
target ) ;
return 0;
}
    
    
====================================================================================
    Without using string inbuilt functions
====================================================================================
#include <stdio.h>
#include <string.h>

int main()
    {
char str1[100], str2[50];
int i;
printf("Enter string str1\n");
gets(str1);
for(i=0;5tri[i]!='\0';i++)
{
  str2[i] = stri[i];
}
str2[i]='\0';
printf"Copied String(str2) is %5" ‚str2);
     }
==================================================================================================
                  Write a C program to Compare Two Strings without using strcmp()
==================================================================================================
    
#include <stdio.h>
#include <string.h>

int main()
{
  	char Str1[100], Str2[100];
  	int result, i;
 
  	printf("\n Please Enter the First String :  ");
  	gets(Str1);
  	
  	printf("\n Please Enter the Second String :  ");
  	gets(Str2);
  	
  	for(i = 0; Str1[i] == Str2[i] && Str1[i] == '\0'; i++);
		   
  	if(Str1[i] < Str2[i])
   	{
   		printf("\n str1 is Less than str2");
	}
	else if(Str1[i] > Str2[i])
   	{
   		printf("\n str2 is Less than str1");
	}
	else
   	{
   		printf("\n str1 is Equal to str2");
	}
  	
  	return 0;
}
    
==================================================================================================
                 Write a C program to Compare Two Strings without using strcat() 
==================================================================================================
#include <stdio.h>
#include <string.h>

int main()
{
char str1[100] = “Mohan", str2[100] = “ Raj";
char str3[100];
int i = 0, j = 0;
printf("\nFirst string: %s", str1);
printf("\nSecond string: %s", str2);
while (str1[i] != '\0')
{
str3[j] = str1[i];
i++;
j++;
}
i = 0;
  while (str2[i] != '\0')
{
str3[j] = str2[i];
i++;
j++;
}
str3[j] = '\0';
printf("\nConcatenated string: %s", str3);
return 0;
}
    
    
====================================================================================================================
            Write a C program to find length of the string , with out using inbuilt function [ strlen() ] 
====================================================================================================================
#include <stdio.h>
#include <string.h>

int main()
{
char s[100];
int i;
printf(“Enter a string: “);
scanf(“%s”, s);
for(i = 0; s[i] != ‘\0’; i++);
printf(“Length of string: %d”, i);
return 0;
    
