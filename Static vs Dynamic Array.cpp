int main ()
{
int A[5] = { 10, 20, 30, 40, 50 };
int *p;
p = (int *) malloc (5 * sizeof (int));
p[0] = 60;
p[1] = 70;
p[2] = 80;
p[3] = 90;
p[4] = 100;
printf("Array in Stack : ");
for (int i = 0; i < 5; i++)
{
printf ("%d ", A[i]);
}
printf ("\n");
printf("Array in Heap : ");
for (int i = 0; i < 5; i++)
{
printf ("%d ", p[i]);
}
return 0;
}
