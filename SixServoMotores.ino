#include <Servo.h>
//create servo object to control a servo
Servo myservo1;
Servo myservo2;
Servo myservo3; // هنا عرفنا المتغيرات على 6 محركات سيرفو
Servo myservo4;
Servo myservo5;
Servo myservo6;

//variable to store the servo position
int pos = 0; // متغير لتخزين موقع السيرفو

void setup(){
// attach the servoes on pins
  myservo1.attach(3);
  myservo2.attach(5); 
  myservo3.attach(6);  //  عرفناالمنافذ تبع ال 6 محركات 
  myservo4.attach(9);
  myservo5.attach(10);
  myservo6.attach(11);
  
  }

  void loop(){
    //tell servo to go to postion in veriable pos
    //gose from 0 to 180 
    for(pos=0; pos<180; pos++){ // حلقة تحرك السيرفو من 0 الى 180 
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);   // هنا خلينا المحركات تتحرك على القيم المتغيرة تبع موقع السيرفو pos 
    myservo4.write(pos);
    myservo5.write(pos);
    myservo6.write(pos);
    delay(20);
    }

    for(pos=180; pos>0; pos--){  //  دائرة تناقص عكسية من 180 الى 0
    //tell servo to go to postion in veriable pos
    //gose from 180 to 0 
    myservo1.write(pos);
    myservo2.write(pos);
    myservo3.write(pos);
    myservo4.write(pos);
    myservo5.write(pos);   // تتحرك بناء على القيم تبع pos 
    myservo6.write(pos);
    delay(20);
    }
    }