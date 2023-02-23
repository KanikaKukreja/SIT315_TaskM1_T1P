//Kanika Kukreja
//2110994766
// C++ code

//Defining some variables 
float temp;
float tempC = 0;
float tempF = 0;
//buzzer pin at 7
int buzzer = 7;
void setup()
{
pinMode(A0, INPUT);//defining pin mode A0 of temerature sensor as an input
pinMode(buzzer, OUTPUT);//defining the buzzer pin as an output pin
Serial.begin(9600);//beginning the serial communication
}

void loop()
{
temp = analogRead(A0);//Reading the analpog value from temperature sensor.
temp =((temp*5)/1024);
tempC = ((temp-0.5)*100);//Changing the termperature in celsius 
tempF = ((tempC)* 9/5 + 32);//Changing the termperature in farenheit
Serial.print("Temperature = ");
Serial.print(tempC);
Serial.print(" C , ");
Serial.print(tempF);
Serial.println(" F ");
if (temp <=22)
{
noTone(buzzer);
delay(1000);
}
//if loop
if (temp >= 18 && temp <= 22)
{
noTone(buzzer);
delay(1000);
}
if (temp > 23)
{
tone(7, 1000);
delay(200);
}
}
