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
