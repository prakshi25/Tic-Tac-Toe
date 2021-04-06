#include<stdio.h>
main()
{
	int i,j,a[3][3],t=0,pos,value;
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			a[i][j]=-1;
		}
	}
	
	
	while(t!=9)
	{
		printf("Enter Your Position:");
		scanf("%d",&pos);
		
		if(t%2==0)
		{
			value=1;
		}
		
		else
		{
			value=0;
		}
		
		if(pos==1)
		{
			a[0][0]=value;
		}
		
		else if(pos==2)
		{
			a[0][1]=value;
		}
		
		else if(pos==3)
		{
			a[0][2]=value;
		}
		
		else if(pos==4)
		{
			a[1][0]=value;
		}
		
		else if(pos==5)
		{
			a[1][1]=value;
		}
		
		else if(pos==6)
		{
			a[1][2]=value;
		}
		
		else if(pos==7)
		{
			a[2][0]=value;
		}
		
		else if(pos==8)
		{
			a[2][1]=value;
		}
		
		else if(pos==9)
		{
			a[2][2]=value;
		}	
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==-1)
			{
				printf("__|");	
			}
			else if(a[i][j]==1)
			{
				printf(" X|");
			}
			else if(a[i][j]==0)
			{
				printf(" 0|");
			}
		}
		printf("\n");
	}
	
	if((a[0][0]==1 && a[0][1]==1 && a[0][2]==1) || (a[1][0]==1 && a[1][1]==1 && a[1][2]==1) || (a[2][0]==1 && a[2][1]==1 && a[2][2]==1) || (a[0][0]==1 && a[1][0]==1 && a[2][0]==1) || (a[0][1]==1 && a[0][1]==1 && a[2][1]==1) || (a[0][2]==1 && a[1][2]==1 && a[2][2]==1) || (a[0][0]==1 && a[1][1]==1 && a[2][2]==1) || (a[0][2]==1 && a[1][1]==1 && a[2][0]==1))                                                                      	
	{
		printf("\n1st Player Wins");
		break;
	}
	
	else if((a[0][0]==0 && a[0][1]==0 && a[0][2]==0) || (a[1][0]==0 && a[1][1]==0 && a[1][2]==0) || (a[2][0]==0 && a[2][1]==0 && a[2][2]==0) || (a[0][0]==0 && a[1][0]==0 && a[2][0]==0) || (a[0][1]==0 && a[0][1]==0 && a[2][1]==0) || (a[0][2]==0 && a[1][2]==0 && a[2][2]==0) || (a[0][0]==0 && a[1][1]==0 && a[2][2]==0) || (a[0][2]==0 && a[1][1]==0 && a[2][0]==0))                                                                      	
	{
		printf("\n2nd Player Wins");
		break;
	}
	
    if(t==9)
	{
		printf("\nDraw Match");
	}
	t++;
	
}
	
}
