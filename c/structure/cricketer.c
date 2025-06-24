#include<stdio.h>
#include<string.h>
int main(){
    typedef struct cricketerdetails{
        char first_name[15];
        char last_name[15];
        int age;
        int test_matches;
    }cricketer;
    cricketer arr[3];
    for (int i = 0; i <3; i++)
    {
        printf("enter first name:");
        scanf("%s",arr[i].first_name);
        printf("enter last name:");
        scanf("%s",arr[i].last_name);
        printf("enter age:");
        scanf("%d",&arr[i].age);
        printf("enter no. of test match:");
        scanf("%d",&arr[i].test_matches);
    }
    for (int i = 0; i <3; i++)
    {
        printf("Name:%s %s\n",arr[i].first_name,arr[i].last_name);
        printf("Age: %d\n",arr[i].age);
        printf("No. of test matches played: %d\n",arr[i].test_matches);
    }
    return 0;
}