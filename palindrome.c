#include<stdio.h>
int main(){
    int num,reverse=0,remainder,original;
    //input a number from the user 
    printf("Enter an integer:");
    scanf("%d",&num);
    original=num;
    //Reverse the number
    while(num !=0){
        remainder=num%10;
        reverse = reverse*10+remainder;
num/=10;
    }
    //cHECK THE ORIGINAL NUMBER IS equal to its reverse
    if(original == reverse){
        printf("%d is a palindrome.\n",original);
    } else {
        printf("%d is not a palindrome.\n", original);
    }
    return 0;




}