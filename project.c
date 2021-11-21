#include<stdio.h>
#include<stdlib.h>

void gale_shapley_algorithm(int n)
{
    int Stud_Pref[n+1][n+1];//prefrence matrix of universities given by students(input matrix)
    int	Uni_Pref[n+1][n+1];//prefrence matrix of students given by universities(input matrix)
    int Pref[n+1][n+1];// Stores preference between the all pairs of students and universities
		       // Pref[i][j] tells us about prefernce of ith student by jth university
		      // lower value means higher priority
    int	enrolled[n+1];//stores info about students who's enrollment process is completed
    int	present[n+1];//present[i] is the student who is currently enrolled in ith University 
    int	last_uni[n+1];
    int flag,i,j,s,u;
    printf("Enter Preference List for Student: \n");
    for (i=1;i<=n;i++)
    {
		for (j=1;j<=n;j++) 
        {
			scanf("%d",&Stud_Pref[i][j]);
		}
	}
    printf("Enter Preference List for University: \n");
    for (i=1;i<=n;i++)
    {
		for (j=1;j<=n;j++) 
        {
			scanf("%d",&Uni_Pref[i][j]);
		}
	}
    for(i=0;i<=n;i++)
    {
        present[i]=0;
        enrolled[i]=0;
        last_uni[i]=0;
    }
    for (j=0;j<=n;++j) 
    {
		for (i=0 ;i<=n;++i) 
        {
			Pref[Uni_Pref[j][i]][j]=i;
		}
	}
    while(1)
    {
        flag=1;
        for(i=1;i<=n;i++) 
        {
			if(!enrolled[i]) 
            {
				flag = 0;
				break;
			}

		}
        if(flag==1)
			break;
        for(i=1;i<=n;i++)
        {
            if(!enrolled[i]) 
            {
                s=i;
                last_uni[s]++;
                u=Stud_Pref[s][last_uni[s]];
                if(present[u]==0)
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
    printf("Student	 University\n");
	for (i=1;i<=n;i++) 
    {
		printf("%d  %d\n",present[i],i);
	}

}

int main()
{
    
    int n;
    printf("Enter the number of student or university required for matching :");
    scanf("%d",&n);
    gale_shapley_algorithm(n);
}
