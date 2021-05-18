#define MOTOR1_0 7
#define MOTOR1_1 6
void setup() {
  // put your setup code here, to run once:
  pinMode(MOTOR1_0,OUTPUT);
  pinMode(MOTOR1_1,OUTPUT);
  Serial.begin(9600);
}

 

void loop() {
  
  // put your main code here, to run repeatedly:
   if (Serial.available() > 0) {
    // read the incoming byte:
    char ch = Serial.read();
    if(ch=='0')
    {
      digitalWrite(MOTOR1_1,LOW);
      digitalWrite(MOTOR1_0,LOW);
      Serial.write('A');
    }
    else
    if(ch=='1')
    {
      digitalWrite(MOTOR1_1,HIGH);
      digitalWrite(MOTOR1_0,LOW);
      Serial.write('B');
    }
    else
    if(ch=='2')
    {
      digitalWrite(MOTOR1_1,LOW);
      digitalWrite(MOTOR1_0,HIGH);
    }
   }
  
}
