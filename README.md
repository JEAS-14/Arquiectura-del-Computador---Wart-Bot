
<a href="https://deepwiki.com/JEAS-14/Arquiectura-del-Computador---Wart-Bot"><img src="https://deepwiki.com/badge.svg" alt="Ask DeepWiki"></a>


🤖 Arquitectura del Computador - Wart Bot (Iniciativa Killer-Bot)

Proyecto de diseño, desarrollo y simulación de un robot de batalla autónomo ("Wart Bot"), conocido como "Iniciativa Killer-Bot", enfocado en la aplicación práctica de principios de arquitectura de computadores, robótica y programación embebida. Desarrollado para la feria de Arquitectura del Computador en la Universidad Privada del Norte.

💡 Acerca del Proyecto

Este repositorio contiene el proyecto "Wart Bot", un robot de batalla autónomo diseñado para la feria de Arquitectura del Computador. El proyecto demostró la integración de hardware y software para crear un sistema funcional con movilidad, aplicando principios de control de microcontroladores y lógica de sistemas embebidos.

![Wart Bot en acción](assets/wart-bot-accion.gif)
![Simulación en Proteus](assets/proteus-simulacion.png)

🎯 Objetivos

- Diseño y Desarrollo: Crear un robot autónomo y atractivo para la feria.

- Aplicación Práctica: Demostrar el uso de Arduino y C++ en sistemas autónomos.

- Integración de Sistemas: Unir componentes electrónicos y mecánicos para la movilidad.

- Fomento del Interés: Promover la robótica y programación de forma entretenida.

- Accesibilidad: Desarrollar un sistema robusto con componentes económicos.

⚙️ Funcionalidades

- Movilidad Autónoma: Desplazamiento independiente y estratégico.

- Detección de Objetos: Sensor ultrasónico (HC-SR04) para detectar obstáculos y oponentes.

- Lógica de Combate: Gira hasta encontrar al oponente y lo empuja fuera del área.

 - Arma Giratoria: Actuador de ataque con motor independiente y batería dedicada.

- Control de Motores: Driver Puente H L298N para control preciso de la dirección.

🛠️ Tecnologías y Componentes Utilizados

- Microcontrolador: Arduino Uno | Plataforma de hardware y software abierto para el control del robot.

- Programación: C++ | Lenguaje de programación utilizado para el microcontrolador Arduino.

- Simulación : Proteus 9 Professional | Herramienta para la simulación del circuito electrónico y el comportamiento del robot.
  
- Drivers: Driver Puente H L298N | Permite cambiar la polaridad de la corriente para controlar el sentido de giro de los motores.

- Sensores: Sensor Ultrasonido HC-SR04 | Mide distancias para la detección de obstáculos y otros bots.

- Actuadores: Motores DC 9V | Motores reductores que proporcionan el movimiento y torque al robot.
  
    Juego de Poleas con faja | Transmite el movimiento para la activación del arma giratoria.

- Alimentación: Pilas de Litio 1800mAh (3.6-4.2V) | Proporcionan energía al Puente H y al Arduino.

    Batería 12V 7AH RITAR RT1270 | Alimentación específica para el motor del arma giratoria.

- Porta Batería y Interruptor: On/OffPara alojar baterías y controlar el encendido/apagado.

| Estructura |

- Melamina: Material utilizado para el chasis del Battle-bot.

- Barra de Metal y Ruedas | Componentes para la estructura y movilidad del robot.

| Conectividad |

- Jumpers

- Cables para interconexión entre componentes.

🏗️ Proceso de Desarrollo

El desarrollo del Wart Bot se llevó a cabo en las siguientes fases:

- Elaboración del Diseño: Adaptación de un diseño existente para lograr un funcionamiento autónomo.

- Elaboración del Prototipo: Construcción de un prototipo en cartón para definir medidas y ubicación de componentes.

- Alimentación del Battle-bot: Implementación de un sistema de alimentación con pilas de litio y batería para el arma.

- Implementación de Motores: Conexión de motores al Puente H y control desde Arduino.

- Creación del Código en Arduino: Programación en C++ para detección y maniobra autónoma.

- Armado del Battle-bot: Construcción del chasis de melamina e integración de todos los componentes.

  
  <img width="559" height="508" alt="image" src="https://github.com/user-attachments/assets/16bbef4d-f6e9-4b1f-9199-f11b12f2fdca" />


📊 Resultados

El proyecto demostró la viabilidad de un sistema autónomo de combate, con los siguientes resultados clave:

 - Movilidad y Control: Velocidad promedio de 0.5 m/s y giros completos en 20 cm de radio.

 - Detección y Respuesta: Sensor ultrasónico con 1.5 metros de alcance y reacción en 0.5 segundos.

 - Arma Giratoria: Rotaciones de 360° en 2.5 segundos, con efectividad simulada.

- Autonomía Energética: 5 minutos de uso continuo con pilas, 60 activaciones del arma con su batería.

⚠️ Limitaciones
Duración de las Pilas: Autonomía limitada para misiones extendidas.

Sensibilidad del Sensor: Fallos ocasionales en detección bajo ciertas condiciones.

Potencia del Arma: Baja potencia de golpe del arma giratoria.

✅ Conclusiones
Este proyecto valida la aplicación de Arduino y C++ en robótica autónoma, demostrando la creación de robots funcionales con componentes económicos. Fue una experiencia educativa y divertida que fomentó el interés en la robótica y programación.

<img width="658" height="456" alt="image" src="https://github.com/user-attachments/assets/c3937472-ec17-43f4-957b-7c24c7515907" />


📁 Estructura del Repositorio 

.
├── BATTLEBOT.ino            # Código principal para Arduino
├── Battlebot.pdsproj        # Archivo de proyecto para simulación en Proteus 9 Professional
├── Informe WartBot.pdf      # Informe detallado del proyecto
└── README.md                # Este archivo
🚀 Instalación y Simulación
Para explorar o simular el proyecto:
https://github.com/JEAS-14/Arquiectura-del-Computador---Wart-Bot.git

| Abrir en Arduino IDE |

Asegúrate de tener las librerías necesarias instaladas (si aplica).

Puedes compilar y subir el código a una placa Arduino física si deseas probarlo en hardware.

Abrir en Proteus 9 Professional:

Abre el archivo Battlebot.pdsproj con Proteus 9 Professional para visualizar el diseño del circuito y ejecutar la simulación del Wart Bot.

🧑‍💻 Autores

Juan Elias Arango Salvador

Manases Neftali Huaman Churo

Asesor:

Cesar Augusto Reyes Gutierrez

✉️ Contacto
Si tienes preguntas o comentarios sobre este proyecto, no dudes en contactarnos:

Juan Elias Arango Salvador: N00334240@upn.pe

Manases Neftali Huaman Churo: N00310402@upn.pe

LinkedIn: linkedin.com/in/elias-juan-arango-salvador-87b782369
