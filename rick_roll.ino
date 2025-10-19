/*  Rick Roll

    DISCLAIMER: The song "Never Gonna Give You Up" by Rick Astley
    is not  the creative property of the author. This code simply
    plays a Piezo buzzer  rendition of the song.
*/

/*  
    Rick Roll - Never Gonna Give You Up (Piezo Buzzer)
    DISCLAIMER: This is a buzzer rendition of the song.
*/

// Pin where the Piezo buzzer is connected
const int buzzerPin = 8;

// Notes of the song (frequencies in Hz)
int melody[] = {
  659, 659, 659, 523, 659, 784, 392, // Line 1
  523, 392, 330, 440, 494, 466, 440, // Line 2
  392, 659, 784, 880, 698, 784, 659  // Line 3
};

// Duration of each note (in milliseconds)
int noteDurations[] = {
  250, 250, 500, 500, 500, 500, 500,
  500, 500, 500, 500, 500, 250, 250,
  500, 250, 500, 500, 500, 500, 500
};

void setup() {
  // Nothing to setup
}

void loop() {
  // Play each note
  for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(melody[0]); thisNote++) {
    int noteDuration = noteDurations[thisNote];
    tone(buzzerPin, melody[thisNote], noteDuration);
    
    // Pause between notes
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    
    // Stop the tone
    noTone(buzzerPin);
  }

  // Wait before repeating the song
  delay(2000);
}
