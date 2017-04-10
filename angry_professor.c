/** 
 *@brief Title: Algorithm to determine if an angry professor will cancel a class 

Constraints
     ai <= 0 for early arrival 
     ai >=1 for late strudent arrival  

    + Output Format
    +  1<= T <=10
    +  1<= N <=1000
    +  1<= K <=N
    +  -100<= T <=100
    + For each test case, print the word YES if the class is canceled or NO if it is not. 

    +   author : Ayokunle Ade-Aina
    +  email: ayokunle.adeaina@gmail.com
    (c) April 10,2016
*/
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

bool check_range(int n, int lower_limit, int upper_limit ) {
    if( (n >= lower_limit)  && (n <=upper_limit)) {
        return true;
    }else
        {
        return false;
    }
}



int main() {
    int k,n ,t; 
    int student_count = 0;
    scanf("%d",&t);
    if( check_range(t,1,10)) {
        
        
        for(int a0 = 0; a0 < t; a0++){
             
            scanf("%d %d",&n,&k);
            
            if(check_range(n,1,1000)  && check_range(k,1,n) ) {
               int a[n];
        
               // Scan test data for test case
               for(int a_i = 0; a_i < n; a_i++){
                  scanf("%d",&a[a_i]);
               }
        
                 // check if proffessor will be angry  
               for(int a_i = 0; a_i < n; a_i++){ 
                     if(check_range(a[a_i],-100,100)) {
                        if ( (a[a_i]) <= 0 )  student_count ++;
                     }  
               }
              // printf("threshold:%d count:%d\n ",k,student_count );
                
              if (student_count >=  k) {
                   printf("NO\n"); // class will not be cancelled
              }
              else { 
                   printf("YES\n"); // class will be cancelled
              }
               student_count = 0;
            }
            
            
              
            
        }
    }   
            
               
   
    return 0;
}
