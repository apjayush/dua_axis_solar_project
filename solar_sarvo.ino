# include <servo.h>
Servo servo1;
Servo servo2;
int pos1=0;
int pos2=0;
int up=0;
int down=0;
int right=0;
int left=0;
int centre=0;
int ldr1=0;
int ldr2=0;
int ldr3=0;
int ldr4=0;
int ldr5=0;
void setup ()
{
 servo1.attach(10);
 servo1.write(90);
 servo2.attach(9);
 servo2.write(90);
 pinMode(ldr1, INPUT);
 pinMode(ldr2, INPUT);
 pinMode(ldr3, INPUT);
 pinMode(ldr4, INPUT);
 pinMode(ldr5, INPUT);
}
41
void loop ()
{
 pos1=servo1.read();
 pos2=servo2.read();
 int up= analogRead(ldr1);
 int down= analogRead(ldr2);
 int centre= analogRead(ldr3);
 int right= analogRead(ldr4);
 int left= analogRead(ldr5);
 //for conrol of vertical i.e. up-down(east-west) position
 if (up>centre << down<centre)
 {
 servo1.write(pos1+1);
 delay(10);
 }
 else if (down>centre << up<centre)
 {
 servo1.write(pos1-1);
 delay(10);
 }
 else
 {
 servo1.write(pos1);
 delay(10);
 }
