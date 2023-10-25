// Enviroment test
void setup(){
    pinMode(13, OUTPUT);
}

void loop(){
    while (1){
        digitalWrite(13, HIGH);
        delay(1000);
        digitalWrite(13, LOW);
        delay(500);
    }
}