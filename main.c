#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>

int loading() {

    printf("\nLoading");
    sleep(1);
    system("clear");
    printf("\nLoading.");
    sleep(1);
    system("clear");
    printf("\nLoading..");
    sleep(1);
    system("clear");
    printf("\nLoading...");
    sleep(1);
    system("clear");
    sleep(1);
    system("clear");
    printf("\nLoading.");
    sleep(1);
    system("clear");
    printf("\nLoading..");
    sleep(1);
    system("clear");
    return 0;


}

int stop(){
    int stop = 0;
    printf("\n1 + Enter to close...");
    scanf("%d",&stop);
    return 0;
}


int SpeedTestRepo (){

    system("curl -sf https://gobinaries.com/ganeshdipdumbare/speedtest | sh");
    printf("\nRepository successfully installed!");

}

int main() {
    int code = 0;
    int number = 8768;
    printf("Please enter your Code: ");
    scanf("%d", &code);
    if (number == code) {
        loading();
        int speedyn = 0;
        printf("\nDo you want to test your Internetspeed?\n1...Yes\n0...No\nInput: ");
        scanf("%d",&speedyn);
        if(speedyn == 1){
            int repoInstalled = 0;
            printf("\nHave you already installed the needed Repository?\n 0...Yes\n 1...No\nInput: ");
            scanf("%d",&repoInstalled);
            if(repoInstalled == 1){
                SpeedTestRepo();
            }

            system("clear");
            printf("\nBefore you continue DO NOT CLICK Q TO QUIT THE TEST!");
            sleep(100);
            system("speedtest");
            printf("\nNow divide the Download Speed trough 10. This will be needed here!");
        }


        int MBorGB = 0;
        float NetSpeed = 0;
        float ProgramSize = 0;
        float timeReSec;
        float timeReMin;
        float timeReHour;

        sleep(1);
        printf("\nIs your Program Download in MB or in GB");
        sleep(1);
        printf("\nEnter 1 for MB");
        sleep(1);
        printf("\nEnter 2 for GB");
        sleep(1);
        printf("\nInput: ");
        sleep(1);
        scanf("%d", &MBorGB);
        if (MBorGB == 1) {
            sleep(2);

            printf("\nInternet Speed in MB/s: ");

            scanf("%f", &NetSpeed);
            sleep(1);
            printf("Program Size in MB: ");

            scanf("%f", &ProgramSize);
            timeReSec = ProgramSize / NetSpeed;
            timeReMin = (ProgramSize / NetSpeed) / 60;
            timeReHour = ((ProgramSize / NetSpeed) / 60) / 60;
            sleep(1);

            printf("\nTime Remaining in Seconds: %f", timeReSec);
            sleep(1);
            printf("\nTime Remaining in Minutes: %f", timeReMin);
            sleep(1);
            printf("\nTime Remaining in Hours: %f", timeReHour);
            sleep(1);
            time_t now;
            now = time(0);
            printf("\n%s\n", ctime(&now));
            stop();



        }else if (MBorGB == 2) {
            sleep(1);
            printf("\nInternet Speed in MB/s: ");
            scanf("%f", &NetSpeed);
            sleep(1);
            printf("Program Size in GB: ");
            scanf("%f", &ProgramSize);
            timeReSec = (ProgramSize * 1000) / NetSpeed;
            timeReMin = ((ProgramSize * 1000) / NetSpeed) / 60;
            timeReHour = (((ProgramSize * 1000) / NetSpeed) / 60) / 60;
            sleep(2);
            printf("\nTime Remaining in Seconds: %f", timeReSec);
            sleep(1);
            printf("\nTime Remaining in Minutes: %f", timeReMin);
            sleep(1);
            printf("\nTime Remaining in Hours: %f", timeReHour);
            sleep(1);
            time_t now;
            now = time(0);
            printf("\n%s\n", ctime(&now));
            stop();



        }else if(MBorGB != 0 || MBorGB != 1){
            system("clear");
            printf("\nNot a valid command please try again!\n");
            main();

        }


    } else {
        printf("\nWrong Code please try again or contact Owner!\n");
        stop();
        system("clear");
        main();




    }


}
