#include <SoftwareSerial.h>  //header file of software serial port

SoftwareSerial Serial1(5,6); //define software serial port name as Serial1 and define pin2 as RX and pin3 as TX


int a;
int kecepatan;
int arah;


 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(57600);
  Serial1.begin(115200);  //set bit rate of serial port connecting LiDAR with Arduino
  pinMode(3,INPUT);
  while (1) {
    if (Serial.available()>0){
      int b = Serial.read();
      Serial.println(b);
        if (b=='d') {
          Serial.print("2");
          break;
        }  
    }
  }
  delay(3000); 
 }

void loop() {
  // put your main code here, to run repeatedly:
//    no++;
    arahAngin();
    kecepatanAngin();
    cetak();
  }
  
