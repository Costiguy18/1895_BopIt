//Assignment 9 - 1895 - Code
// Elijah Hyndman: this is a comment for Assignment 9 ECE 1895
//THIS IS NOW MY CODE HAAHAHAHAHAH
//THIS IS NOW MY CODE HAAHAHAHAHAH
//THIS IS NOW MY CODE HAAHAHAHAHAH
//THIS IS NOW MY CODE HAAHAHAHAHAH
//THIS IS NOW MY CODE HAAHAHAHAHAH
//THIS IS NOW MY CODE HAAHAHAHAHAH
//THIS IS NOW MY CODE HAAHAHAHAHAH

const int buttonPin = 1;     // the number of the pushbutton pin
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status


void setup() 
{
  
  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);
  // initialize the pushbutton pin as an input:
  pinMode(buttonPin, INPUT);
  
}

void loop() 
{
  
  // put your main code here, to run repeatedly:
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);

  //check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(ledPin, HIGH);
    delay(1000);
    digitalWrite(ledPin,LOW);
    delay(1000);
  } else {
    // turn LED off:
    digitalWrite(ledPin, LOW);
  }

}
