void setup() {
  // ho ho helo wuaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa
pinMode(3, OUTPUT); //thes is the green led.
pinMode(4, OUTPUT);//thes is the 1st red led
pinMode(5, OUTPUT);//thes is the 2nt red led
pinMode(2, INPUT);// the is the buttoun.
}

void loop() {
  int switchState = digitalRead(2);
//to neow wat state the buttoun is in.
if (switchState == LOW){
  //the button is not pressed.
  digitalWrite(3, HIGH);//green led on
  digitalWrite(4, LOW);//red led off
  digitalWrite(5, LOW);//red led off
}
else{ //the button is pressed.
digitalWrite(3, LOW);//green led is off
digitalWrite(4, LOW);//red led is off
digitalWrite(5, HIGH);//red led is on

delay(500);//wat fore 1/4 second
digitalWrite(4, HIGH);
digitalWrite(5,LOW);
delay(500);//wat fore 1/4 second
}
}//go back to beginning of loop...
