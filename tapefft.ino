elapsedMicros elapmicro;
int curvalue;

void setup() {
  Serial.begin(115200);
}

void loop() {
  curvalue = analogRead(A9);

  Serial.print(" elapmicro:");  Serial.print(elapmicro);
  Serial.print(" curvalue:"); Serial.print(curvalue);
  Serial.print("\n");

  delayMicroseconds(9982); # Tuned and gives ~10.6 milisecond intervals
}
