/*5 DOF Manipulator 
 FARHANG NADERI
 2019 Robotics Advanced Course*/


#include <Servo.h>
//Servo initiation

Servo servo1;
Servo servo2;
Servo servo3;
Servo servo4;
Servo servo5;



int pos=0;
int pos1=0;
int pos2=0;
int pos3=0;
int pos4=0;
int pos5=0;


void setup() {
 { 
//  Serial.begin(9600);

//Pin Assignment

     
  delay(500);
  servo2.attach(6); 
  delay(500); 
  servo3.attach(7);
  delay(500);  
  servo1.attach(5);
  delay(500);
  servo4.attach(8);  
  delay(500);
  servo5.attach(9);  
  delay(500);
  
//Robot Position Reset

//  servo1.write(60); 
//  delay(500);  
//  servo2.write(80);  
//  delay(500); 
//  servo3.write(90);   
//  delay(500);
//  servo4.write(90);  
//  delay(500); 
//  servo5.write(60);   
  
 } 
}


void loop() 
{
 //Soft Start
 
  delay(5000);

  //Picking Inititation
  for (pos1 = servo1.read(); pos1 <= 120; pos1 += 1)
  
  { 
    servo1.write(pos1);              
    delay(50);                       
  }
  


  for (pos2 = servo2.read(); pos2 >= 70; pos2 -= 1) { 
    servo2.write(pos2);              
    delay(50);  
   //speed control
 }
 

  for (pos4 = servo4.read(); pos4 >= 50; pos4 -= 1)
  
  { 
    servo4.write(pos4);              
    delay(50);                       
  }
  
  for (pos3 = servo3.read(); pos3 <= 130; pos3 += 1)
  { 
    servo3.write(pos3);              
    delay(50);  
 }
 
 

  for (pos = servo5.read(); pos >= 50; pos -= 1) 
  { 
    servo5.write(pos);              
      delay(50);  }

      for (pos = servo5.read(); pos <= 120; pos += 1) 
  { 
    servo5.write(pos);              
      delay(50);  }
//Picking finished

//Placing initiates

 for (pos3 = servo3.read(); pos3 >= 90; pos3 -= 1)
  { 
    servo3.write(pos3);              
    delay(50);  
  }

   for (pos1 = servo1.read(); pos1 >= 20; pos1 -= 1)
  
  { 
    servo1.write(pos1);              
    delay(50);                       
  }
  
  for (pos3 = servo3.read(); pos3 <= 130; pos3 += 1)
  { 
    servo3.write(pos3);              
    delay(50);  
 }

 for (pos = servo5.read(); pos >= 50; pos -= 1) 
  { 
    servo5.write(pos);              
      delay(50);  }
      
//Placing Finishes
      
   for (pos3 = servo3.read(); pos3 >= 90; pos3 -= 1)
  { 
    servo3.write(pos3);              
    delay(50);  
  }
  
    delay(5000);  //Waiting time to begin again
    
    
}
