#define inA1 7
#define inA2 6 
#define inB1 5
#define inB2 4 


void setup() {
pinMode(inA1, OUTPUT);
pinMode(inA2, OUTPUT);
pinMode(inB1, OUTPUT);
pinMode(inB2, OUTPUT);
}


void dithang(){
           digitalWrite(inA1,HIGH);
           digitalWrite(inA2,LOW);
           digitalWrite(inB1,HIGH);
           digitalWrite(inB2,LOW);
   
}
void lui(){
           digitalWrite(inA1,LOW);
           digitalWrite(inA2,HIGH);
           digitalWrite(inB1,LOW);
           digitalWrite(inB2,HIGH);
}
void quaytrai(){
           digitalWrite(inA1,HIGH);
           digitalWrite(inA2,LOW);
           digitalWrite(inB1,LOW);
           digitalWrite(inB2,LOW);
}
void quayphai(){
           digitalWrite(inA1,LOW);
           digitalWrite(inA2,LOW);
           digitalWrite(inB1,HIGH);
           digitalWrite(inB2,LOW);
}

 void loop() 
{
     dithang();
     delay(2000);
     quaytrai();
     delay(5000);
     lui();
     delay(2000);
     quayphai();
     delay(5000);
}
