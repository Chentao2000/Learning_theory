#include <stdio.h>
int MAX(int A[], int n)
{
    int Thissum, Maxsum = 0;
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            Thissum = 0; //每一次j跑完Thissum都要归0
            for(k=i;k<=j;k++)
            {
                Thissum += A[k];
                if(Thissum>Maxsum)
                    Maxsum = Thissum;     
            }
        }
    }
    printf("%d\n", Maxsum);
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    MAX(arr, 5);
    return 0;
}
