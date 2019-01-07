// Incluimos las librerias
#include <Wire.h>
#include <DHT.h>
#include <LiquidCrystal_I2C.h>
// Definimos el pin digital donde se conecta el sensor
#define DHTPIN 4
// definimos del tipo de sensor
#define DHTTYPE DHT11 
// Definimos la pantalla LCD
LiquidCrystal_I2C lcd(0x27, 2, 1, 0, 4, 5, 6, 7, 3, POSITIVE);
// Definimos el dth para poder obtener sus valores  
DHT dht(DHTPIN, DHTTYPE);
void setup() {
  lcd.begin(16,2); //Definimos las dimensiones de nuestra pantalla ancho x alto
  lcd.backlight();
  dht.begin();
}
void loop() {
  float temp = dht.readTemperature(); // Leemos la Temperatura
  float humi = dht.readHumidity(); // Leemos la Humedad
  lcd.setCursor(0,0); // Posicionamos el cursor de nustra pantalla para empezar a escribir

  //Escribimos los datos
  lcd.print("Temp: ");
  lcd.print(temp);
  lcd.print(" C");
  lcd.setCursor(0,1);
  lcd.print("Hume: ");
  lcd.print(humi);
  lcd.print(" %");
  //Mostramos los datos durante dos segundos y volvemos a tomar nuevos valores
  delay(2000);
}
