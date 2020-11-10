#include <IRremote.h>
#define Button_1 511DBB
#define Button_2 A3C8EDDB
int reciver = 7;  // pin for the IR sensor
IRrecv irrecv(reciver);
decode_results results;



void setup(){
Serial.begin(9600);
irrecv.enableIRIn();
pinMode (8, OUTPUT);
pinMode (9, OUTPUT);
}



void loop(){
  if (irrecv.decode(&results)) { //if we have recived am ir signal
   Serial.println (results.value, HEX); //display hex results 
   irrecv.resume(); //next value 
  }
}
