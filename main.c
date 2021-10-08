# TCS_Advanced-Coding_Question
/*
Write a program to find the smallest integer value 'b' for the given value of 'a'. If we multiply the digits of 'b', we should get the exact value of 'a'. 
Result 'b' must contain more than one digit. 

Constraints: 1<=a<=10000 

Examples: 

Input: 10 
Output: 25 

Explanation: 2*5 = 10. 
Hence 25 is the smallest value for 10. 

Input: 56 
Output: 78 

Explanation: 7*8 = 56 

Input: 150 
Output: 556 

Explanation: 5*5*6 = 150 

Input: 13 
Output: Not Possible 

Instructions: Input must be a single integer value. 
Print "Not Possible" if result not found.
*/

//code
#include<bits/stdc++.h>
using namespace std;
#define MAX 10000

int main(){
    int k;
    cin >> k;
    for(int i = 10; i<MAX; i++){
        int num = i;
        int mul = 1;
        while(num != 0){
        int temp = num%10;
        num/=10;
        mul*=temp;
        }
        if(mul == k){
            printf("%d",i);
            break;
        }
        else
        printf("NOT POSSIBLE");
        break;
        }
}
