#include <stdio.h>
int main() {
int a[3][4]={{2,3,4,5},{5,6,7,8},{2,4,8,9}};
int i,j;
for(i=0;i<3;i++) {
for(j=0;j<4;j++) {
printf("%d ",a[i][j]); }
printf("\n");
}
return 0;
}
