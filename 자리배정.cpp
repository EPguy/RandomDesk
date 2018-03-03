#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#include <Windows.h>		// include for function : sleep()  

   int nCounter = 0;	int i, k, j; 
   char *num[] = {"고정현", "김경민", "김다은", "김동휘",
   				   "김성욱", "김영찬", "김주성", "노시현",
				   "문준협", "박예린", "박지은", "성유정",
				   "신윤성", "엄태원", "이승우", "이주용",
				   "최승호", "홍순찬", "황선우", "황신우"};
   char* temp2 = 0; 
   int temp=0;

void ChangeArray()
{
	for (i=0;i<20;i++) 
   { 
      temp = rand()%20; 
      temp2  = num[temp]; 
      num[temp] = num[i]; 
      num[i] = temp2; 
   } 
}

void RandomResult()
{
	   for(k = 0; k < 5; k++)
   {
   		printf("\t** %d 모둠 자리입니다 **\n\n",k+1);
   		
   		for(j = 0; j < 4; j++)
   		{
			Sleep(1000);						// sleep(1000) = 1s
   			printf("\a\t%s\t",num[nCounter++]);
   			if (j % 2 == 1) putchar('\n');
		}
		putchar('\n');
   }
 } 

int main() 
{ 
 
   srand((unsigned int)time(NULL));
   ChangeArray();
   RandomResult();
   
   printf("Done!");
   getchar();
   return 0;
}
