 // C++ code
//
int button = 7;
int GREEN = 4;
int YELLOW = 3;
int RED = 2;
int count = 0;
void setup() {
    pinMode(GREEN, OUTPUT); 
  	pinMode(YELLOW, OUTPUT); 
  	pinMode(RED, OUTPUT); 
    pinMode(button, INPUT); 
  	digitalWrite(GREEN, HIGH);
  	Serial.begin(9600);
} 
void loop (){
  	count = 0;
  	Serial.println("Reload...");
  	while(count!=100) { // проверка получения сигнала
    	if(digitalRead(button) != HIGH){
          if(count < 70){
              delay(3000);
          }
          	count = 100;
          	Serial.println("button press");
        }else {
      	delay(100);
      	count++;
          Serial.println("button not press");
          Serial.println(count);
        }
    }
  	digitalWrite(GREEN, LOW);
  	for(int i=0; i<3; i++){	
  		digitalWrite(YELLOW, LOW);
      	delay(500);
      	digitalWrite(YELLOW, HIGH);
      	delay(500);
  	}
  	digitalWrite(YELLOW, LOW);
  	digitalWrite(RED, HIGH);
    delay(5000);  	
  	digitalWrite(RED, LOW);
  	digitalWrite(GREEN, HIGH);
  	delay(5000);
}

