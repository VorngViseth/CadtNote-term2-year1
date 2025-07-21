#include <stdio.h>
#include <string.h>

//date check in/out
typedef struct {
    // input example DD/MM/YY 
    char checkIn[50];
    char checkOut[50];
} Date;

typedef  struct {
    char guestName[50];
    int people; // how many people are staying in the room
    int phoneNumber;
    int days; // booked for how many day 
} GuestInfo;

//guest info and checkin/out date
typedef struct{
    GuestInfo info;
    Date date;
} Booking;

typedef struct {
    int roomNum;
    char type[10];      // single or double
    char status[20]; // available or booked
    Booking booking;
} Room;

void checkIn(Room* room){   //info you need to fill for check in
    
    printf("Enter guest name : ");
    scanf(" %s", room->booking.info.guestName);

    printf("Enter number of people :");
    scanf(" %d", &room->booking.info.people);

    printf("Enter your phone number : ");
    scanf(" %d", &room->booking.info.phoneNumber);

    printf("Enter how many days you want to book : ");
    scanf(" %d", &room->booking.info.days);

    strcpy(room->status, "booked");

    printf("Enter the check in dates : ");
    scanf(" %s", room->booking.date.checkIn);

    printf("Enter the check out dates : ");
    scanf(" %s", room->booking.date.checkOut);

    printf("Room booked successfully!\n");


}

void checkOut(Room* room){      // clear the guest info after checking out 

    strcpy(room->booking.info.guestName, "\0");
    room->booking.info.people = 0;
    room->booking.info.phoneNumber = 0;
    room->booking.info.days = 0;
    strcpy(room->booking.date.checkIn, "\0");
    strcpy(room->booking.date.checkOut, "\0"); 
    strcpy(room->status, "available");

}

void printRoomInfo(Room room){

    printf("-----Room Status-------\n");
    printf("Room number : %d\n", room.roomNum);
    printf("Room type : %s\n", room.type);
    printf("Status : %s\n", room.status);
    printf("guest name : %s\n", room.booking.info.guestName);
    printf("guest number : %d\n", room.booking.info.phoneNumber);
    printf("poeple amount : %d\n", room.booking.info.people);
    printf("days stayed : %d\n", room.booking.info.days);
    printf("Check in date : %s\n", room.booking.date.checkIn);
    printf("Check out date : %s\n", room.booking.date.checkOut);
    printf("------------------------\n");
 
}

int main() {

    Room room[60];   // array of room struct

    for(int i = 0; i < 60; i++) {
        room[i].roomNum = i + 1; // set room room number o 
        strcpy(room[i].status, "available"); // set all the room to available
        if(i < 30 ) strcpy(room[i].type, "Single"); // set room number from 1-30 to single
        else strcpy(room[i].type, "Double"); // set room number from 31-60 to double
    }

    int choice = 0; // makes choice on the hotel menu

    while(choice != 4){

        // Room menu
        printf("---- HOTEL MENU ----\n");
        printf("1. Check In\n");
        printf("2. Check Out\n");
        printf("3. Check Room Info\n");
        printf("4. Exit\n");
        printf("----------------------\n ");
        scanf("%d", &choice);

        if(choice < 0 || choice > 5) {
          
            printf("Invaild input !\n");
            continue;   
        
        }
        
        if(choice == 1) {

            int in = 0; // room number for check in
        
            printf("What room do you what to book?\nSingle Bed (1-30)\nDouble Bed (31-60)\n");
            printf("Enter room number (XX) : ");
            scanf(" %d", &in);

            if(in < 0 || in > 60) {
                printf("Invaild input !\n");
                continue; 
            }

            if(strcmp(room[in - 1].status, "booked") != 0) {
                printf("Room is available!\n");
                checkIn(&room[in - 1]);
            } else printf("Room is already booked!\n");

        }else if(choice == 2) {

            int out = 0;    //rOom number for checking out
            printf("Enter the check out room : ");
            scanf(" %d", &out);

            if(out < 0 || out > 60) {
                printf("Invaild Input!\n");
                continue;
            }

            checkOut(&room[out - 1]);

        }else if(choice == 3) {

            int check = 0; // room number for checking info
            printf("Enter the room number : ");
            scanf(" %d", &check);

            if(check < 0 || check > 60) {
                printf("Invaild input !\n");
                continue;   
            }   

            printRoomInfo(room[check - 1]);

        }

    }

    return 0;
}