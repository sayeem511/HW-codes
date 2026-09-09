// convert total seconds into hours, minutes and seconds;
#include<stdio.h>
int main() {
      int Total_Seconds, hours , minutes, seconds, remaining_seconds;
      scanf("%d", &Total_Seconds);
      printf("Total seconds are: %d\n", Total_Seconds);

      hours = Total_Seconds / 3600;

      remaining_seconds = (Total_Seconds % 3600);

      minutes = remaining_seconds / 60;

      seconds = (remaining_seconds % 60);

      printf("In hours, minutes, seconds format the time will be : %dh %dm %ds", hours, minutes, seconds);
      return 0;
}
