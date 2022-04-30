int red = D2; // Set Red LED to pin D2
int green = D3; // Set Green LED to pin D3
int blue = D4; // Set Blue LED to pin D4


void setup() {
    // Set Pin as OUTPUT
    pinMode(red,OUTPUT); 
    pinMode(green,OUTPUT); 
    pinMode(blue,OUTPUT); 
    
    // Turn Off All LED 
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
    
    Particle.function("Light", light); // Run Light in Cloud 
    

}

void loop() {}

int light (String color){ 
    if(color == "RED"){ // if the color is red, turn on RED LED
        digitalWrite(red, HIGH);
        digitalWrite(green, LOW);
        digitalWrite(blue, LOW);
        return 1;
    }
    else if (color == "GREEN"){ // if the color is green, turn on GREEN LED
        digitalWrite(green, HIGH);
        digitalWrite(red, LOW);
        digitalWrite(blue, LOW);
        return 1;
       
    }
     else if(color == "BLUE"){ // if the color is blue, turn on blue LED
         digitalWrite(blue, HIGH);
         digitalWrite(red, LOW);
         digitalWrite(green, LOW);
         return 1;
    }
    else {
        return 0;
    }
}
