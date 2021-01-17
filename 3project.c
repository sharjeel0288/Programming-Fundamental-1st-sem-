#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef struct ti
{
    time_t t;
}ti;
void main()
{
  /*  time_t t;//data type for time is time_t
    time(&t);//scanning time
    printf("\n current time is : %s",ctime(&t));  //ctime for current time
    //printf("time is %s\ndate is %s\n", __TIME__,__DATE__);   */

    ti t1;
    time(&t1.t);
    printf("\n current time is : %s",ctime(&t1.t));

}