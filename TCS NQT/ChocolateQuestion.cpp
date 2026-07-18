/*
 *  A chocolate factory is packing chocolates into the packets. The chocolate packets here 
 * represent an array of N number of integer values. The task is to find the empty packets(0) of 
 * chocolate and push it to the end of the conveyor belt(array). Click here to see solution
Example 1 : N=8 and arr = [4,5,0,1,9,0,5,0].

There are 3 empty packets in the given set. These 3 empty packets represented as O should be pushed towards the end of the array
 */

 #include <iostream>
 using namespace std;

 void chocolateFactor(int arr[], int n){
    int count = 0;

    for (int i = 0; i < n; i++){
        if (arr[i] != 0){
            arr[count++] = arr[i];
        }
    }

    while (count < n){
        arr[count++] = 0;
    }
 }