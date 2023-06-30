//LCD library and initial pin definitions
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

//Musical notes
const int d4 = 294;
const int e4 = 330;
const int g4 = 392;
const int gflat4 = 370;
const int a4 = 440;
const int d5 = 587;
const int b4 = 494;
const int c5 = 523;
const int g5 = 784;
const int e5 = 659;
const int f5 = 698;

//Pin definitions
const int Blue = 9;
const int Green = 8;
const int Red = 10;
const int Button = 7;
const int Buzzer = 13;

//Text customization
char bday_name[]="Bhaia"; // name of the person
int length = strlen(bday_name); //find length of name
int spaces = (16-length)/2; //find how many spaces needed to center
int chardelay = (500/length); //determine delay in letters

void setup()
{
  lcd.begin(16,2);      //Enable LCD

 
  pinMode(Blue, OUTPUT);  //Blue
  pinMode(Green, OUTPUT);  //Green
  pinMode(Red, OUTPUT); //Red
  pinMode(Buzzer, OUTPUT); //Buzzer

  pinMode(Button, INPUT);   //Button
}

void loop()
{
    int btn = digitalRead(Button);
    Serial.println(btn);

  if(btn == 1){ //test for button press
    
    lcd.print(" Happy Birthday"); //Initial message
    lcd.setCursor(0, 1);
    
    for(int k=1; k<=spaces;k++){ //center birthday name by adding spaces
      lcd.print(" ");
    }
    lcd.print(bday_name); //print name all at once
    delay(3000);
    lcd.clear();
    
    lcd.print(" Happy");
    tone(Buzzer, d4);
    analogWrite(Red, 255);
    delay(250); //eigth note
    noTone(Buzzer);
    analogWrite(Red, 0);
    delay(100);
    tone(Buzzer, d4); 
    analogWrite(Red, 255);
    delay(125);
    lcd.print(" Birth");
    tone(Buzzer, e4);
    analogWrite(Red, 0);
    analogWrite(Blue, 255);
    delay(500);
    lcd.print("day");
    tone(Buzzer, d4);
    analogWrite(Blue, 0);
    analogWrite(Green, 255);
    delay(500);
    lcd.setCursor(0, 1);
    lcd.print("     To");
    tone(Buzzer, g4);
    analogWrite(Green, 0);
    analogWrite(Red, 255);
    delay(500);
    lcd.print(" you!");
    tone(Buzzer, gflat4);
    analogWrite(Red, 0);
    analogWrite(Blue, 255);
    delay(1000);
    noTone(Buzzer);
    lcd.clear();
    delay(500);
    analogWrite(Blue, 0);
    lcd.clear();
    lcd.print(" Happy");
    tone(Buzzer, d4);
    analogWrite(Green, 255);
    delay(250); //eigth note
    noTone(Buzzer);
    analogWrite(Green, 0);
    delay(100);
    tone(Buzzer, d4); 
    analogWrite(Red, 255);
    delay(125);
    lcd.print(" Birth");
    tone(Buzzer, e4);
    analogWrite(Red, 0);
    analogWrite(Blue, 255);
    delay(500);
    lcd.print("day");
    tone(Buzzer, d4);
    analogWrite(Blue, 0);
    analogWrite(Green, 255);
    delay(500);
    lcd.setCursor(0, 1);
    lcd.print("     To");
    tone(Buzzer, a4);
    analogWrite(Green, 0);
    analogWrite(Red, 255);
    delay(500);
    lcd.print(" you!");
    tone(Buzzer, g4);
    analogWrite(Red, 0);
    analogWrite(Blue, 255);
    delay(1000);
    noTone(Buzzer);
    lcd.clear();
    analogWrite(Blue, 0);
    delay(500);
    lcd.print("     Happy");
    tone(Buzzer, d4);
    analogWrite(6, 255);
    delay(250); //eigth note
    noTone(Buzzer);
    analogWrite(Green, 0);
    analogWrite(Red, 255);
    delay(100);
    tone(Buzzer, d4); 
    analogWrite(Red, 0);
    analogWrite(Blue, 255);
    delay(125);
    lcd.setCursor(0, 1);
    tone(Buzzer, d5);
    analogWrite(Blue, 0);
    analogWrite(Green, 255);
    lcd.print("    Birth");
    delay(500);
    lcd.print("day");
    tone(Buzzer, b4);
    analogWrite(Green, 0);
    analogWrite(Red, 255);
    delay(500);
    lcd.clear();
    lcd.print("      Dear");
    tone(Buzzer, g4);
    analogWrite(Red, 0);
    analogWrite(Blue, 255);
    delay(500);
    noTone(Buzzer);
    analogWrite(Blue, 0);
    delay(100);
    lcd.setCursor(0, 1);
    tone(Buzzer, g4);
    analogWrite(Green, 255);
    
    for(int j=1; j<=spaces; j++){ //center birthday name with spaces
      lcd.print(" ");
    }

    for(int i=0; i<=length ; i++){ //print letters in birthday name with delay
    
    lcd.print(bday_name[i]);
    delay(chardelay);
}

    tone(Buzzer, gflat4);
    analogWrite(Green, 0);
    analogWrite(Red, 255);
    delay(1000);
    lcd.clear();
    noTone(Buzzer);
    analogWrite(Red, 0);
    delay(500);
    lcd.print(" Happy");
    tone(Buzzer, c5);
    analogWrite(Blue, 255);
    delay(500);
    noTone(Buzzer);
    analogWrite(Blue, 0);
    delay(100);
    tone(Buzzer, c5);
    analogWrite(Green, 255);
    delay(250);
    lcd.print(" Birth");
    tone(Buzzer, b4);
    analogWrite(Green, 0);
    analogWrite(Red, 255);
    delay(500);
    lcd.print("day");
    tone(Buzzer, g4);
    analogWrite(Red, 0);
    analogWrite(Blue, 255);
    delay(1000);
        lcd.setCursor(0, 1);

    lcd.print("To");
    tone(Buzzer, a4);
    analogWrite(Blue, 0);
    analogWrite(Red, 255);
    delay(500);
    lcd.print(".");
    delay(500);
    lcd.print(".");
    delay(500);
    lcd.print(".");
    delay(500);
    tone(Buzzer, g5);
    lcd.print(" YOU!");
    analogWrite(Red, 0);
    analogWrite(Green, 255);
    delay(1500);
    noTone(Buzzer);
    analogWrite(Green, 0);
    lcd.clear();
    lcd.print(" From .... Avinash "); //From Ur Name
        lcd.setCursor(0, 1);
        lcd.print("......");
    delay(2000);
lcd.clear();
    lcd.print("Live Like  ");
        lcd.setCursor(0, 1);
        lcd.print(" A KING.."); 
        delay(2000);

  }else{
  
    delay(1);}
}
  