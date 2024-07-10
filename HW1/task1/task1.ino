int button = 7;
int GREEN = 4;
int YELLOW = 3;
int RED = 2;
void setup() {
    pinMode(GREEN, OUTPUT); 
  	pinMode(YELLOW, OUTPUT); 
  	pinMode(RED, OUTPUT); 
    pinMode(button, INPUT); 
} 
void loop (){
    digitalWrite(GREEN, HIGH);
  	delay(3000);
  	for(int i=0; i<3; i++){	
  		digitalWrite(GREEN, LOW);
      	delay(500);
      	digitalWrite(GREEN, HIGH);
      	delay(500);
  	}
  	digitalWrite(GREEN, LOW);
    digitalWrite(YELLOW, HIGH);
  	delay(2000);
  	digitalWrite(YELLOW, LOW);
  	digitalWrite(RED, HIGH);
    delay(5000);  	
  	digitalWrite(RED, LOW);
}