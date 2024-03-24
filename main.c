#include <stdio.h>
#include <stdlib.h>
#include "qlib.h"

int main() {

    QTICKET myQueue = create_queue(3);  // Create a queue
    if(myQueue < 0){
        printf("Error buffer: %s\n", qe_errbuf);
        return -1;
    }
    else{
        printf("Ticket: %d\n", myQueue);
    }
    // Add elements to the queue
    put_on_queue(myQueue, 11);
    put_on_queue(myQueue, 12);
    put_on_queue(myQueue, 13);

    // Remove elements from the queue and print them
    printf("Removed from queue: %d\n", take_off_queue(myQueue));
    printf("Removed from queue: %d\n", take_off_queue(myQueue));
    printf("Removed from queue: %d\n", take_off_queue(myQueue));


    QTICKET myQueue2 = create_queue(5);  // Create a queue
    if(myQueue2 < 0){
        printf("Error buffer: %s\n", qe_errbuf);
        return -1;
    }
    else{
        printf("Ticket: %d\n", myQueue2);
    }
    // Add elements to the queue
    put_on_queue(myQueue2, 910);
    put_on_queue(myQueue2, 920);
    put_on_queue(myQueue2, 930);
    put_on_queue(myQueue2, 940);
    put_on_queue(myQueue2, 950);

    // Remove elements from the queue and print them
    printf("Removed from queue: %d\n", take_off_queue(myQueue2));
    printf("Removed from queue: %d\n", take_off_queue(myQueue2));
    printf("Removed from queue: %d\n", take_off_queue(myQueue2));
    printf("Removed from queue: %d\n", take_off_queue(myQueue2));
    printf("Removed from queue: %d\n", take_off_queue(myQueue2));


    // Delete the queue
    delete_queue(myQueue);
    delete_queue(myQueue2);

    return 0;
}
