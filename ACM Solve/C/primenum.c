#include <stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
    int n, i, flag = 0;
    scanf("%d",&n);

    for(i=2; i<=n/2; ++i)
    {
        // condition for nonprime number
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }

    if (flag==0)
        printf("yes\n");
    else
        printf("no\n");
}
    return 0;
}
