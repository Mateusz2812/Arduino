<<<<<<< HEAD
#define trigPin 9
#define echoPin 8

int tx=1;
int rx=0;
char inSerial[30];
char inSerial1[30];
char buf[100];

void setup(){
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(6, OUTPUT);
  pinMode(tx, OUTPUT);
 pinMode(rx, INPUT);

}

void loop(){
    int i=0;
    int m=0;
    int p=0;
    int r=0;
    
    delay(500);   
                                    
    if (Serial.available() > 0) {             
       while (Serial.available() > 0) {
         inSerial[i]=Serial.read(); 
         i++;      
       }
       inSerial[i]='\0';
     
     }
    
  
   
  int czas, dystans;
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  czas = pulseIn(echoPin, HIGH);
  dystans = czas / 58;
  
  Serial.println(dystans);
 
  delay(500); 
  Check(inSerial,dystans);
}
void Check(char inStr[],int odl){   
  int i=0;
  int m=0;
  int a;
  String odebrana=inStr;

  a=odebrana.toInt();
  if(odl < a)
  {
    digitalWrite(6, HIGH);
      for(m=0;m<25;m++){
      inStr[m]=0;
      }
    i=0;
  }
  
  if(odl > a)
  {
    digitalWrite(6, LOW);
      for(m=0;m<25;m++){
      inStr[m]=0;
      }
    i=0;
  }

    for(m=0;m<25;m++){
      inStr[m]=0;
      }
    i=0;

}

  
=======
#define trigPin 9
#define echoPin 8

int tx=1;
int rx=0;
char inSerial[30];
char inSerial1[30];
char buf[100];

void setup(){
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT); 
  pinMode(echoPin, INPUT); 
  pinMode(6, OUTPUT);
  pinMode(tx, OUTPUT);
 pinMode(rx, INPUT);

}

void loop(){
    int i=0;
    int m=0;
    int p=0;
    int r=0;
    
    delay(500);   
                                    
    if (Serial.available() > 0) {             
       while (Serial.available() > 0) {
         inSerial[i]=Serial.read(); 
         i++;      
       }
       inSerial[i]='\0';
     
     }
    
  
   
  int czas, dystans;
 
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
 
  czas = pulseIn(echoPin, HIGH);
  dystans = czas / 58;
  
  Serial.println(dystans);
 
  delay(500); 
  Check(inSerial,dystans);
}
void Check(char inStr[],int odl){   
  int i=0;
  int m=0;
  int a;
  String odebrana=inStr;

  a=odebrana.toInt();
  if(odl < a)
  {
    digitalWrite(6, HIGH);
      for(m=0;m<25;m++){
      inStr[m]=0;
      }
    i=0;
  }
  
  if(odl > a)
  {
    digitalWrite(6, LOW);
      for(m=0;m<25;m++){
      inStr[m]=0;
      }
    i=0;
  }

    for(m=0;m<25;m++){
      inStr[m]=0;
      }
    i=0;

}

  
>>>>>>> 7a5bca5e3f8028c0a097ff374657cf338a9217e7
