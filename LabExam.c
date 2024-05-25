//1) Write a C program to print a pyramid pattern with numbers increased by 1.

/*
#include <stdio.h>

int main() {
    int rows, i, j, number = 1;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf("  "); // Print spaces for pyramid shape
        }

        for (j = 1; j <= i; j++) {
            printf("%d ", number);
            number++;
        }

        printf("\n");
    }

    return 0;
}
*/

//2) Write a C program to display the reverse of a number & check if it is palindrome.

/*
#include <stdio.h>

int main() {
    int n, originalNumber, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &n);

    originalNumber = n;

    // Reverse the number
    while (n != 0) {
        remainder = n % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        n =n/10;
    }

    printf("Reversed number: %d\n", reversedNumber);

    // Check if it is a palindrome
    if (originalNumber == reversedNumber) {
        printf("The number is a palindrome.\n");
    } else {
        printf("The number is not a palindrome.\n");
    }

    return 0;
}
*/

//3) Write a C program to check whether a given number is a prime and use that to find the next prime number, greater than a given number.

/*
#include <stdio.h>

// Function to check if a number is prime
int isPrime(int number) {
    if (number <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= number; i++) {
        if (number % i == 0) {
            return 0;
        }
    }

    return 1;
}

// Function to find the next prime number greater than a given number
int nextPrime(int number) {
    number++;

    while (!isPrime(number)) {
        number++;
    }

    return number;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    int next = nextPrime(n);
    printf("The next prime number greater than %d is %d.\n", n, next);

    return 0;
}
*/

//4) Write C functions to reverse the array elements a) using index notation b) using pointer notation.

/*#include <stdio.h>

// Function to reverse the array using index notation
void reverseArrayIndex(int arr[], int size) {
    int i, temp;

    for (i = 0; i < size / 2; i++) {
        temp = arr[i];
        arr[i] = arr[size - i - 1];
        arr[size - i - 1] = temp;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArrayIndex(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/
/*
#include <stdio.h>

// Function to reverse the array using pointer notation
void reverseArrayPointer(int arr[], int size) {
    int *start = arr;
    int *end = arr + size - 1;
    int temp;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    reverseArrayPointer(arr, size);

    printf("\nReversed array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
*/

//5) Write C functions to print Union and Intersection of array elements. ?????


// #include <stdio.h>

// // Function to print the Union of two arrays
// void printUnion(int arr1[], int size1, int arr2[], int size2) {
//     int i = 0, j = 0;

//     printf("Union of the arrays: ");

//     while (i < size1 && j < size2) {
//         if (arr1[i] < arr2[j]) {
//             printf("%d ", arr1[i]);
//             i++;
//         } else if (arr2[j] < arr1[i]) {
//             printf("%d ", arr2[j]);
//             j++;
//         } else {
//             printf("%d ", arr1[i]);
//             i++;
//             j++;
//         }
//     }

//     // Print the remaining elements of arr1, if any
//     while (i < size1) {
//         printf("%d ", arr1[i]);
//         i++;
//     }

//     // Print the remaining elements of arr2, if any
//     while (j < size2) {
//         printf("%d ", arr2[j]);
//         j++;
//     }

//     printf("\n");
// }

// // Function to print the Intersection of two arrays
// void printIntersection(int arr1[], int size1, int arr2[], int size2) {
//     int i = 0, j = 0;

//     printf("Intersection of the arrays: ");

//     while (i < size1 && j < size2) {
//         if (arr1[i] < arr2[j]) {
//             i++;
//         } else if (arr2[j] < arr1[i]) {
//             j++;
//         } else {
//             printf("%d ", arr1[i]);
//             i++;
//             j++;
//         }
//     }

//     printf("\n");
// }

// int main() {
//     int size1, size2;

//     printf("Enter the size of the first array: ");
//     scanf("%d", &size1);

//     int arr1[size1];

//     printf("Enter the elements of the first array: ");
//     for (int i = 0; i < size1; i++) {
//         scanf("%d", &arr1[i]);
//     }

//     printf("Enter the size of the second array: ");
//     scanf("%d", &size2);

//     int arr2[size2];

//     printf("Enter the elements of the second array: ");
//     for (int i = 0; i < size2; i++) {
//         scanf("%d", &arr2[i]);
//     }

//     printUnion(arr1, size1, arr2, size2);
//     printIntersection(arr1, size1, arr2, size2);

//     return 0;
// }                                   //??????????

//6) Write a C function to find the Inversion Count in an array. 
//Given an array a[], two elements a[i] and a[j] form an inversion if a[i] > a[j] and i < j.
/*
#include <stdio.h>

// Function to merge two sorted subarrays and count inversions
int mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
    int i = left;       // Index for the left subarray
    int j = mid + 1;    // Index for the right subarray
    int k = left;       // Index for the merged subarray
    int inversionCount = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) {
            temp[k++] = arr[i++];
        } else {
            temp[k++] = arr[j++];
            inversionCount += (mid - i + 1);  // Count inversions
        }
    }

    while (i <= mid) {
        temp[k++] = arr[i++];
    }

    while (j <= right) {
        temp[k++] = arr[j++];
    }

    for (i = left; i <= right; i++) {
        arr[i] = temp[i];
    }

    return inversionCount;
}

// Recursive function to sort and count inversions using merge sort
int mergeSortAndCount(int arr[], int temp[], int left, int right) {
    int mid, inversionCount = 0;

    if (left < right) {
        mid = (left + right) / 2;
        inversionCount += mergeSortAndCount(arr, temp, left, mid);
        inversionCount += mergeSortAndCount(arr, temp, mid + 1, right);
        inversionCount += mergeAndCount(arr, temp, left, mid, right);
    }

    return inversionCount;
}

// Function to find the inversion count in an array
int findInversionCount(int arr[], int size) {
    int temp[size];
    return mergeSortAndCount(arr, temp, 0, size - 1);
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int inversionCount = findInversionCount(arr, size);

    printf("Inversion Count: %d\n", inversionCount);

    return 0;
}
*/
/*
// C program to Count
// Inversions in an array
#include <stdio.h>
#include <stdlib.h>
int getInvCount(int arr[], int n)
{
	int inv_count = 0;
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			if (arr[i] > arr[j])
				inv_count++;

	return inv_count;
}

// Driver program to test above functions 
int main()
{
	int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

	int n = sizeof(arr) / sizeof(arr[0]);
	printf("Number of inversions are %d \n",
		getInvCount(arr, n));
	return 0;
}
*/

//7)Write a C function to remove all repeated characters from the given string and display the string without duplicate characters.

/*
#include <stdio.h>
#include <stdio.h>
#include <string.h>

// Function to remove repeated characters from a string
void removeDuplicates(char str[]) {
    int length = strlen(str);
    int index = 0;

    for (int i = 0; i < length; i++) {
        char currentChar = str[i];
        int isDuplicate = 0;

        // Check if the character is already encountered before the current position
        for (int j = 0; j < i; j++) {
            if (str[j] == currentChar) {
                isDuplicate = 1;
                break;
            }
        }

        // If the character is not a duplicate, add it to the result
        if (!isDuplicate) {
            str[index++] = currentChar;
        }
    }

    // Add null character at the end to terminate the modified string
    str[index] = '\0';
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // Remove newline character from input

    printf("Original string: %s\n", str);

    removeDuplicates(str);

    printf("String without duplicate characters: %s\n", str);

    return 0;
}

*/

//8)
