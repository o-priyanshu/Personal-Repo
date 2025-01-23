int TSRS(int n);
int main()
{
    int n,a;
    printf("Enter a number : ");
    scanf("%d",&n);

    TSRN(n);

return 0;
}

int TSRS(int n)
{
    int sum=0,i;
    for ( i = 1; i <=n ; i++)
    {
        sum+=i;
    }    
 
printf("%d",sum);

}