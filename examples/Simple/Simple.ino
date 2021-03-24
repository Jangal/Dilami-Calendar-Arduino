#include <Dilami.h>

DilamiCalendar dc(1400, 1, 5);

void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  Serial.print("Dilami Day: ");
  Serial.println(dc.getDilamiDay());
  Serial.print("Dilami Month: ");
  Serial.println(dc.getDilamiMonth());
  Serial.print("Dilami Year: ");
  Serial.println(dc.getDilamiYear());
  delay(5000);        // repeat after 5 seconds.
}
