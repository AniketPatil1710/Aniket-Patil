#include <stdio.h>

void main() {
        //declare variables:
        //n: array size
        //flag for prime number
        //temp : for temp storage
        //indexPrime : index for prime array
        int n ,flag = 1,temp=0, indexPrime=0;

        //test case: size should be positive
        do {
                printf("Enter size of an array: ");
                scanf("%d",&n);
                if(n<=0)
                        printf("Enter only positive and non-zero value\n");
        }while(n<=0);

        //declare two arrays
        int arr[n],primeArray[n];

        //take elements from user
        printf("\nEnter %d elements\n",n);
        for(int i=0; i<n; i++) {
                scanf("%d",&arr[i]);
        }

        //print entered array
        printf("\nEntered array: \n");
        for(int i=0; i<n; i++) {
                printf("%d\t", arr[i]);
        }


        //check whether that number is prime or not
        for(int index=0; index < n; index++) {
                flag = 1;

                //copy the array elements into temp variable
                temp = arr[index];
                if(temp == 1 || temp ==0)
                        continue;

                //check for prime condition
                for(int k = 2; k <= temp/2; k++ ) {

                        if(temp % k == 0) {
                                //printf("temp = %d k = %d \n",temp,k);
                                flag = 0;
                                break;
                        }
                }

                //if flag == 1 then number is prime
                if(flag == 1) {
                        //insert it into prime array and increment the primeIndex
                        primeArray[indexPrime++] = temp;

                        //now delete that num from original array
                        //for deletion we have to shift next elements to the left by 1 upto that number
                        // so starting from index to n-1
                        for(int delete = index; delete < n-1; delete++) {
                                arr[delete] = arr[delete+1];                      //override the previous element
                        }

                        //now on element from an array is deleted so dec n by 1
                        n--;
                        index--;

                }//if end

        }//for end


        //------------- print original array --------------
        printf("\n\noriginal array after operations: \n");
        //if n is 0 then array is empty
        if(n==0) {
                printf("**** original array is Empty ****\n");
        }
        else {

                for(int i=0; i<n; i++) {
                        printf("%d\t", arr[i]);
                }
        }

        //--------------- print prime array --------------

        printf("\n\nPrime array: \n");

        //if no prime num found
        if(indexPrime == 0) {
                printf("**** Prime numbers not found in an array ****\n");
        }
        else {
                for(int i=0; i<indexPrime; i++) {
                        printf("%d\t", primeArray[i]);
                }
                printf("\n");
        }
}//..
