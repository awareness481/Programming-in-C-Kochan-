/*
 13. Modify the sort() function from Program 7.12 to take a third argument indicating whether the array is to be sorted in ascending or descending order. Then modify the sort() algorithm to correctly sort the array into the indicated order.
 */
#include <stdio.h>
#include <stdbool.h>

void sort (int a[], int n, bool asc_or_desc);
void print(int a[], int n);

int main(void) {
    
    int sampleArr[] = {-22, 100, -100, 56, 3, 3333, 42, 0, -1, 1};
    printf("Type 1 for descending sort or 0 for ascending sort\n");
    bool order;
    int temp;
    scanf("%d", &temp);
    order = temp;
    

    sort(sampleArr, sizeof(sampleArr)/sizeof(sampleArr[0]), order);
    
    return 0;
}


void sort (int a[], int n, bool asc_or_desc)
{
     int temp;
     if (asc_or_desc == 1) {
        for (int i = 0; i < n - 1; ++i ) {
            for (int j = i + 1; j < n; ++j ) {
                if ( a[i] < a[j] ) {
                 temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
                }
            }
         }
     } else {
       for (int i = 0; i < n - 1; ++i ) {
          for (int j = i + 1; j < n; ++j ) {
            if ( a[i] > a[j] ) {
                 temp = a[i];
                 a[i] = a[j];
                 a[j] = temp;
             }
           }
       }
     }
    print(a, n);
}

void print(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%i\n", a[i]);
    }
}
