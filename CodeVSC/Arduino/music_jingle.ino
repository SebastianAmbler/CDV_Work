// Pin for the buzzer
const int buzzer = 13;

// Notes for "Jingle Bells"
#define NOTE_B3  247
#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494

// Define melody and note durations
int melody[] = {
  NOTE_E4, NOTE_E4, NOTE_E4, // Jingle bells
  NOTE_E4, NOTE_E4, NOTE_E4, // Jingle bells
  NOTE_E4, NOTE_G4, NOTE_C4, NOTE_D4, NOTE_E4, // Jingle all the way
  NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_F4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_E4, NOTE_D4, NOTE_D4, NOTE_E4, NOTE_D4, NOTE_G4 // Oh, what fun...
};

// Note durations: 4 = quarter note, 8 = eighth note, etc.
int noteDurations[] = {
  8, 8, 4, // Jingle bells
  8, 8, 4, // Jingle bells
  8, 8, 8, 8, 4, // Jingle all the way
  8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 8, 4, 4 // Oh, what fun...
};

void setup() {
  // Play the melody
 
}

void loop() {
  // No need to loop
   for (int thisNote = 0; thisNote < sizeof(melody)/sizeof(melody[0]); thisNote++) {
    int noteDuration = 1000 / noteDurations[thisNote]; // Calculate note duration
    tone(buzzer, melody[thisNote], noteDuration); // Play the note

    // Pause between notes
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);

    // Stop the tone to separate notes
    noTone(buzzer);
  }
}
