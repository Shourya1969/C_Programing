#include<stdio.h>
int main()
{

int intArr[5];
float floatArr[5];
char charArr[5];
int i;

// Input Integer Array
printf("Enter 5 integer elements: ");
for (i=0;i<5;i++){
 scanf("%d",&intArr[i]);
}
 
// Input Float Array
printf("Enter 5 float Elements: ");
for (i=0;i<5;i++){
 scanf("%f",&floatArr[i]);
}

// Input Character Arrays
printf("Enter 5 Characters Elements: ");
for (i=0;i<5;i++){
 scanf("%c",&charArr[i]);
}

//Display integer array values and address
printf("\nInteger Array\n");
for (i=0;i<5;i++){
 printf("Value=%d\tAddress=%p\n",intArr[i],(void*)&intArr[i]);
}

//Display float array values and address
printf("\nFloat Array\n");
for (i=0;i<5;i++){
 printf("Value=%.2f\tAddress=%p\n",floatArr[i],(void*)&floatArr[i]);
}

//Display character array values and address
printf("\nCharacter Array\n");
for (i=0;i<5;i++){
 printf("Value=%c\tAddress=%p\n",charArr[i],(void*)&charArr[i]);
}

return 0;
} 
