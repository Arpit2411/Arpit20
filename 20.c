/*Consider that a system has P resources of same type. These resources are shared by Q processes time to time. All processes 
request and release the resources one at a time. Generate a solution to demonstrate that, the system is in safe state when 
following conditions are satisfied. Conditions:
 1.  Maximum resource need of each process is between 1 and P.
 2. Summation of all maximum needs is less than P+Q*/
 
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int i,p,q,resource,max_need=0,count=0;
	printf("Enter number of resources available\n");
	scanf("%d",&p);
	printf("Enter number of processes available\n");
	scanf("%d",&q);
	resource=p;
	int process[q],finish[q],allot[q];
	for(i=0;i<q;i++)
	{
		printf("Enter number of resources required by Process %d\n",i+1);
		scanf("%d",&process[i]);
	}
	printf("Process \tResources\n");
	for(i=0;i<q;i++)
	{
		printf("P%d \t\t%d\n",i+1,process[i]);
	}
}
