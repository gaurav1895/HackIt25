# We go Python now

# Initializing

import numpy as np
import simpleaudio as sa
import time

# Frequencies for notes (in Hz)
notes = {
    'B3': 247, 'C4': 262, 'CS4': 277, 'D4': 294, 'DS4': 311,
    'E4': 330, 'F4': 349, 'FS4': 370, 'G4': 392, 'GS4': 415,
    'A4': 440, 'AS4': 466, 'B4': 494, 'C5': 523, 'CS5': 554,
    'D5': 587, 'DS5': 622, 'E5': 659, 'F5': 698, 'FS5': 740,
    'G5': 784, 'GS5': 831, 'A5': 880, 'AS5': 932, 'B5': 988
}

# Generate a buzzer-like square wave
def play_tone(frequency, duration, volume=0.4):
    fs = 44100  # sampling rate
    if frequency == 0:
        time.sleep(duration)
        return
    
    t = np.linspace(0, duration, int(fs * duration), False)
    # Generate square wave (±1)
    wave = np.sign(np.sin(2 * np.pi * frequency * t)) * volume
    # Convert to 16-bit PCM
    audio = np.int16(wave * 32767)
    sa.play_buffer(audio, 1, 2, fs).wait_done()
