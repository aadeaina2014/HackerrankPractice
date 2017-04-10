
Written by Anonymous

/**
 @brief code description
 Hacker rank excercise to convert
 12 Hr Format time to MIlitary Time with
 10 Test Cases Satisfied
 
 @input test samples
 07:40:35PM
 12:01:02AM
 12:45:54AM
 06:01:02PM
 01:01:02AM
 02:01:02PM
 12:01:02AM


 @expected result
 19:40:35
 12:01:02AM

 April 4,2017
 Ayokunle Ade-Aina
 ayokunle.adeaina@gmail.com
*/



#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

#define HOUR 0
#define MINUTE 1
#define SECOND 2


void process_prefix_zero(int tt, char tt_ch_f[]) {

       if(tt <10  ){
          int ret = sprintf(tt_ch_f,"0%d",tt);

       }
       else {
          int ret = sprintf(tt_ch_f,"%d",tt);
       }
      if(tt ==0) {
        strcpy(tt_ch_f ,"00");
      }
}

int main(){
    char* time = (char *)malloc(10240 * sizeof(char));
    scanf("%s",time);

    int hh,mm,ss;

    hh = 0;
    mm = 0;
    ss = 0;
    int time_segment = 0;

    char* token = strtok(time, ":");
    char* tmod;
    while (token) {
 switch(time_segment) {

      ////////////////////////////
      // Segment Time to HH:MM:SS
      ////////////////////////////
   case HOUR  : 
       hh =  atoi(token);
      break;

   case MINUTE  :
      mm =  atoi(token);
      break;
   case SECOND:
       if( tmod = strstr(token, "AM") ) {
          strcpy (tmod,"");
          if(hh==2) hh = hh + 12;

       }
       if( tmod = strstr(token, "PM") ) {
          strcpy (tmod,""); // strip off AM
          if(hh!=12) hh = hh + 12;
       }
       ss = atoi(token);


       /////////////////////////
       //   Upper Limit       //
       /////////////////////////
       mm = mm%60; //ensure 0-59
       ss = ss%60; //ensure 0-59

       //////////////////////////
       // Lower Limit          //
       //////////////////////////
       process_prefix_zero(hh,hh_ch_f);
       process_prefix_zero(mm,mm_ch_f);
       process_prefix_zero(ss,ss_ch_f);


       printf("%s:%s:%s\n",hh_ch_f,mm_ch_f,ss_ch_f);


      // default :  optional
      time_segment++;
      token = strtok(NULL, ":");
    } //closes tokenization while statement
    free(time);
    return 0;
}

