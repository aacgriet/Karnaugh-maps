#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<graphics.h>

void  Case1();
void Case2();
void Case3();
void Case4();
void Case5();
void Case6();
void Case7();
void Case8();


int main(void)
{
	int i,n,sum=0,a[10],ch;
	char str[10][10];
	int gdriver=DETECT,gmode;

	initgraph(&gdriver,&gmode,"c:\TURBOC3\BGI");
	cleardevice();
	printf("\n\n\t\tSIMPLIFICATION OF BOOLEAN EXPRESSION USING K MAP\n");
	system("COLOR 31");
	printf("\nEnter the number of min-terms : ");
	scanf("%d",&n);
	printf("\n\tEnter the min-terms one after the other \n\n");
	for(i=1;i<=n;i++)
	{
		printf("\nEnter min-term %d : ",i);
		scanf("%s",str[i-1]);
		if(strcmp("!a!b!c",str[i-1])==0)
			ch=1;
		else if(strcmp("!a!bc",str[i-1])==0)
			ch=2;
		else if(strcmp("!abc",str[i-1])==0)
			ch=3;
		else if(strcmp("!ab!c",str[i-1])==0)
			ch=4;
		else if(strcmp("a!b!c",str[i-1])==0)
			ch=5;
		else if(strcmp("a!bc",str[i-1])==0)
			ch=6;
		else if(strcmp("abc",str[i-1])==0)
			ch=7;
		else if(strcmp("ab!c",str[i-1])==0)
			ch=8;
		else
			printf("Enter a valid minterm");
		switch(ch)
		{
			case 1 : a[0]=1;
				break;
			case 2 : a[1]=1;
				break;
			case 3 : a[2]=1;
				break;
			case 4 : a[3]=1;
				break;
			case 5 : a[4]=1;
				break;
			case 6 : a[5]=1;
				break;
			case 7 : a[6]=1;
				break;
			case 8 : a[7]=1;
				break;
		}
	}
			for(i=0;i<8;i++)
		{
			if(a[i]!=1)
				a[i]=0;
		}
		for(i=0;i<8;i++)
		{
			sum=sum+a[i];
		}
		setcolor(YELLOW);

		rectangle(100,100,300,200);
		setcolor(12);
		line(200,100,200,200);
		line(150,100,150,200);
		line(250,100,250,200);
		line(100,150,300,150);
		setcolor(CYAN);
		if(a[0]==0)
           circle(125,125,10);

		else
			line(125,115,125,135);
		if(a[1]==0)
			circle(175,125,10);
		else
			line(175,115,175,135);
		if(a[2]==0)
			circle(225,125,10);
		else
			line(225,115,225,135);
		if(a[3]==0)
			circle(275,125,10);
		else
			line(275,115,275,135);
		if(a[4]==0)
			circle(125,175,10);
		else
			line(125,165,125,185);
		if(a[5]==0)
			circle(175,175,10);
		else
			line(175,165,175,185);
		if(a[6]==0)
			circle(225,175,10);
		else
			line(225,165,225,185);
		if(a[7]==0)
			circle(275,175,10);
		else
			line(275,165,275,185);
		printf("THE SIMPLIFIED BOOLEAN EXPRESSION IS : ");
		switch(sum)
		{
			case 0:Case0();
                                                    break;
			case 1:Case1();
				break;
			case 2: Case2();
                                                break;		
		             case 3:  Case3();
		                          break;
                                       case 4:Case4();
                                                  break;
                                       case 5:Case5();
		                          break;
	                          case 6: Case6();
		                            break;
		             case 7: Case7();
				break;
			case 8:Case8();
				break;
		}
			printf("\n\t\t\t K MAP FOR THE GIVEN MIN TERMS IS : \n");
		            system("COLOR 5A");

		getch();
		return 1;
}


void Case0()
{
printf("0");
}

void Case1()
{
                                                      if(a[0]==1)
					printf("!a!b!c");
				else if(a[1]==1)
					printf("!a!bc");
				else if(a[1]==1)
					printf("!a!bc");
				else if(a[2]==1)
					printf("!abc");
				else if(a[3]==1)
					printf("!ab!c");
				else if(a[4]==1)
					printf("a!b!c");
				else if(a[5]==1)
                                                            printf("a!bc");
                                                else if(a[6]==1)
printf("abc");
                                                 else if(a[7]==1)
printf("ab!c");
}
				
void Case2()
{
                                                     if(a[0]==1&&a[1]==1)
					printf("!a!b");
				else if(a[0]==1&&a[2]==1)
					printf("!a!b!c+!abc");
				else if(a[0]==1&&a[3]==1)
					printf("!a!c");
				else if(a[0]==1&&a[4]==1)
					printf("!b!c");
				else if(a[0]==1&&a[5]==1)
					printf("!a!b!c+a!bc");
				else if(a[0]==1&&a[6]==1)
					printf("!a!b!c+abc");
				else if(a[0]==1&&a[7]==1)
					printf("!a!b!c+ab!c");
				else if(a[1]==1&&a[2]==1)
					printf("!ac");
				else if(a[1]==1&&a[3]==1)
					printf("!a!bc+!ab!c");
				else if(a[1]==1&&a[4]==1)
					printf("!a!bc+a!b!c");
				else if(a[1]==1&&a[5]==1)
					printf("!bc");
				else if(a[1]==1&&a[6]==1)
					printf("!a!bc+abc");
				else if(a[1]==1&&a[7]==1)
					printf("!a!bc+ab!c");
				else if(a[2]==1&&a[3]==1)
					printf("!ab");
				else if(a[2]==1&&a[4]==1)
					printf("!abc+a!b!c");
				else if(a[2]==1&&a[5]==1)
					printf("!abc+a!bc");
				else if(a[2]==1&&a[6]==1)
					printf("bc");
				else if(a[2]==1&&a[7]==1)
					printf("!abc+ab!c");
				else if(a[3]==1&&a[4]==1)
					printf("!ab!c+a!b!c");
				else if(a[3]==1&&a[5]==1)
					printf("!ab!c+a!bc");
				else if(a[3]==1&&a[6]==1)
					printf("!ab!c+abc");
				else if(a[3]==1&&a[7]==1)
					printf("b!c");
				else if(a[4]==1&&a[5]==1)
					printf("a!b");
				else if(a[4]==1&&a[6]==1)
					printf("a!b!c+abc");
				else if(a[4]==1&&a[7]==1)
					printf("a!c");
				else if(a[5]==1&&a[6]==1)
					printf("ac");
				else if(a[5]==1&&a[7]==1)
					printf("a!bc+ab!c");
				else if(a[6]==1&&a[7]==1)
					printf("ab");
}

void Case3()
{
                                                if(a[0]==1 && a[1]==1 &&a[2]==1)
     	   		                printf("!a!b+!ac");
  		                       else if(a[0]==1 && a[1]==1 &&a[3]==1)
        				printf("!a!b+!a!c");
        			         else if(a[0]==1 && a[1]==1 &&a[4]==1)
	        			printf("!b!c+!a!b");
			         else if(a[0]==1 && a[1]==1 &&a[5]==1)
	        			printf("!a!b+!bc");
			         else if(a[0]==1 && a[1]==1 &&a[6]==1)
        				printf("!a!b+abc");
			         else if(a[0]==1 && a[1]==1 &&a[7]==1)
			        	printf("!a!b+ab!c");
                                                 else if(a[0]==1 && a[2]==1 &&a[3]==1)
			        	printf("!a!c+!ab");
			         else if(a[0]==1 && a[2]==1 &&a[4]==1)
			        	printf("!b!c+!abc");
			        else if(a[0]==1 && a[2]==1 &&a[5]==1)
			        	printf("!a!b!c+!abc+a!bc");
			        else if(a[0]==1 && a[2]==1 &&a[6]==1)
			            printf("!a!b!c+bc");
			        else if(a[0]==1 && a[2]==1 &&a[7]==1)
		        	            printf("!a!b!c+!abc+ab!c");
			        else if(a[0]==1 && a[3]==1 &&a[4]==1)
			        	printf("!a!c+!b!c");
			        else if(a[0]==1 && a[3]==1 &&a[5]==1)
		        		printf("!a!c+a!bc");
			        else if(a[0]==1 && a[3]==1 &&a[6]==1)
		        		printf("!a!c+abc");
			        else if(a[0]==1 && a[3]==1 &&a[7]==1)
	        			printf("!a!c+ab!c");
			        else if(a[0]==1 && a[4]==1 &&a[5]==1)
			        	printf("!b!c+a!b");
			        else if(a[0]==1 && a[4]==1 &&a[6]==1)
		        		   printf("!b!c+abc");
			        else if(a[0]==1 && a[4]==1 &&a[7]==1)
		        		   printf("!b!c+a!c");
			        else if(a[0]==1 && a[5]==1 &&a[6]==1)
			        	  printf("ac+!a!b!c");
			        else if(a[0]==1 && a[5]==1 &&a[7]==1)
			        	  printf("!a!b!c+a!bc+ab!c");
			        else if(a[0]==1 && a[6]==1 &&a[7]==1)
		                            printf("!a!b!c+ab");
			        else if(a[1]==1 && a[2]==1 &&a[3]==1)
			        	printf("!ac+!ab");
		        	       else if(a[1]==1 && a[2]==1 &&a[4]==1)
			              printf("!ac+a!b!C");
		        	        else if(a[1]==1 && a[2]==1 &&a[5]==1)
			        	printf("!ac+!bc");
			        else if(a[1]==1 && a[2]==1 &&a[6]==1)
		        		printf("!ac+bc");
			        else if(a[1]==1 && a[2]==1 &&a[7]==1)
		     	              printf("!ac+ab!c");
			        else if(a[1]==1 && a[3]==1 &&a[4]==1)
			        	printf("!a!bc+!ab!c+a!b!c");
			        else if(a[1]==1 && a[3]==1 &&a[5]==1)
			        	printf("!bc+!ab!c");
			        else if(a[1]==1 && a[3]==1 &&a[6]==1)
		        		printf("!a!bc+!ab!c+abc");
			        else if(a[1]==1 && a[3]==1 &&a[7]==1)
		        		printf("!a!bc+b!c");
			        else if(a[1]==1 && a[4]==1 &&a[5]==1)
			        	printf("!bc+a!b");
			        else if(a[1]==1 && a[4]==1 &&a[6]==1)
			        	printf("!a!bc+a!b!c+abc");
			        else if(a[1]==1 && a[4]==1 &&a[7]==1)
			        	printf("!a!bc+a!b!c+ab!c");
			        else if(a[1]==1 && a[5]==1 &&a[6]==1)
			        	printf("!bc+ac");
			        else if(a[1]==1 && a[5]==1 &&a[7]==1)
			        	printf("!bc+ab!c");
			        else if(a[1]==1 && a[6]==1 &&a[7]==1)
				        printf("!a!bc+ab");
			        else if(a[2]==1 && a[3]==1 &&a[4]==1)
        				printf("!ab+a!b!c");
			        else if(a[2]==1 && a[3]==1 &&a[5]==1)
			        	printf("!a+a!bc");
			        else if(a[2]==1 && a[3]==1 &&a[6]==1)
			             printf("!ab+bc");
		        	        else if(a[2]==1 && a[3]==1 &&a[7]==1)
			             printf("!ab+b!c");
			        else if(a[2]==1 && a[4]==1 &&a[5]==1)
			        	printf("a!b+!abc");
			        else if(a[2]==1 && a[4]==1 &&a[6]==1)
			        	printf("bc+a!b!c");
			        else if(a[2]==1 && a[4]==1 &&a[7]==1)
			              printf("!abc+a!b!c+ab!c");
			        else if(a[2]==1 && a[5]==1 &&a[6]==1)
			        	printf("bc+ac");
			        else if(a[2]==1 && a[5]==1 &&a[7]==1)
			        	printf("!abc+a!bc+ab!c");
			        else if(a[2]==1 && a[6]==1 &&a[7]==1)
			        	printf("bc+ab");
			        else if(a[3]==1 && a[4]==1 &&a[5]==1)
			        	printf("a!b+!ab!c");
			        else if(a[3]==1 && a[4]==1 &&a[6]==1)
			        	printf("!ab!c+a!b!c+abc");
			        else if(a[3]==1 && a[4]==1 &&a[7]==1)
				        printf("b!c+a!b!c");
			        else if(a[3]==1 && a[5]==1 &&a[6]==1)
			        	printf("!ab!c+ac");
			        else if(a[3]==1 && a[5]==1 &&a[7]==1)
			        	printf("a!bc+b!c");
		                     else if(a[3]==1 && a[6]==1 &&a[7]==1)
			        	printf("ab+b!c");
			        else if(a[4]==1 && a[5]==1 &&a[6]==1)
        				printf("a!b+ac");
			        else if(a[4]==1 && a[5]==1 &&a[7]==1)
			        	printf("a!b+ab!c");
	        		        else if(a[4]==1 && a[6]==1 &&a[7]==1)
			        	printf("ab+a!b!c");
	        		        else if(a[5]==1 && a[6]==1 &&a[7]==1)
			        	printf("ac+ab");
     }
void Case4()
{
                                 if(a[0]==1 && a[1]==1 && a[2]==1 && a[3]==1)
                                         printf("!a");

                                 else if(a[4]==1 && a[5]==1 && a[6]==1 && a[7]==1)
                                         printf("a");

                                 else if(a[0]==1 && a[1]==1 && a[4]==1 && a[5]==1)
                                         printf("!b");

                                 else if(a[1]==1 && a[2]==1 && a[5]==1 && a[6]==1)
                                         printf("c");

                                 else if(a[3]==1 && a[2]==1 && a[6]==1 && a[7]==1)
                                         printf("b");

                                 else if(a[0]==1 && a[3]==1 && a[4]==1 && a[7]==1)
                                         printf("!c");

                                 else if(a[0]==1 && a[3]==1 && a[5]==1 && a[6]==1)
                                         printf("!a!c+ac");

                                 else if(a[1]==1 && a[2]==1 && a[4]==1 && a[7]==1)
                                         printf("a!c+!ac");

                                 else if(a[0]==1 && a[1]==1 && a[6]==1 && a[7]==1)
                                         printf("!a!b+ab");

                                 else if(a[2]==1 && a[3]==1 && a[4]==1 && a[5]==1)
                                         printf("!ab+a!b");

                                 else if(a[2]==1 && a[3]==1 && a[5]==1 && a[6]==1)
                                         printf("!ab+ac");

                                 else if(a[0]==1 && a[1]==1 && a[5]==1 && a[6]==1)
                                         printf("!a!b+ac");

                                 else if(a[2]==1 && a[3]==1 && a[4]==1 && a[6]==1)
                                         printf("a!b!c+bc+!ab");

                                 else if(a[0]==1 && a[1]==1 && a[5]==1 && a[7]==1)
                                         printf("!a!b+ab!c+!bc");

                                 else if(a[0]==1 && a[1]==1 && a[2]==1 && a[7]==1)
                                         printf("!a!b+!ac+ab!c");

                                 else if(a[1]==1 && a[2]==1 && a[3]==1 && a[4]==1)
                                         printf("a!b!c+!ac+!ab");

                                 else if(a[0]==1 && a[1]==1 && a[2]==1 && a[4]==1)
                                         printf("!a!b+!ac+!b!c");

                                 else if(a[1]==1 && a[2]==1 && a[3]==1 && a[7]==1)
                                         printf("!ac+!ab+b!c");

                                 else if(a[0]==1 && a[1]==1 && a[2]==1 && a[5]==1)
                                         printf("!a!b+!ac+!bc");

                                 else if(a[1]==1 && a[2]==1 && a[3]==1 && a[6]==1)
                                         printf("!ab+!ac+bc");

                                 else if(a[0]==1 && a[1]==1 && a[2]==1 && a[6]==1)
                                         printf("!a!b+!ac+bc");

                                 else if(a[1]==1 && a[2]==1 && a[3]==1 && a[5]==1)
                                         printf("!ab+!ac+!bc");

                                 else if(a[0]==1 && a[2]==1 && a[5]==1 && a[7]==1)
                                         printf("!a!b!c+a!bc+!abc+ab!c");

                                 else if(a[1]==1 && a[3]==1 && a[4]==1 && a[6]==1)
                                         printf("!a!bc+!ab!c+a!b!c+abc");

                                 else if(a[0]==1 && a[2]==1 && a[4]==1 && a[6]==1)
                                         printf("bc+!b!c");

                                 else if(a[1]==1 && a[3]==1 && a[5]==1 && a[7]==1)
                                         printf("b!c+!bc");

                                 else if(a[0]==1 && a[2]==1 && a[3]==1 && a[5]==1)
                                         printf("!a!c+!ab+a!bc");

                                 else if(a[0]==1 && a[1]==1 && a[3]==1 && a[6]==1)
                                         printf("!a!c+!a!b+abc");

                                 else if(a[1]==1 && a[3]==1 && a[5]==1 && a[6]==1)
                                         printf("!bc+!ab!c+!bc");

                                 else if(a[1]==1 && a[2]==1 && a[5]==1 && a[7]==1)
                                         printf("!ab!c+!ac+!bc");

                                 else if(a[0]==1 && a[2]==1 && a[3]==1 && a[4]==1)
                                         printf("!ab+!b!c");

                                 else if(a[0]==1 && a[1]==1 && a[3]==1 && a[7]==1)
                                         printf("!a!b+b!c");

                                 else if(a[0]==1 && a[1]==1 && a[4]==1 && a[6]==1)
                                         printf("!a!b+abc+!b!c");

                                 else if(a[2]==1 && a[3]==1 && a[7]==1 && a[5]==1)
                                         printf("!ab+a!bc+b!c");

                                 else if(a[1]==1 && a[3]==1 && a[4]==1 && a[5]==1)
                                         printf("a!b+!ab!c+!bc");

                                 else if(a[3]==1 && a[1]==1 && a[6]==1 && a[7]==1)
                                         printf("!a!bc+ab+b!c");

                                 else if(a[4]==1 && a[1]==1 && a[2]==1 && a[6]==1)
                                         printf("a!b!c+!ac+bc");

                                 else if(a[0]==1 && a[3]==1 && a[5]==1 && a[6]==1)
                                         printf("a!bc+!a!c+b!c");

                                 else if(a[0]==1 && a[3]==1 && a[4]==1 && a[6]==1)
                                         printf("!a!c+abc+!b!c");

                                 else if(a[0]==1 && a[4]==1 && a[2]==1 && a[7]==1)
                                         printf("!abc+ab!c+!b!c");

                                 else if(a[3]==1 && a[1]==1 && a[4]==1 && a[7]==1)
                                         printf("!a!bc+a!b!c+bc");

                                 else if(a[1]==1 && a[3]==1 && a[6]==1 && a[5]==1)
                                         printf("!ab!c+ac+!bc");

                                 else if(a[0]==1 && a[6]==1 && a[2]==1 && a[5]==1)
                                         printf("!a!b!c+ac+bc");

                                 else if(a[2]==1 && a[3]==1 && a[7]==1 && a[4]==1)
                                         printf("!ab+a!c");

                                 else if(a[0]==1 && a[1]==1 && a[7]==1 && a[4]==1)
                                         printf("!a!b+a!c");

                                 else if(a[0]==1 && a[3]==1 && a[4]==1 && a[5]==1)
                                         printf("a!b+!a!c");

                                 else if(a[4]==1 && a[3]==1 && a[7]==1 && a[6]==1)
                                         printf("ab+b!c+a!c");

                                 else if(a[2]==1 && a[0]==1 && a[4]==1 && a[5]==1)
                                         printf("!a!b+a!b+!abc");

                                 else if(a[6]==1 && a[3]==1 && a[7]==1 && a[5]==1)
                                         printf("ab+ac+b!c");

                                 else if(a[0]==1 && a[3]==1 && a[1]==1 && a[5]==1)
                                         printf("!a!b+!a!c+!bc");

                                 else if(a[2]==1 && a[0]==1 && a[3]==1 && a[7]==1)
                                         printf("!ab+!a!c+b!c");

                                 else if(a[1]==1 && a[6]==1 && a[7]==1 && a[5]==1)
                                         printf("!bc+ab+ac");

                                 else if(a[2]==1 && a[4]==1 && a[6]==1 && a[5]==1)
                                         printf("bc+ac+a!b");

                                 else if(a[1]==1 && a[4]==1 && a[6]==1 && a[5]==1)
                                         printf("!bc+a!b+ac");

                                 else if(a[2]==1 && a[6]==1 && a[7]==1 && a[5]==1)
                                         printf("bc+ac+ab");

                                 else if(a[2]==1 && a[1]==1 && a[7]==1 && a[6]==1)
                                         printf("!ac+ab");

                                 else if(a[4]==1 && a[3]==1 && a[6]==1 && a[5]==1)
                                          printf("a!b+ac+!ab!c");

                                 else if(a[2]==1 && a[1]==1 && a[4]==1 && a[5]==1)
                                         printf("!ac+a!b");

                                 else if(a[2]==1 && a[0]==1 && a[7]==1 && a[6]==1)
                                         printf("!a!b!c+bc+ab");

                                 else if(a[0]==1 && a[6]==1 && a[7]==1 && a[5]==1)
                                         printf("!a!b!c+ab+ac");

                                 else if(a[0]==1 && a[4]==1 && a[6]==1 && a[5]==1)
                                         printf("ac+a!b+!b!c");

                                 else if(a[1]==1 && a[4]==1 && a[7]==1 && a[6]==1)
                                         printf("a!b!c+!a!bc+ab");

                                 else if(a[2]==1 && a[4]==1 && a[7]==1 && a[5]==1)
                                         printf("!abc+a!b+a!c");

                                 else if(a[0]==1 && a[4]==1 && a[7]==1 && a[6]==1)
                                         printf("!b!c+ab");

                                 else if(a[3]==1 && a[4]==1 && a[7]==1 && a[5]==1)
                                         printf("b!c+a!b");

                                 else if(a[0]==1 && a[3]==1 && a[7]==1 && a[6]==1)
                                         printf("ab+!a!c");

                                 else if(a[0]==1 && a[4]==1 && a[7]==1 && a[5]==1)
                                         printf("a!b+a!c+!b!c");

                                 else if(a[2]==1 && a[0]==1 && a[3]==1 && a[6]==1)
                                         printf("bc+!a!c");

                                 else if(a[1]==1 && a[4]==1 && a[7]==1 && a[5]==1)
                                         printf("a!c+!bc");
}

void Case5()
{
                                                   if(a[0]==0 && a[1]==0 && a[2]==0)
					printf("a+bc");
			 	  else if(a[0]==0 && a[1]==0 && a[3]==0)
					printf("a+bc");
				  else if(a[0]==0 && a[1]==0 && a[4]==0)
					printf("b+ac");
				  else if(a[0]==0 && a[1]==0 && a[5]==0)
					printf("b+a!c");
				  else if(a[0]==0 && a[1]==0 && a[6]==0)
					printf("!ab+b!c+a!b");
				  else if(a[0]==0 && a[1]==0 && a[7]==0)
					printf("a!b+!ab+bc");
				  else if(a[0]==0 && a[2]==0 && a[3]==0)
					printf("a+!bc");
				 else if(a[0]==0 && a[2]==0 && a[4]==0)
					printf("!bc+b!c+ac");
				  else if(a[0]==0 && a[2]==0 && a[5]==0)
					printf("b!c+ab+a!c+!a!bc");
				  else if(a[0]==0 && a[2]==0 && a[6]==0)
					printf("!bc+b!c+a!b");
			              else if(a[0]==0 && a[2]==0 && a[7]==0)
					printf("!ab!c+!bc+a!b+ac");
				 else if(a[0]==0 && a[3]==0 && a[4]==0)
					printf("c+ab");
				 else if(a[0]==0 && a[3]==0 && a[5]==0)
					printf("a!c+bc+!ac");
				 else if(a[0]==0 && a[3]==0 && a[6]==0)
					printf("!ac+a!b+a!c");
				 else if(a[0]==0 && a[3]==0 && a[7]==0)
					printf("c+a!b");
				 else if(a[0]==0 && a[4]==0 && a[5]==0)
					printf("b+!ac");
				 else if(a[0]==0 && a[4]==0 && a[6]==0)
					printf("!bc+b!c+!ac");
				 else if(a[0]==0 && a[4]==0 && a[7]==0)
					printf("c+!ab");
				 else if(a[0]==0 && a[5]==0 && a[6]==0)
					printf("!ac+b!c+a!c");
				 else if(a[0]==0 && a[5]==0 && a[7]==0)
					printf("a!b!c+!ac+bc+!ab");
				 else if(a[0]==0 && a[6]==0 && a[7]==0)
					printf("a!b+!bc+!ab");
				 else if(a[1]==0 && a[2]==0 && a[3]==0)
					printf("a+!b!c");
				 else if(a[1]==0 && a[2]==0 && a[4]==0)
					printf("b!c+ac+!a!c");
				 else if(a[1]==0 && a[2]==0 && a[5]==0)
					printf("!b!c+b!c+ab");
				 else if(a[1]==0 && a[2]==0 && a[6]==0)
					printf("!b!c+b!c+a!b");
				 else if(a[1]==0 && a[2]==0 && a[7]==0)
					printf("!b!c+ac+!a!c");
				 else if(a[1]==0 && a[3]==0 && a[4]==0)
					printf("!a!b!c+bc+ac+ab");
				else if(a[1]==0 && a[3]==0 && a[5]==0)
					printf("!b!c+bc+ab");
				else if(a[1]==0 && a[3]==0 && a[6]==0)
					printf("!b!c+a!b+a!c+!abc");
				else if(a[1]==0 && a[3]==0 && a[7]==0)
					printf("!b!c+bc+a!b");
			            else if(a[1]==0 && a[4]==0 && a[5]==0)
					printf("b+!a!c");
				else if(a[1]==0 && a[4]==0 && a[6]==0)
					printf("!ab+!a!c+b!c");
				else if(a[1]==0 && a[4]==0 && a[7]==0)
					printf("!a!c+bc+ac");
				else if(a[1]==0 && a[5]==0 && a[6]==0)
					printf("!b!c+b!c+!ab");
				else if(a[1]==0 && a[5]==0 && a[7]==0)
					printf("!b!c+bc+!ab");
				else if(a[1]==0 && a[6]==0 && a[7]==0)
					printf("!b!c+!ab+a!b");
				else if(a[2]==0 && a[3]==0 && a[4]==0)
					printf("!a!b+!bc+ab");
				else if(a[2]==0 && a[3]==0 && a[5]==0)
					printf("!a!b+!b!c+ab");
				else if(a[2]==0 && a[3]==0 && a[6]==0)
					printf("!b+a!c");
				else if(a[2]==0 && a[3]==0 && a[7]==0)
					printf("!b+ac");
				else if(a[2]==0 && a[4]==0 && a[5]==0)
					printf("!a!b+ab+b!c");
				else if(a[2]==0 && a[4]==0 && a[6]==0)
					printf("!a!b+!bc+b!c");
				else if(a[2]==0 && a[4]==0 && a[7]==0)
					printf("!a!b+!a!c+ac");
				else if(a[2]==0 && a[5]==0 && a[6]==0)
					printf("!b!c+b!c+!a!b");
			             else if(a[2]==0 && a[5]==0 && a[7]==0)
					printf("!b!c+!a!b+!a!c+abc");
				else if(a[2]==0 && a[6]==0 && a[7]==0)
					printf("!b+!a!c");
				 else if(a[3]==0 && a[4]==0 && a[5]==0)
					printf("!a!b+bc+ab");
				else if(a[3]==0 && a[4]==0 && a[6]==0)
					printf("!a!b+!bc+!ac+ab!c");
				else if(a[3]==0 && a[4]==0 && a[7]==0)
					printf("c+!a!b");
				else if(a[3]==0 && a[5]==0 && a[6]==0)
					printf("!a!b+!ac+a!c");
				else if(a[3]==0 && a[6]==0 && a[7]==0)
					printf("!b+!ac");
				else if(a[4]==0 && a[5]==0 && a[6]==0)
					printf("!a+b!c");
				else if(a[4]==0 && a[5]==0 && a[7]==0)
					printf("!a+bc");
				else if(a[4]==0 && a[6]==0 && a[7]==0)
					printf("!a+!bc");
			            else if(a[5]==0 && a[6]==0 && a[7]==0)
					printf("!a+!b!c");
}

void Case6()
{
                                           if(a[0]==0 && a[1]==0)
        				   printf("b+a");
        			   else if(a[0]==0 && a[2]==0)
        				   printf("a+!bc+b!C");
        			   else if(a[0]==0 && a[3]==0)
        				   printf("a+c");
        			   else if(a[0]==0 && a[4]==0)
        				   printf("c+b");
        			   else if(a[0]==0 && a[5]==0)
        				   printf("!ac+b!c+a!c");
        			   else if(a[0]==0 && a[6]==0)
        				   printf("a!b+!ac+b!c");
        			   else if(a[0]==0 && a[7]==0)
        				   printf("c+a!b+!ab");
        			   else if(a[1]==0 && a[2]==0)
        				   printf("a+!a!c");
        			   else if(a[1]==0 && a[3]==0)
        				   printf("a+!b!c+bc");
        			   else if(a[1]==0 && a[4]==0)
        				   printf("b+a!bc+!a!b!c");
        			   else if(a[1]==0 && a[5]==0)
        				   printf("b+!b!c");
        			   else if(a[1]==0 && a[6]==0)
        				   printf("!b!c+a!b+!ab+b!c");
      			  else if(a[1]==0 && a[7]==0)
                                                        printf("!a!c+bc+a!b");
		               else if(a[2]==0 && a[3]==0)
           			                printf("!b+ab");
           			else if(a[2]==0 && a[4]==0)
           				printf("!a!b+ac+b!c");
          			 else if(a[2]==0 && a[5]==0)
          				 printf("!a!b+!b!c+ab+b!c");
          			 else if(a[2]==0 && a[6]==0)
          				 printf("!b+b!c");
           			else if(a[2]==0 && a[7]==0)
           				printf("!b+!a!c+ac");
           			else if(a[3]==0 && a[4]==0)
           				printf("c+!a!b+ab");
           			else if(a[3]==0 && a[5]==0)
           				printf("!b!c+!ac+ab");
           			else if(a[3]==0 && a[6]==0)
           				printf("!b+!ac+a!c");
           			else if(a[3]==0 && a[7]==0)
           				printf("!b+c");
           			else if(a[4]==0 && a[5]==0)
           				printf("!a+ab");
           			else if(a[4]==0 && a[6]==0)
           				printf("!a+!bc+b!c");
           			else if(a[4]==0 && a[7]==0)
           				printf("!a+c");
           			else if(a[5]==0 && a[6]==0)
           				printf("!a+a!c");
           			else if(a[5]==0 && a[7]==0)
           				printf("!a+!b!c+bc");
           			else if(a[6]==0 && a[7]==0)
           				printf("!a+!b");
}

void Case7()
{
                                    if(a[0]==0)
           				printf("b+!bc+a!b!c");
           			else if(a[1]==0)
           				printf("b+!b!c+a!bc");
           			else if(a[2]==0)
           				printf("!b+b!c+abc");
           			else if(a[3]==0)
           				printf("!b+bc+ab!c");
           			else if(a[4]==0)
           				printf("b+!bc+!a!b!c");
           			else if(a[5]==0)
           				printf("b+!b!c+!a!bc");
           			else if(a[6]==0)
           				printf("!b+b!c+!abc");
           			else
           				printf("!b+bc+!ab!c");
}

void Case8()
{
       printf(“1”);
}














