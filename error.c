#include<stdio.h>
int main()
{ 
    int n;
    int sum=0;
    char *gender,*b,*g;
    *b='b';*g='g';
    printf("enter number of subjects ");
    scanf("%d",&n);
    int marks[n];
    for(int i=0;i<n;i++)
    {
    scanf("%d",&marks[i]);
    }
    printf("enter gender");
    scanf("%c",&(*gender));
    if(*gender==*b)
    {
        for(int i=0;i<n;i++)
        {
        if(i%2==0)
        {
            sum=sum+marks[i];
        }
        } 
        printf("%d",sum);
    }
    else if(*gender==*g)
    {
        for(int i=0;i<n;i++)
        {
        if(i%2!=0)
        {
        sum=sum+marks[i];
        }
        } 
        printf("%d",sum);
    }
    
    
    return 0;
}
