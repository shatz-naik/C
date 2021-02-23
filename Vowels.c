#include<stdio.h>

int CheckVowel(char str[])
{
    int iCnt = 0;
    int iFreq = 0;

    if(str == NULL)
    {
        return -1;
    }

    while(str[iCnt] != '\0')
    {
        if(
            (str[iCnt]=='a') || (str[iCnt]=='A')||
            (str[iCnt]=='e') || (str[iCnt]=='E')||
            (str[iCnt]=='i') || (str[iCnt]=='I')||
            (str[iCnt]=='o') || (str[iCnt]=='O')||
            (str[iCnt]=='u') || (str[iCnt]=='U')
        ) 
        {
            printf("inside fun");
            iFreq++;
        }

        iCnt++;

        return iFreq;
    }
}   