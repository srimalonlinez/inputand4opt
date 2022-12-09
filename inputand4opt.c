#include<stdio.h>

int main(){
    int x,y;

    printf("Enter Number :");
    scanf("%d",&x);

    printf("Enter Number :");
    scanf("%d",&y);

    int add = x+y;
    int sub = x-y;
    int mul = x*y;
    int div = x/y;

    printf("added  is : %d\n",add);
    printf("substracted  is : %d\n",sub);
    printf("multiplied  is : %d\n",mul);
    printf("division is : %d\n",div);


}
