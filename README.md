# HackIt25 🎵

**“Never Gonna Give You Up” Piezo Buzzer Arduino Project**

This repository contains an Arduino sketch that plays a Piezo buzzer rendition of the famous song *“Never Gonna Give You Up”* by Rick Astley. It’s a fun project for beginners to learn about Arduino, tone generation, and piezo buzzers.

---

## About

- **Project Type:** Arduino / Embedded Systems  
- **Difficulty:** Beginner  
- **Components Used:** Arduino board, Piezo buzzer, jumper wires  

This project is perfect for Hacktoberfest 2025 contributions, practicing Arduino coding, or just having fun with music and electronics!

---

## Getting Started

### Hardware Required

- Arduino Board (Uno, Nano, Mega, etc.)  
- Piezo buzzer  
- Breadboard and jumper wires (optional)  

### Connections

- Connect the positive pin of the buzzer to digital pin `8` of Arduino.  
- Connect the negative pin of the buzzer to `GND`.  

### Arduino Sketch

Copy this code into your Arduino IDE:

```cpp
/* Rick Roll - Never Gonna Give You Up (Piezo Buzzer) */

const int buzzerPin = 8;

int melody[] = { 659, 659, 659, 523, 659, 784, 392, 523, 392, 330, 440, 494, 466, 440, 392, 659, 784, 880, 698, 784, 659 };
int noteDurations[] = { 250, 250, 500, 500, 500, 500, 500, 500, 500, 500, 500, 500, 250, 250, 500, 250, 500, 500, 500, 500, 500 };

void setup() {}
void loop() {
  for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(melody[0]); thisNote++) {
    int noteDuration = noteDurations[thisNote];
    tone(buzzerPin, melody[thisNote], noteDuration);
    delay(noteDuration * 1.30);
    noTone(buzzerPin);
  }
  delay(2000);
}
```

## How to Run

- Install Arduino IDE
- Open the Arduino IDE and paste the sketch above.
- Connect your Arduino board via USB.
- Select your board type and port under Tools > Board and Tools > Port.
- Click Upload to upload the code.
- Listen as the Piezo buzzer plays the song! 🎵

## Contributing

- This project is open for Hacktoberfest 2025!
- Feel free to improve the code, add more songs, or optimize the buzzer melody.
- Add proper comments, document changes, or create a new song sketch.
- Don’t forget to create a PR with the hacktoberfest-accepted label.

## License

- This project is open-source.
- The song “Never Gonna Give You Up” is not the original author’s creative property. This code only reproduces a piezo buzzer rendition.

## Acknowledgements

- Arduino community for inspiration
- Rick Astley for the song 🎶