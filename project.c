#include<stdio.h>
#include<stdlib.h>

void gale_shaply_algorithm(int n)
{
    int Stud_Pref[n][n],Uni_Pref[n][n];
    int Pref[n][n],enrolled[n],present[n],last_uni[n];
    int flag,i,j,s,u;
    printf("Enter Preference List for Student: \n");
    for (i=0;i<n;i++)
    {
		for (j=0;j<n;j++) 
        {
			scanf("%d",&Stud_Pref[i][j]);
		}
	}
    printf("Enter Preference List for University: \n");
    for (i=0;i<n;i++)
    {
		for (j=0;j<n;j++) 
        {
			scanf("%d",&Uni_Pref[i][j]);
		}
	}
    for (i=0;i<n;i++) 
    {
		for (j=0;j<n;j++) 
        {
			Pref[Uni_Pref[i][j]][i]=j;
		}
	}
    while(1)
    {
        flag=1;
        for(i=0;i<n;i++) 
        {
			if(!enrolled[i]) 
            {
				flag = 0;
				break;
			}

		}
        if(flag==1)
			break;
        for(i=0;i<n;i++)
        {
            if(!enrolled[i]) 
            {
                s=i;
                last_uni[s]=last_uni[s] + 1;
                u=Stud_Pref[u][last_uni[s]];
                if (present[u] == 0)
                {
                    present[u] = s;
					enrolled[s] = 1;
                }
                else 
                if (Pref[s][u]<Pref[present[u]][u]) 
                {
                    enrolled[present[u]] = 0;
					present[u] = s;
					enrolled[s] = 1;
                }
            }
        }

    }
    printf("Man Woman\n");
	for (i=0;i<n;i++) 
    {
		printf("%d  %d\n",present[i],i+1);
	}

}
int main()
{
    int i,j,n;
    printf("Enter the number of student or university required for matching :");
    scanf("%d",&n);
    gale_shaply_algorithm(n);
}
