#include<stdio.h>

struct parkinglot{
    int carnum;
    int parking_time;
};

int main()
{
    int total_position,car_in_waitlist=0,car_in_parkinglot=0,car_num_in_waitinglist[50];
    scanf("%d",&total_position);
    struct parkinglot p[total_position];
    for(int i = 0;i<total_position;i++){
        p[i].carnum = 0;
    }

    char option;int car_number,time;
    while(1){
        scanf("%c",&option);
        if(option == 'E')break;
        scanf("%d%d",&car_number,&time);
        if(option == 'A'){
            if(car_in_parkinglot < total_position){
                int i;
                for(i=0;i<total_position;i++){
                    if(p[i].carnum == 0)break;
                }
                p[i].carnum = car_number;
                p[i].parking_time = time;
                car_in_parkinglot++;
                printf("car#%d in parking space #%d\n",car_number,i+1);
            }else{
                car_num_in_waitinglist[car_in_waitlist] = car_number;
                car_in_waitlist++;
                printf("car#%d waiting\n",car_number);
            }
        }else if(option == 'D'){
            int i;
            for(i = 0;i<car_in_parkinglot;i++){
                if(p[i].carnum == car_number)break;
            }
            if(i == car_in_parkinglot){
                int j;
                for(j = 0;j<car_in_waitlist;j++){
                    if(car_num_in_waitinglist[j] == car_number)break;
                }
                if(j == car_in_waitlist){
                    printf("the car not in park\n");
                }else{
                    printf("car#%d out,parking time 0",car_number);
                    for(int p = j;p<car_in_waitlist-1;p++){
                        car_num_in_waitinglist[p] = car_num_in_waitinglist[p+1];
                    }
                    car_in_waitlist--;
                }
            }else{
                int time_scale;
                time_scale = time - p[i].parking_time;
                p[i].carnum = 0;
                for(int k = 0;k<car_in_parkinglot-1;k++){
                    p[k] = p[k+1];
                    p[k+1].carnum = 0;
                }
                car_in_parkinglot--;
                printf("car#%d out,parking time %d\n",car_number,time_scale);

                if(car_in_waitlist>0){
                    car_number = car_num_in_waitinglist[0];
                    for(int k = 0;k<car_in_waitlist-1;k++){
                        car_num_in_waitinglist[k] = car_num_in_waitinglist[k+1];
                    }
                    car_in_waitlist--;

                    p[total_position-1].carnum = car_number;
                    p[total_position-1].parking_time = time;
                    car_in_parkinglot++;
                    printf("car#%d in parking space #%d\n",car_number,total_position);
                }
            }
        };
    }
}