#include <stdio.h>

int strlenX(char *str)
{
	int iCnt =0;
	
	if(str == NULL)
	{
		return 0;
	}	
	
	while(*str != '\0')
	{
		iCnt++;
		str++;
	}
   
  return iCnt;  
	
}

int main()
{
    char Arr[20];
	int iRet =0;
    
    printf("Enter string\n");
    scanf("%[^'\n']s",Arr);     
    
    iRet = strlenX(Arr);
	printf("length of string is : %d\n",iRet);
    
    return 0;
}
