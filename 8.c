/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : 8.c

* Purpose : just because

* Creation Date : 3/3/2020

* Last Modified : 8/3/2020

* Created By :  Aleksei K.

_._._._._._._._._._._._._._._._._._._._._.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

void get_date()
{
    time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    if (tm.tm_mon == 2 && tm.tm_mday == 8) 
    {
        sleep(1);
        printf("Today is %d/%d/%d. Happy International Women's Day!\n", tm.tm_mday,  tm.tm_mon + 1, tm.tm_year + 1900);
        printf("\n\n");
        sleep(1);
        printf("                                    {@} * {@}\n");
        printf("                                 {@} * {@} * {@}\n");
        printf("                               : * {@} * {@} * .;\n");
        printf("                              {@} * {@} * {@} * {@}\n");
        printf("                               * ; * ; {@} * ; * :\n");
        printf("                                ;\\ \\ \\ \\| /  / /;\n");
        printf("                                   \\ \\ Y/ / /\n");
        printf("                                    `_\\ |/ _'\n");
        printf("                                    / \\\\Y// \n");
        printf("                                   ( ,-}={-,\\ )\n");
        printf("                                    \\_//((\\_/\n");
        printf("                                     //))(\\\n");
        printf("                                      (/  ))\n");
        printf("                                         ((\n");
        printf("                                         \\ )\n");
        sleep(1);
    }
    else
        printf("Today is %d/%d/%d, this is day %d from the beginning of the year.\nLet's do something meaningful, or funny, or crazy!\n\n", tm.tm_mday, tm.tm_mon + 1, tm.tm_year + 1900, tm.tm_yday);
}
 
int cool(void) 
{
	int i;
	int k;
 
	i = 16;
	k = 0;
	srand((unsigned)time(NULL));
	k = rand() % i;
	return k;
}
 
const char* x[] = {"talented", "perfect", "enthusiastic", "helpful", "reliable", "terrific", "compassionate", "exceptional", "admirable", "amazing", "extraordinary", "optimistic", "impressive", "attractive", "fantastic", "outstanding"};
const char* y[] = { "awesome", "beautiful", "inspiring", "breathtaking", "generous", "joyful", "shining", "brilliant", "smart", "splendid", "wise", "witty", "wonderful", "super", "cheerful", "supportive"};
 
int main() 
{
	char *user;
	user = getenv("LOGNAME");
    printf(":):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):)\n\n");
    printf("To: Alyona / %s\n", user);
	printf("From: Aleksei\n\n");
    sleep(1);
    printf("I'd like to tell you... there's something special I've noticed about you...\n\n");
    sleep(2);
    printf("You are %s and %s!\n\n", x[cool()], y[cool()]);
    sleep(2);
    get_date();
    printf("             ******       ******\n");
    printf("           **********   **********\n");
    printf("         ************* *************\n");
    printf("         *****************************\n");
    printf("         *****************************\n");
    printf("         *****************************\n");
    printf("          ***************************\n");
    printf("            ***********************\n");
    printf("              *******************\n");
    printf("                ***************\n");
    printf("                  ***********\n");
    printf("                    *******\n");
    printf("                      ***\n");
    printf("                       *\n");
    printf("\n:):):):):):):):):):):):):):):):):):):):):):):):):):):):):):):)\n");
	return 0;
}
