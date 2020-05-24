#include<stdio.h>
void bubble_sort(long list[], long n);
int main()
{
    long array[100], n, c;
    printf("Enter number of elements.\n");
    scanf("%d", &n);
    printf("Enter number of %ld integer.\n", n);
    for(c=0; c < n; c++){
        scanf("%ld", &array[c]);
    }
    bubble_sort(array, n);
    printf("Sorted list ascending order:\n");
    for(c=0; c < n; c++){
        printf("%ld ", array[c]);
    }
    return 0;
}
void bubble_sort(long list[], long n)
{
    long i,j,temp;
    int count =0;
    for(i=0; i<n;i++){
        for(j=0; j<n-i-1; j++){
            if(list[j]>list[j+1]){ // use < to sort in descending order//;
                temp = list[j];
                list[j] = list[j+1];
                list[j+1] = temp;
            }
        }
    }
}
