int frontback;
int leftright;
int btnstate;
int pwmvalue;

void setup() {
  Serial.begin(9600);
  pinMode(11,OUTPUT);
  pinMode(7,INPUT_PULLUP);

}

void loop() 
{
 frontback = analogRead(A0);
 leftright = analogRead(A1);
 
 btnstate  = digitalRead(7);
 Serial.print("\nFront Back = :  ");
 Serial.print(frontback);
  Serial.print("\nLeft Right = :  ");
 Serial.print(leftright);
 Serial.print("Button state : = ");
 Serial.print(btnstate);

pwmvalue=frontback;
pwmvalue = map(frontback,0,1023,255,0);
analogWrite(11,pwmvalue);


 delay(500);
 
}