#include<stdio.h>
#include<string.h>
#include<string>
int main()
    {
    char x[10],y[10],z[10];
    char c1[10],c2[10],c3[10],c4[10];
    char d1[10],d2[10],d3[10],d4[10],d5[10],d6[10],d7[10],d8[10],d9[10],d10[10];
    int beg=0,in=0,in1=0,in2=0,el;
    int sum;
    int A(char g[]);
    void B(int t);
    scanf("%s %s %s %s",c1,c2,c3,c4);
    in=A(c4);
    sum=transform(d);getchar();
    beg=beg+in;
     
    for(int mm;mm<1000;mm++)
    {
        scanf("%s %s %s",x,y,z);
        if(strcmp(x,"����")==0)
            break;
        if(strcmp(y,"����")==0)
        {   in1=loading(z);
        begin=begin-in1;}
        if(strcmp(y,"����")==0)
        {   in2=loading(z);
        begin=begin+in2;}
if(sum<=10) result(sum);
    if(sum>10){
        int a;
        a=sum/10;
        if(a==1) printf("ʮ");
        else{
            result(a);
            printf("ʮ");
        }
        int b; 
        b=sum%10;   
        if(b!=0) result(b);
    }
    return 0;
if(beg>el)
        for (int g1=1;g1<len-1; g1+=2) 
        {
            
            printf("%c%c",d7[i1],d7[i1+1]);
        }
    else
        for (int g2=1;g2<len1-1;g2+=2) 
        {
        
            printf("%c%c",d10[g2],d10[g2+1]);
        }

}
int A(char g[10])
{
    if(strcmp("��",g)==0)return 0;
    if(strcmp("һ",g)==0)return 1;
    if(strcmp("��",g)==0)return 2;
    if(strcmp("��",g)==0)return 3;
    if(strcmp("��",g)==0)return 4;
    if(strcmp("��",g)==0)return 5;
    if(strcmp("��",g)==0)return 6;
    if(strcmp("��",g)==0)return 7;
    if(strcmp("��",g)==0)return 8;
    if(strcmp("��",g)==0)return 9;
    if(strcmp("ʮ",g)==0)return 10;
}
void M(char str[]){
    if(strcmp(" ���� һ",str)==0)sum+=1;
    if(strcmp(" ���� ��",str)==0)sum+=2;
    if(strcmp(" ���� ��",str)==0)sum+=3;
    if(strcmp(" ���� ��",str)==0)sum+=4;
    if(strcmp(" ���� ��",str)==0)sum+=5;
    if(strcmp(" ���� ��",str)==0)sum+=6;
    if(strcmp(" ���� ��",str)==0)sum+=7;
    if(strcmp(" ���� ��",str)==0)sum+=8;
    if(strcmp(" ���� ��",str)==0)sum+=9;
    if(strcmp(" ���� ʮ",str)==0)sum+=10;
}
void N(char str[]){
    if(strcmp(" ���� һ",str)==0)sum-=1;
    if(strcmp(" ���� ��",str)==0)sum-=2;
    if(strcmp(" ���� ��",str)==0)sum-=3;
    if(strcmp(" ���� ��",str)==0)sum-=4;
    if(strcmp(" ���� ��",str)==0)sum-=5;
    if(strcmp(" ���� ��",str)==0)sum-=6;
    if(strcmp(" ���� ��",str)==0)sum-=7;
    if(strcmp(" ���� ��",str)==0)sum-=8;
    if(strcmp(" ���� ��",str)==0)sum-=9;
    if(strcmp(" ���� ʮ",str)==0)sum-=10;
}
void B(int t)
{
    if(t==0){printf("��");} 
    if(t==1){printf("һ");} 
    if(t==2){printf("��");} 
    if(t==3){printf("��");} 
    if(t==4){printf("��");} 
    if(t==5){printf("��");} 
    if(t==6){printf("��");} 
    if(t==7){printf("��");} 
    if(t==8){printf("��");} 
    if(t==9){printf("��");} 
    if(t==10){printf("ʮ");}
}