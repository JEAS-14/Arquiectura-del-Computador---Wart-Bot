// Pines del L298N para el Motor Izquierdo
const int motor1Pin1 = 13;  // IN1
const int motor1Pin2 = 12;  // IN2
const int enable1 = 11;     // ENA (PWM para velocidad)

// Pines del L298N para el Motor Derecho
const int motor2Pin1 = 8;  // IN3
const int motor2Pin2 = 7;  // IN4
const int enable2 = 6;     // ENB (PWM para velocidad)

// Pines del sensor ultrasónico
const int trigPin = 3;
const int echoPin = 2;

// Constantes para los modos
const int MODO_BUSQUEDA = 0;
const int MODO_ATAQUE = 1;
const int MODO_INACTIVO = 2;

// Rango de distancia para detectar el objeto (en centímetros)
const int rangoDetectado = 100;
const int rangoAtaque = 25;

// Variables para control de tiempo
unsigned long tiempoUltimaLectura = 0;
const int intervaloLectura = 50;

void setup() {
  // Configuración de los pines de los motores como salida
  pinMode(motor1Pin1, OUTPUT);
  pinMode(motor1Pin2, OUTPUT);
  pinMode(enable1, OUTPUT);
  
  pinMode(motor2Pin1, OUTPUT);
  pinMode(motor2Pin2, OUTPUT);
  pinMode(enable2, OUTPUT);

  // Configuración del sensor ultrasónico
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);

  Serial.begin(9600);
  Serial.println("Robot chalactus - Modo búsqueda");
}

void loop() {
  // Medir distancia y decidir si avanzar, atacar o buscar
  int distancia = medirDistancia();

  if (distancia == -1 || distancia > rangoDetectado) {
    // Si no detecta nada, gira buscando
    Serial.println("Girando - Buscando objeto...");
    detener();
    girar();
  } 
  else if (distancia <= rangoAtaque) {
    // Si está en rango de ataque, se detiene y ataca
    detener();
    atacar();
  } 
  else {
    // Si está en el rango de detección pero fuera del rango de ataque, avanza
    Serial.println("Avanzando hacia el objeto...");
    avanzar();
  }

  delay(20);  // Pequeño retraso para estabilizar lecturas
  Serial.print("Distancia: ");
  Serial.println(distancia);
}

// Función para medir la distancia usando el sensor ultrasónico
int medirDistancia() {
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  long duracion = pulseIn(echoPin, HIGH);
  int distancia = duracion * 0.034 / 2;
  if (distancia > rangoDetectado || distancia <= 0) return -1; // Distancia inválida
  return distancia;
}

// Función para girar el vehículo en su propio eje
void girar() {
  // Un motor hacia adelante y el otro hacia atrás para girar en su propio eje
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, HIGH);

  analogWrite(enable1, 170);  // Ajusta la velocidad si es necesario
  analogWrite(enable2, 170);  // Ajusta la velocidad si es necesario
}

// Función para hacer que el carrito avance hacia el objeto detectado
void avanzar() {
  // Ambos motores hacia adelante
  digitalWrite(motor1Pin1, HIGH);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, HIGH);
  digitalWrite(motor2Pin2, LOW);

  analogWrite(enable1, 255);  // Velocidad máxima
  analogWrite(enable2, 255);  // Velocidad máxima
}

// Función para detener el movimiento del carrito
void detener() {
  digitalWrite(motor1Pin1, LOW);
  digitalWrite(motor1Pin2, LOW);
  digitalWrite(motor2Pin1, LOW);
  digitalWrite(motor2Pin2, LOW);

  analogWrite(enable1, 0);
  analogWrite(enable2, 0);
}

// Función para realizar la acción de ataque
void atacar() {
  Serial.println("¡Atacando al objetivo!");
  // Aquí puedes definir la acción de ataque, como emitir un sonido o activar un LED.
  for (int i = 0; i < 3; i++) {
    Serial.println("Ataque en curso");
    delay(100);
  }
}
