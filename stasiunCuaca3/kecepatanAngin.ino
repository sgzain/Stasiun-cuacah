void kecepatanAngin()
 {
   int sensorValue = analogRead(A1);
   float outvoltage = sensorValue * (5.0 / 1023.0);
//   Serial.print("outvoltage = ");
//   Serial.print(outvoltage);
//   Serial.println("V");
   kecepatan = 6*outvoltage;//The level of wind speed is proportional to the output voltage.
//   Serial.print("wind speed is ");
//   Serial.print(Level);
//   Serial.println(" level now");
//   Serial.println();
   delay(500);
 }
