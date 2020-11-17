//Program to demonstrate patterns

/*  Author : Deepak Prasad
    Date   : 17/11/2020
*/

#include<iostream>
using namespace std;

int main(){

    printf("\nPattern type 1:\n");
    printf("----------------\n");

    /*  For user interactive code
        int size;
        cin>>size;
        replace 8 with size
    */

    for(int i=1; i<8; i++){
        for(int j=1; j<8; j++){
            if(j<i)
                printf(" ");
            else
                printf("%d ",j);
        }//end of inner for loop
        printf("\n");
    }//end of outer for loop

    for(int i=7; i>0; i--){
        for(int j=1; j<8; j++){
            if(j<i)
                printf(" ");
            else
                printf("%d ",j);
        }//end of inner for loop
        printf("\n");
    }//end of outer for loop
    printf("--------------\n");

    printf("\nPattern type 2:\n");
    printf("--------------\n");

    for(int i=1; i<8; i++){
        for(int j=1; j<8; j++){
            if(j<i)
                printf("  ");
            else 
                printf("%d ",j);
        }//end of innerfor loop
        printf("\n");
    }//end of outer for loop

    for(int i=7; i>0; i--){
        for(int j=1; j<8; j++){
            if(j<i)
                printf("  ");
            else
                printf("%d ",j);
        }//end of inner for loop
        printf("\n");
    }//end of outer for loop
    printf("--------------\n");

    return 0;
}//end of main function