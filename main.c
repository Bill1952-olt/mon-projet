#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#ifdef _WIN32
#define <windows.h>
#else 
#include <unistd.h>
#endif 
int main(){
srand(time(NULL));
 while (1) {
        time_t t = time(NULL);
        struct tm *tm_info = localtime(&t);

        char buffer[9];
        strftime(buffer, 9, "%H:%M:%S", tm_info);

        float temperature = 20 + (rand() % 1000) / 100.0;

        printf("Heure : %s | Température : %.2f°C\n", buffer, temperature);

        sleep_sec(2);
   /* temps et l'heure ****/
return 0;
}
