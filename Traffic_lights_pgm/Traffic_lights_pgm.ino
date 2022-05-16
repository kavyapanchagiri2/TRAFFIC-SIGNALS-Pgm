//traffic lights pgm//
int GREEN = 3;
int YELLOW = 4;
int RED = 5;
int DELAY_GREEN = 4000;
int DELAY_YELLOW = 3000;
int DELAY_RED = 4000;
void setup()
{
  pinMode(GREEN,OUTPUT);
  pinMode(YELLOW,OUTPUT);
  pinMode(RED,OUTPUT);
}
void loop()
{
  green_light();
  delay(DELAY_GREEN);
  yellow_light();
  delay(DELAY_YELLOW);
  red_light();
  delay(DELAY_RED);
}
void green_light()
{
  digitalWrite(GREEN,HIGH);
  digitalWrite(YELLOW,LOW);
  digitalWrite(RED,LOW);
}
void yellow_light()
{
  digitalWrite(GREEN,LOW);
  digitalWrite(YELLOW,HIGH);
  digitalWrite(RED,LOW);
}
void red_light()
{
  digitalWrite(GREEN,LOW);
  digitalWrite(YELLOW,LOW);
  digitalWrite(RED,HIGH);
}
