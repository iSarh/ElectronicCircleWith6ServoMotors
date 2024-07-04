#include <Servo.h>

Servo myservo1;
Servo myservo2;
Servo myservo3; // هنا عرفنا المتغيرات على 6 محركات سيرفو
Servo myservo4;
Servo myservo5;
Servo myservo6;

 int i = 0; // هنا عرفنا متغير  i  بقيمة 0
void setup(){
  myservo1.attach(3);
  myservo2.attach(5); 
  myservo3.attach(6);  // هنا عرفنا الاماكن او المنافذ تبع ال 6 محركات 
  myservo4.attach(9);
  myservo5.attach(10);
  myservo6.attach(11);

 
  
  }

  void loop(){
    for(i=0; i<180; i++){ // هنا اعطينا حلقة بحيث تعطي قيم بشكل مستمر
    myservo1.write(i);
    myservo2.write(i);
    myservo3.write(i);   // هنا خلينا المحركات تتحرك على القيم المتغيرة تبع حرف  i 
    myservo4.write(i);
    myservo5.write(i);
    myservo6.write(i);
    delay(20);
    }

    for(i=180; i>0; i--){  // هذي دائرة تناقص عكسية

    myservo1.write(i);
    myservo2.write(i);
    myservo3.write(i);
    myservo4.write(i);
    myservo5.write(i);   // تتحرك بناءا على القيم تبع حرف i 
    myservo6.write(i);
    delay(20);
    }
    }