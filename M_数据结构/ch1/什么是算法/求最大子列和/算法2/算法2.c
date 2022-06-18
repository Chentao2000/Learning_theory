#include <stdio.h>
int MAX(int A[], int n)
{
    int Thissum,Maxsum = 0;
    int i,j;
    for(i=0;i<n;i++)
    {
        Thissum = 0; //每经完一次i，子列和就要归0
        for(j=i;j<n;j++)
        {
            Thissum += A[j];
            if(Thissum>Maxsum)
            {
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
