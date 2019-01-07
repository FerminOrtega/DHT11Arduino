# Arduino DHT11, temperatura y humedad con Pantalla LCD 16x2
Controla la temperatura y la humedad en de cualquier lugar con el sensor DHT11 de temperatura y humedad, genial para controlar las temperaturas de un hogar, invernadero, terrario de mascotas...

## Componentes y materiales 
1. Placa de Arduino (se usará para el ejemplo la placa Arduino UNO)
2. Sensor DHT11
3. Pantalla LCD 16x2 con I2C
4. Protoboard (opcional)
5. Cables de puente

## Librerias necesarias
* [LiquidCrystal - I2C Version 1.3.5](https://github.com/fdebrabander/Arduino-LiquidCrystal-I2C-library)
* [DHT](https://github.com/adafruit/DHT-sensor-library)

## Cosas a tener en cuenta
Nuestra pantalla LCD tiene un I2C esto reduce todos los pines que tiene nuestra pantalla a simplemente a 4 pines.
Lo que tendremos en cuenta es la direccion que tiene este I2C, esto lo sabremos con un programa que nos dice la direccion de la pantalla. En nuestra pantalla es la direccion 0x27.

## El sensor DHT11, como conectarlo
![alt text](https://www.inventelectronics.com/wp-content/uploads/2017/03/dht11-01.jpg)

El sensor normalmente tiene 4 pines pero el que nosotros usamos tiene una placa que nos lo reduce a 3 ya que un pin del sensor no se usa. estos pines se marcan con:
* '+' -> 5v
* '-' -> gnd
* out -> D4

## Pantalla LCD 16x2 I2C, como conectarlo
![alt text](https://http2.mlstatic.com/display-lcd-16x2-azul-modulo-i2c-incluido-arduino-pic-1602-D_NQ_NP_743251-MCO26219557133_102017-F.jpg)

Como ya hemos comentado antes, ya hemos mecionado que gracias a I2C reducimos las conexiones a 4 pines, estos son:
* GND -> gnd
* VCC -> 5V
* SDA -> A4
* SCL -> A5

## Esquema
Si combinamos todos los sensores con la placa de arduino, nos tendría que quedar algo así.

![alt text](https://raw.githubusercontent.com/FerminOrtega/DTH11Arduino/master/EsquemaCircuito.png)


## Hora de programar!
Se adjunta en el proyecto dos ficheros, uno es el I2C scaner para detectar la pantalla y otro es el codigo con el sensor DHT11
