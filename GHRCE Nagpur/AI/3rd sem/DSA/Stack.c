#include <stdio.h>

int main(){
    int stack[10];
    int top = -1;
    int x;
    printf("\n\n\t\t CODE BY MARIO \t\t\n\n");
    do
    {
        int a, x;
        printf("\nChoose the command \n 1) push \n 2) poop \n 3) Exit \n\n");
        scanf("%d",&a);
        if(a == 1){
            if(top < 10){
                top = top + 1;
                printf("\nEnter a element to push :- ");
                scanf("%d",&stack[top]);
                }
            else{
                printf("stack is over flow !!\n\n");
            }
            }
        else if (a == 2){
                if(top == -1){
                    printf("stack is empty !!! \n\n");
                }
                else{
                    top = top - 1;
                    printf("%d \n\n", stack[top+1]);
                }
            }
        else if (a == 3){
                    break;
                }
        else{
                printf("enter valid option!\n\n");
            }
        
    }while (x = 3);
}