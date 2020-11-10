#include <IRremote.h>
int reciver = 7;  // pin for the IR sensor
IRrecv irrecv(reciver);
decode_results results;



void setup(){
Serial.begin(9600);
irrecv.enableIRIn();
}



void loop(){
  if (irrecv.decode(&results)) { //if we have recived am ir signal
   Serial.println (results.value, HEX); //display hex results 
   irrecv.resume(); //next value 
  }
}

