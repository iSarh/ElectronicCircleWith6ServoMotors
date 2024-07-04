# ElectronicCircleWith6ServoMotors
Connecting and programming an electronic circuit containing 6 servo motors on Tinkercad

توصيل وبرمجة دائرة الكترونية تحتوي على 6 محركات على Tinkercad
# المتطلبات :
- سيرفو يدور 180
- بطارية 9V
- مثبت LM7805
- اردوينو

# الشرح 

**الاردوينو**

كل محرك سيرفو يحتاج مايقارب 5V ولا يمكن للاردوينو ان يشغل 6 محركات سيرفو بنفسه سيودي الى تلف منفذ USB واللوحه، لذا نحتاج مصدر طاقة خارجي "بطارية 9V"

طلعنا سالب من الاردوينو الى سالب في لوحة التجارب او بالاصح الى البطارية وهذا مهم عشان تكون الدائرة منتظمة.
اخترنا منافذ 3,5,6,9,10,11 لان هذه المنافذ PWM وهذي الخاصية تسمح لنا نتحكم بالجهد الطالع


  
  ![TheElectronicCircle](https://github.com/iSarh/ElectronicCircleWith6ServoMotors/assets/63901303/4b48e0ca-4f42-40a8-8b58-600cc67d6ee6)



 **السيرفو**
 
  الاسلاك الموجودة على السيرفو: البنية سالب, الاحمرموجب , اما البرتقالية فيها الاشارة
  
  الاسلاك الخارجة من السيرفو: الاسود سالب , الاحمر موجب , الاصفر الاشارة

  
  ![TheElectronicCircle s](https://github.com/iSarh/ElectronicCircleWith6ServoMotors/assets/63901303/5ab68b8d-e0f9-4c6c-a2d9-044d7e7d5488)



**البطارية**

عندنا 6 محركات كل محرك ياخذ 5V هذا لايعني ان الجهد 30V. نحتاج نوفر جهد 5V فقط وايضا الامبير في المحرك الواحد بحد اقصى ياخذ 1 امبير والبطارية توفره لذلك استخدمنا بطارية 9V ومثبت.

![TheElectronicCircle pwr](https://github.com/iSarh/ElectronicCircleWith6ServoMotors/assets/63901303/f4ee3408-59a6-4dc6-bb8b-546b040ac3c1)


**المثبت**

له 3 اطراف وهي موجب وسالب والنتيجة اللي هيا ال5V الثابت
وظيفته يثبت الجهد فيتحمل تيار عالي مقابل يعطي جهد ثابت.هذا المثبت يتحمل تيار نوعا ما عالي ويخرج 5V. اعطيناه 9V مقابل يخرج 5V ووصلنا الاشاره منه وهي الجهد الثابت 5V بالمحركات.


  
![TheElectronicCircle lm](https://github.com/iSarh/ElectronicCircleWith6ServoMotors/assets/63901303/808d0853-4a34-4e60-a566-bd6023337552)

  

 
