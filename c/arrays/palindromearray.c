#include<stdio.h>
#include<stdbool.h>
int main(){
    int arr[7]={1,2,3,4,3,2,1};
    bool flag=true;
    for (int i = 0; i <=6; i++)
    {
        // if (arr[i]==arr[6-i])
        // {
        //     flag=true;
        // }
        if (arr[i]!=arr[6-i])
        {
            flag=false;
            break;
        }     
    }
    if (flag==true)
    {
        printf("the given array is  palindrone");
    }
    else printf("the given array is not palindrone"); 
    return 0;
}