#include<stdio.h>
#include<stdbool.h>

bool checkPrime(int iNo){
    int iCnt=0;
    // bAns=false;
    for(iCnt=2;iCnt<=(iNo/2);iCnt++)
    {
           if((iNo%iCnt)==0)
           {
            return false;
           } 
    }
    return true;
}

int main(){
int iValue=0;
bool bRet=false;

printf("Enter A Number \n");
scanf("%d",&iValue);
bRet=checkPrime(iValue);

if(bRet==true){
    printf("%d is PRIME number\n",iValue);
}

else{
   printf("%d is NOT PRIME number\n",iValue); 
}
    return 0;
}