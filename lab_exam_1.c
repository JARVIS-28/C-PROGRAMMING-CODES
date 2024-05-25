// 1) Write a C program to print a pyramid pattern with numbers increased by 1.

 //#include <stdio.h>

// int main() {
//     int rows, i, j, number = 1;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++) {
//         for( j=0;j<=rows-i;j++){
//             printf(" ");
//         }
//         for (int k = 1; k <= i; k++) {
//             printf("%d ", number);
//             number++;
//         }
//         printf("\n");
//     }

//     return 0;
// }
// int main()
// {
//     int r;
//     printf("Enter the numbe rof rows\n");
//     scanf("%d",&r);
//     int c=r;
//     int k=1;
//     for(int i=1;i<=r;i++)
//     {
//         for(int j=0;j<c-1;j++)
//         {
//             printf(" ");
//         }
//         for(int j=0;j<i;j++)
//         {
//             printf("%d ",k);
//             k++;
//         }
//         for(int j=0;j<c-1;j++)
//         {
//             printf(" ");
//         }
//         c--;
//         printf("\n");
//     }
// }

// #include <stdio.h>

// int main()
// {
//     int rows, i, j, num = 1;

//     printf("Enter the number of rows: ");
//     scanf("%d", &rows);

//     for (i = 1; i <= rows; i++)
//     {
//         for (j = 1; j <= rows - i; j++)
//         {
//             printf("   ");
//         }

//         for (j = 1; j <= i; j++)
//         {
//             printf("% -3d", num++);
//         }

//         for (j = 1; j < i; j++)
//         {
//             printf("% -3d", num++);
//         }

//         printf("\n");
//     }

//     return 0;
// }

// 2) Write a C program to display the reverse of a number & check if it is palindrome.
// #include<stdio.h>

// int main(){
//     int n,k;
//     int reverse=0;
//     scanf("%d",&n);
//     int w=n;
//     while(n!=0){
//         k=n%10;
//         reverse= reverse*10+k;
//         n=n/10;
//     }
//     printf("reversed : %d\n",reverse);

//     if(w==reverse){
//         printf("is");
//     }
//     else{
//         printf("illa");
//     }

// }

//3. Write a C program to check whether a given number is a prime and use that to find the next prime number, greater than a given number.
// #include <stdio.h>

// int isPrime(int n) {
//     if (n ==1)
//         return 0;
//     else{
//     for (int i = 2; i <= n / 2; i++) {
//         if (n % i == 0)
//             return 0;
//     }

//     return 1;
// }
// }

// int nextPrime(int n) {
//     n++;
//     while (!isPrime(n))
//         n++;

//     return n;
// }

// int main() {
//     int num;
//     printf("Enter a number: ");
//     scanf("%d", &num);

//     if (isPrime(num))
//         printf("%d is a prime number.\n", num);
//     else
//         printf("%d is not a prime number.\n", num);

//     int next = nextPrime(num);
//     printf("The next prime number is: %d\n", next);

//     return 0;
// }


// 4 reverse an array using index notation
// #include <stdio.h>

// void reverseArray(int arr[], int size) {
//     int start = 0;
//     int end = size - 1;

//     while (start < end) {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;

//         start++;
//         end--;
//     }
// }

// int main() {
//     int n;
//     printf("enter the size of the array");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Original Array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     reverseArray(arr, n);

//     printf("\nReversed Array: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", arr[i]);
//     }

//     return 0;
// }

// #include <stdio.h>

// void reverseArray(int *arr, int size) {
//     int *start = arr;
//     int *end = arr + size - 1;

//     while (start < end) {
//         int temp = *start;
//         *start = *end;
//         *end = temp;

//         start++;
//         end--;
//     }
// }

// int main() {
//     int size;

//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];

//     printf("Enter the elements of the array: ");
//     for (int *ptr = arr; ptr < arr + size; ptr++) {
//         scanf("%d", ptr);
//     }

//     printf("Original Array: ");
//     for (int *ptr = arr; ptr < arr + size; ptr++) {
//         printf("%d ", *ptr);
//     }

//     reverseArray(arr, size);

//     printf("\nReversed Array: ");
//     for (int *ptr = arr; ptr < arr + size; ptr++) {
//         printf("%d ", *ptr);
//     }

//     return 0;
// }


// 5) Write C functions to print Union and Intersection of array elements.
// #include <stdio.h>

// void printUnion(int arr1[], int size1, int arr2[], int size2) {
//     int i = 0, j = 0;

//     printf("Union of the arrays: ");

//     while (i < size1 && j < size2) {
//         if (arr1[i] < arr2[j]) {
//             printf("%d ", arr1[i]);
//             i++;
//         }
//         else if (arr2[j] < arr1[i]) {
//             printf("%d ", arr2[j]);
//             j++;
//         }
//         else {
//             printf("%d ", arr1[i]);
//             i++;
//             j++;
//         }
//     }

//     while (i < size1) {
//         printf("%d ", arr1[i]);
//         i++;
//     }

//     while (j < size2) {
//         printf("%d ", arr2[j]);
//         j++;
//     }
// }



// void printIntersection(int arr1[], int size1, int arr2[], int size2) {
//     int i = 0, j = 0;

//     printf("Intersection of the arrays: ");

//     while (i < size1 && j < size2) {
//         if (arr1[i] < arr2[j]) {
//             i++;
//         }
//         else if (arr2[j] < arr1[i]) {
//             j++;
//         }
//         else {
//             printf("%d ", arr1[i]);
//             i++;
//             j++;
//         }
//     }
// }

// int main() {
//     int arr1[] = {1, 2, 3, 4, 5};
//     int size1 = sizeof(arr1) / sizeof(arr1[0]);

//     int arr2[] = {4, 5, 6, 7, 8};
//     int size2 = sizeof(arr2) / sizeof(arr2[0]);

//     printUnion(arr1, size1, arr2, size2);
//     printf("\n");

//     printIntersection(arr1, size1, arr2, size2);
//     printf("\n");

//     return 0;
// }


// 6#include <stdio.h>

// int mergeAndCount(int arr[], int temp[], int left, int mid, int right) {
//     int i = left;
//     int j = mid + 1;
//     int k = left;
//     int count = 0;

//     while (i <= mid && j <= right) {
//         if (arr[i] <= arr[j]) {
//             temp[k++] = arr[i++];
//         } else {
//             temp[k++] = arr[j++];
//             count += mid - i + 1;  // Count the inversions
//         }
//     }

//     while (i <= mid) {
//         temp[k++] = arr[i++];
//     }

//     while (j <= right) {
//         temp[k++] = arr[j++];
//     }

//     for (i = left; i <= right; i++) {
//         arr[i] = temp[i];
//     }

//     return count;
// }

// int mergeSortAndCount(int arr[], int temp[], int left, int right) {
//     int count = 0;

//     if (left < right) {
//         int mid = (left + right) / 2;
//         count += mergeSortAndCount(arr, temp, left, mid);
//         count += mergeSortAndCount(arr, temp, mid + 1, right);
//         count += mergeAndCount(arr, temp, left, mid, right);
//     }

//     return count;
// }

// int inversionCount(int arr[], int size) {
//     int temp[size];
//     return mergeSortAndCount(arr, temp, 0, size - 1);
// }

// int main() {
//     int arr[] = {5, 3, 2, 4, 1};
//     int size = sizeof(arr) / sizeof(arr[0]);

//     int count = inversionCount(arr, size);

//     printf("Inversion Count: %d\n", count);

//     return 0;
// }

// // #include <stdio.h>
// #include <string.h>

// 8. int strend(const char s[], const char t[]) {
//     int s_len = strlen(s);
//     int t_len = strlen(t);

//     if (t_len > s_len) {
//         return 0;  // t cannot occur at the end of s if t is longer than s
//     }

//     int s_end = s_len - t_len;

//     for (int i = 0; i < t_len; i++) {
//         if (s[s_end] != t[i]) {
//             return 0;  // characters don't match
//         }
//         s_end++;
//     }

//     return 1;  // t occurs at the end of s
// }

// int main() {
//     char s[100];
//     char t[100];

//     printf("Enter the first string: ");
//     scanf("%s", s);

//     printf("Enter the second string: ");
//     scanf("%s", t);

//     int result = strend(s, t);

//     if (result) {
//         printf("The string '%s' occurs at the end of the string '%s'\n", t, s);
//     } else {
//         printf("The string '%s' does not occur at the end of the string '%s'\n", t, s);
//     }

//     return 0;
// }

// #include <stdio.h>

// struct Date {
//     int day;
//     int month;
//     int year;
// };

// int compareDates(struct Date date1, struct Date date2) {
//     if (date1.year > date2.year)
//         return 1;
//     else if (date1.year < date2.year)
//         return -1;
//     else {
//         if (date1.month > date2.month)
//             return 1;
//         else if (date1.month < date2.month)
//             return -1;
//         else {
//             if (date1.day > date2.day)
//                 return 1;
//             else if (date1.day < date2.day)
//                 return -1;
//             else
//                 return 0;
//         }
//     }
// }

// int main() {
//     struct Date date1, date2;

//     printf("Enter the first date (day/month/year): ");
//     scanf("%d/%d/%d", &date1.day, &date1.month, &date1.year);

//     printf("Enter the second date (day/month/year): ");
//     scanf("%d/%d/%d", &date2.day, &date2.month, &date2.year);

//     int comparison = compareDates(date1, date2);
//     if (comparison == 1)
//         printf("The first date is later than the second date.\n");
//     else if (comparison == -1)
//         printf("The first date is earlier than the second date.\n");
//     else
//         printf("The two dates are the same.\n");

//     return 0;
// }


// 10.
// #include<stdio.h>
// #include<stdlib.h>

// typedef struct node
// {
// 	int info;
// 	struct node *next;
// }NODE;

// NODE* insertFront(NODE* head,int ele);
// void display(NODE *head);
// NODE* deleteFront(NODE* head,int *pele);

// int main()
// {
// 	NODE *head=NULL;
// 	int choice;
// 	int ele;
	
// 	do
// 	{
// 		printf("1.InsertFront 2.Display 3.DeleteFront \n");
// 		scanf("%d",&choice);
// 		switch(choice)
// 		{
// 			case 1:printf("Enter an integer\n");
// 					scanf("%d",&ele);
// 					head=insertFront(head,ele);
// 					break;
// 			case 2:display(head);
// 					break;
// 			case 3: if(head!=NULL)
// 					{
// 						head=deleteFront(head,&ele);
// 						printf("Deleted element is %d\n",ele);
// 					}
// 					else
// 						printf("List is already empty\n");
// 					break;
// 		}
// 	}while(choice<4);
	
// }

// NODE* insertFront(NODE* head,int element)
// {
// 	NODE* temp=malloc(sizeof(struct node));
//     temp->info = element;
//     temp->next=NULL;
// 	if(head==NULL)
//     head=temp;
//     else
//     {
//     temp->next=head;
//     head=temp;
//     }
//     return head;
// }

// void display(NODE *head)
// {
// 	if(head==NULL)
// 		printf("Empty List\n");
// 	else
// 	{
// 		NODE *p=head;
// 		while(p!=NULL)
// 		{
// 			printf("%d ",p->info);
// 			p=p->next;
// 		}
// 	}
// }

// NODE* deleteFront(NODE* head,int *pele)
// {
// 	NODE *p=head;
//     *pele=head->info;
// 	head=head->next;
// 	free(p);
// 	return head;
// }


//11.
// #include <stdio.h>
// #include <stdlib.h>

// // Structure for a node
// struct Node {
//     int data;
//     struct Node* next;
// };

// // Function to create a new node
// struct Node* createNode(int value) {
//     struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//     newNode->data = value;
//     newNode->next = NULL;
//     return newNode;
// }

// // Function to insert a node at the front of the linked list
// void insertFront(struct Node** head, int value) {
//     struct Node* newNode = createNode(value);
//     newNode->next = *head;
//     *head = newNode;
// }

// // Function to insert a node at the end of the linked list
// void insertLast(struct Node** head, int value) {
//     struct Node* newNode = createNode(value);

//     if (*head == NULL) {
//         *head = newNode;
//     } else {
//         struct Node* current = *head;
//         while (current->next != NULL) {
//             current = current->next;
//         }
//         current->next = newNode;
//     }
// }

// // Function to delete the last node of the linked list
// void deleteLast(struct Node** head) {
//     if (*head == NULL) {
//         printf("Linked List is empty. Cannot delete last node.\n");
//         return;
//     } else if ((*head)->next == NULL) {
//         // If there is only one node in the list
//         free(*head);
//         *head = NULL;
//         return;
//     }

//     struct Node* current = *head;
//     struct Node* prev = NULL;

//     while (current->next != NULL) {
//         prev = current;
//         current = current->next;
//     }

//     prev->next = NULL;
//     free(current);
// }

// // Function to display the elements of the linked list
// void displayList(struct Node* head) {
//     if (head == NULL) {
//         printf("Linked List is empty.\n");
//         return;
//     }

//     struct Node* current = head;

//     while (current != NULL) {
//         printf("%d ", current->data);
//         current = current->next;
//     }

//     printf("\n");
// }

// int main() {
//     struct Node* head = NULL;  // Initialize an empty linked list

//     insertFront(&head, 30);
//     insertFront(&head, 20);
//     insertFront(&head, 10);

//     printf("Linked List after insertions at the front: ");
//     displayList(head);

//     insertLast(&head, 40);
//     insertLast(&head, 50);

//     printf("Linked List after insertions at the last: ");
//     displayList(head);

//     deleteLast(&head);

//     printf("Linked List after deleting the last node: ");
//     displayList(head);

//     return 0;
// }

