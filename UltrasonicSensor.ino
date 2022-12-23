#include <NewPing.h>

#define TRIGGER_PIN A1 //Pin A1 is output
#define ECHO_PIN A0  //pin A0 is input
#define MAX_DISTANCE 400 //Max distance in 
NewPing sonar(TRIGGER_PIN, ECHO_PIN, MAX_DISTANCE); //Connect Sonar Pins

void setup() {
  Serial.begin(115200); //Open serial window
}

void loop() {
  delay(1000); //Delay to listen for ping
  unsigned int uS= sonar.ping(); //store micro seconds value into an integer
  int distance = uS / US_ROUNDTRIP_CM; //convert from micro seconds to cm

  //  prints updated value to serial window
  Serial.print("Ping:"); 
  Serial.print(distance);
  Serial.println("cm");
}
