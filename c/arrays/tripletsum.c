#include<stdio.h>
int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int x=12;
    int totaltriplets=0;
    for (int i = 0; i<=6; i++)
    {
        for (int j = i+1; j<=6; j++)
        {
            for (int k = j+1; k<=6; k++)
            {
                if (arr[i]+arr[j]+arr[k]==x)
                {
                    totaltriplets++;
                    printf("(%d,%d,%d)\n",arr[i],arr[j],arr[k]);
                }
            }
        }
    }
    printf("%d",totaltriplets);
    return 0;
}