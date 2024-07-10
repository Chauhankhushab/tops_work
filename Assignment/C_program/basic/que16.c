//16. Convert country’s name in abbreviate form
#include<stdio.h>
int main(){
    char COUNTRY_NAME[100];
    char ABBREVIATE[100];
    int i,j;

    printf("ENTER COUNTRY NAME:-");
    scanf("%d",COUNTRY_NAME);

    j=0;
    for(i=0;i<COUNTRY_NAME;i++){
        if(i==0|| COUNTRY_NAME[i-1]==''){
            ABBREVIATE[j++]= toupper(COUNTRY_NAME[i]);

        }
    }
    ABBREVIATE[j]='\0';

    printf("ABBREVIATE :- %s\n",ABBREVIATE);
    
}