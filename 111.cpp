#include<stdio.h>
#include<string.h>
int sum;
int main()
    {
    char c1[100],c2[100],c3[100],c4[100],x[100],y[100],z[100];
	
    int A(char g[]);
	int M(char str[]);
	int N(char str[]);
    void B(int t);
    scanf("%s %s %s %s",c1,c2,c3,c4);
	if(strcmp(c1,"整数")==0)
	{
		sum=A(c4);//将c4转换成小数
		printf("%d\n",sum);
	}
	else 
		printf("请输入整数\n");
    for(int mm=0;mm<1000;mm++)
    {
        scanf("%s",x);
		if(strcmp(c2,x)==0){//将此次输入的变量与之前的进行判断
				scanf("%s %s",y,z);
				if(strcmp(y,"减少")==0)
				{   sum=N(z);}
				else
				{   sum=M(z);}
				printf("%d\n",sum);
		}
		else if(strcmp(x,"看看")==0){
			scanf("%s",y);
			if(strcmp(c2,y)==0){
				if(sum<=10) {
					B(sum);//将小数变成汉字
					printf("\n");
				}
				if(sum>10&&sum<19){
					if(sum/10!=1)
					{
						B(sum/10);
						printf("十");
					}
					else{
						printf("十");
						B(sum%10);
					}
					printf("\n");
				}
			}
			else{
				printf("未输入此变量");
				return 0;
			}
		}
		else
		{	printf("未输入此变量");
			return 0;
		}
	}
}
int A(char g[10])
{
    if(strcmp("零",g)==0)return 0;
    if(strcmp("一",g)==0)return 1;
    if(strcmp("二",g)==0)return 2;
    if(strcmp("三",g)==0)return 3;
    if(strcmp("四",g)==0)return 4;
    if(strcmp("五",g)==0)return 5;
    if(strcmp("六",g)==0)return 6;
    if(strcmp("七",g)==0)return 7;
    if(strcmp("八",g)==0)return 8;
    if(strcmp("九",g)==0)return 9;
    if(strcmp("十",g)==0)return 10;
}
int M(char str[]){
    if(strcmp("一",str)==0)return sum+1;
    if(strcmp("二",str)==0)return sum+2;
    if(strcmp("三",str)==0)return sum+3;
    if(strcmp("四",str)==0)return sum+4;
    if(strcmp("五",str)==0)return sum+5;
    if(strcmp("六",str)==0)return sum+6;
    if(strcmp("七",str)==0)return sum+7;
    if(strcmp("八",str)==0)return sum+8;
    if(strcmp("九",str)==0)return sum+9;
    if(strcmp("十",str)==0)return sum+10;
}
int N(char str[]){
	int sum1;
	sum1=A(str);
    if(strcmp("一",str)==0)return sum-1;
    if(strcmp("二",str)==0)return sum-2;
    if(strcmp("三",str)==0)return sum-3;
    if(strcmp("四",str)==0)return sum-4;
    if(strcmp("五",str)==0)return sum-5;
    if(strcmp("六",str)==0)return sum-6;
    if(strcmp("七",str)==0)return sum-7;
    if(strcmp("八",str)==0)return sum-8;
    if(strcmp("九",str)==0)return sum-9;
    if(strcmp("十",str)==0)return sum-10;
}
void B(int t)
{
    if(t==0){printf("零");} 
    if(t==1){printf("一");} 
    if(t==2){printf("二");} 
    if(t==3){printf("三");} 
    if(t==4){printf("四");} 
    if(t==5){printf("五");} 
    if(t==6){printf("六");} 
    if(t==7){printf("七");} 
    if(t==8){printf("八");} 
    if(t==9){printf("九");} 
    if(t==10){printf("十");}
}
