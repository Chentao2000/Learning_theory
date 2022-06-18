#include <stdio.h>
int MAX(int A[], int n)
{
    int Thissum,Maxsum = 0;
    int i = 0;
    for(i=0; i<n; i++)
    {
        Thissum += A[i];
        if(Thissum>Maxsum)
        {
           Maxsum = Thissum;
        }
        else if(Thissum<0)
        {
            Thissum=0;
        }
    }
    printf("%d\n", Maxsum);
}
int main()
{
    int arr[] = {-1, 3, -2, 4, -6, 1, 6, -1};
    MAX(arr, 8);
    return 0;
}
