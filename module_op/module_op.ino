/*
 * Estructura básica
 * Por: Alain Manzo Martínez
 * Fecha: 8 de Abril de 2022
 * 
 * Esto es una muestra de la estructura básica de un programa
 */

// Bibliotecas

// Constantes

// Variables
int dato = 0;
float time_Start, time_Finish;
// Definición de objetos

// Condiciones iniciales - Se ejecuta sólo una vez al energizar
void setup() {// Inicio de void setup ()
  // Aquí va tu código
  Serial.begin(115200);
  Serial.println("Puerto Serial Inicializado!");
  delay(5000); 

}// Fin de void setup

// Cuerpo del programa - Se ejecuta constamente
void loop() {// Inicio de void loop
  // put your main code here, to run repeatedly:
  time_Start = micros();
  for (int i=0;i<1000;i++){
    dato++;
    dato %= 8;
    }
  time_Finish = micros();
  Serial.println("Usando Operador:");
  Serial.println(time_Start - time_Finish);
  delay(1000); 

  time_Start = micros();
  for (int i=0;i<1000;i++){
    dato++;
    if(dato < 9){
      dato = 0;
      }
    }
  time_Finish = micros();
  Serial.println("Usando if:");
  Serial.println(time_Start - time_Finish);
  delay(1000);
}// Fin de void loop

// Funcioes del usuario
