/*
const int SPEAKER_PIN = 8; // Connect the speaker or buzzer to this pin

void setup() {
  Serial.begin(9600);//enable serial monitor
  for (byte a = 2; a <= 6; a++) {
    pinMode(a, OUTPUT);
  }
  pinMode(SPEAKER_PIN, OUTPUT); // Set the speaker pin as output
}

void loop() {
  int value = analogRead(A1);//read analog value and put in to the variable
  Serial.println(value);//print serial monitor

  // Adjust the threshold values to make the sensor more sensitive to touch
  if (value > 10) {
    for (int a = 1; a <= 5; a++) {
      if (value > a * 10) {
        digitalWrite(a + 1, HIGH);
        int frequency = 0;
        if (a == 1) {
          frequency = 659; // C note
        } else if (a == 2) {
          frequency = 784; // D note
        } else if (a == 3) {
          frequency = 988; // E note
        } else if (a == 4) {
          frequency = 1047; // F note
        } else if (a == 5) {
          frequency = 1319; // G note
        }
        tone(SPEAKER_PIN, frequency); // Generate a tone with the mapped frequency
        delay(100); // Wait for 500 milliseconds
        noTone(SPEAKER_PIN); // Stop the tone
        digitalWrite(a + 1, LOW);
      } else {
        digitalWrite(a + 1, LOW);
      }
    }
  }
}/*


/* plays  one  tone = one light*/

const int SPEAKER_PIN = 8; // Connect the speaker or buzzer to this pin

void setup() {
  Serial.begin(9600);//enable serial monitor
  for (byte a = 2; a <= 6; a++) {
    pinMode(a, OUTPUT);
  }
  pinMode(SPEAKER_PIN, OUTPUT); // Set the speaker pin as output
}

void loop() {
  int value = analogRead(A1);//read analog value and put in to the variable
  Serial.println(value);//print serial monitor

  // Adjust the threshold values to make the sensor more sensitive to touch
  if (value > 1 && value < 2.5) {
    digitalWrite(2, HIGH);
    tone(SPEAKER_PIN, 659); //C Generate a tone with the mapped frequency
    delay(100); // Wait for 1000 milliseconds
    noTone(SPEAKER_PIN); // Stop the tone
    digitalWrite(2, LOW);
  }
  else if (value > 2.6 && value < 3.5) {
    digitalWrite(3, HIGH);
    tone(SPEAKER_PIN, 784); //D Generate a tone with the mapped frequency
    delay(100); // Wait for 1000 milliseconds
    noTone(SPEAKER_PIN); // Stop the tone
    digitalWrite(3, LOW);
  }
  else if (value > 3.6 && value < 4.5) {
    digitalWrite(4, HIGH);
    tone(SPEAKER_PIN, 988); //E Generate a tone with the mapped frequency
    delay(100); // Wait for 1000 milliseconds
    noTone(SPEAKER_PIN); // Stop the tone
    digitalWrite(4, LOW);
  }/*
  else if (value > 50 && value < 60) {
    digitalWrite(5, HIGH);
    tone(SPEAKER_PIN, 1047); //F Generate a tone with the mapped frequency
    delay(100); // Wait for 1000 milliseconds
    noTone(SPEAKER_PIN); // Stop the tone
    digitalWrite(5, LOW);
  }
  else if (value > 60 && value < 70) {
    digitalWrite(6, HIGH);
    tone(SPEAKER_PIN, 1319); //G Generate a tone with the mapped frequency
    delay(100); // Wait for 1000 milliseconds
    noTone(SPEAKER_PIN); // Stop the tone
    digitalWrite(6, LOW);
  }*/
}

/* shot methord below */
/* Plays one tone = one light *//*
const int SPEAKER_PIN = 8; // Connect the speaker or buzzer to this pin

void setup() {
  Serial.begin(9600);//enable serial monitor
  for (byte a = 2; a <= 6; a++) {
    pinMode(a, OUTPUT);
  }
  pinMode(SPEAKER_PIN, OUTPUT); // Set the speaker pin as output
}

void loop() {
  int value = analogRead(A1);//read analog value and put in to the variable
  Serial.println(value);//print serial monitor

  // Adjust the threshold values to make the sensor more sensitive to touch
  for (int i = 10; i <= 70; i += 10) {
    if (value >= i && value < i + 10) {
      digitalWrite(i / 10 + 1, HIGH);
      tone(SPEAKER_PIN, i * 20 + 440); // Generate a tone with the mapped frequency
      delay(100); // Wait for 1000 milliseconds
      noTone(SPEAKER_PIN); // Stop the tone
      digitalWrite(i / 10 + 1, LOW);
    }
  }
}*/
