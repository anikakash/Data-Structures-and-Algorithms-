#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef double dl;
#define pi= acose(-1);

void bubble_sort(ll list[], ll n);
int main()
{
    ll array[100], c;
    int n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter number of %d integer\n", n);
    for(c=0; c < n; c++){
        scanf("%lld", &array[c]);
    }
    bubble_sort(array, n);
    printf("Sorted list ascending order:\n");
    for(c=0; c < n; c++){
        printf("%lld ", array[c]);
    }
    return 0;
}
void bubble_sort(ll list[], ll n)
{
    ll i,j,temp;
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
