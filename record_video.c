#include <wiringPi.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <time.h>

#define sensorPin 0		//define the sensorPin

#define COMMAND_LENGTH 200

int main(void)
{	
	printf("Program is starting ... \n");
	
	wiringPiSetup();
	
	pinMode(ledPin, OUTPUT); 
	pinMode(sensorPin, INPUT);

	while(1){
		
		if(digitalRead(sensorPin) == HIGH){ //if read value of sensor is HIGH level	
	
			char command[COMMAND_LENGTH];
			char buff[20];
			time_t now = time(NULL);
			strftime(buff, 20, "%Y-%m-%d@%H:%M:%S", localtime(&now)); 
    
			char text[200] = "ffmpeg -f v4l2 -video_size 1280x1720 -framerate 30 -i /dev/video0 -frames 50 -c:v mjpeg -q:v 2 ";
    
			strcat(text, buff);
    
			char end[5] = ".mp4"; 
    
			strcat(text, end);
    
			text[strlen(text)] = '\0'; 

			snprintf(command, COMMAND_LENGTH, "%s > /dev/null 2>&1", text);
			printf("Motion detected: Recording video for 10 seconds...\n");
			system(command);
			sleep(10);
            printf("Video saved as %s\n",strcat(buff,".mp4"));
		}
	}

	return 0;
}

