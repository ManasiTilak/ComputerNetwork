#include <stdio.h>
#include <stdbool.h>

// Receiver Function
void receiver(int frame) {
    printf("Receiver: Received frame %d\n", frame);
}

int main() {
    int totalFrames;
    printf("Enter total frames to send.\n");
    scanf("%d", &totalFrames);

    int frameToSend = 1;
    int ack;

    while (frameToSend <= totalFrames) {
        printf("Sending frame %d\n", frameToSend);
        printf("Enter acknowledgment for frame %d (1 for received): ", frameToSend);
        scanf("%d", &ack);

        if (ack == 1) {
            receiver(frameToSend);
            frameToSend++;
        }
    }

    return 0;
}
