#include <stdio.h>
#include <string.h>
int main() {
    int i,n,a,j,z;
    char name[100][100];
    printf("Enter value of n\n");
    scanf("%d",&n);
    fflush(stdin);
    for (i=0;i<n;i++)
    {
        
        fgets(name[i],100,stdin);
    }
    for (i=0;i<n;i++)
    {
        a=strlen(name[i]);
        for (j=0;j<a;j++)
        {
            if (j>0)
            {
                if (name[i][j]==' ')
                {
                    for (z=j;z<a;z++)
                    printf("%c",name[i][z]);
                    break;
                }
            }
            else
            printf("%c",name[i][j]);
        }
    }
    return 0;
}