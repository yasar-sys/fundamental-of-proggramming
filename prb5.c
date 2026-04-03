#include <stdio.h>

int main() {
    int arr[100], n, i, j, count;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d integers: ", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nElements appearing more than once:\n");
    printf("Element\tFrequency\n");

    for(i = 0; i < n; i++) {
        // Check if element is already counted
        int alreadyCounted = 0;
        for(j = 0; j < i; j++) {
            if(arr[j] == arr[i]) {
                alreadyCounted = 1;
                break;
            }
        }
        
        if(!alreadyCounted) {
            // Count frequency
            count = 0;
            for(j = 0; j < n; j++) {
                if(arr[i] == arr[j]) {
                    count++;
                }
            }
            
            // Display only if frequency > 1
            if(count > 1) {
                printf("%d\t%d\n", arr[i], count);
            }
        }
    }

    return 0;
}