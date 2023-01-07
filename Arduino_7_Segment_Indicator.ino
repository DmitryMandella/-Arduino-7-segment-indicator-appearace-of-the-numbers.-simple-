// Numbers for indication (only 3 numbers, it depends from your scheme)
int aoff[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int a0[9] = { 1, 1, 1, 1, 1, 1, 0, 1, 1 };
int a1[9] = { 0, 0, 0, 0, 0, 1, 0, 0, 1 };
int a2[9] = { 0, 0, 0, 1, 1, 1, 1, 1, 0 };
int a3[9] = { 0, 0, 0, 1, 1, 1, 1, 0, 1 };
int a4[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int a5[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int a6[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int a7[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int a8[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };
int a9[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

// The Array for one number
int Number[9] = { 0, 0, 0, 0, 0, 0, 0, 0, 0 };

void setup() {
// Type a number of a array nearby 'a'
  for (int i = 0; i <= 8; i++)
    Number[i] = a3[i];

// Ports to make the indication

  for (int i = 0; i <= 8; i++) {
    if (Number[i] != 0) {
      pinMode(i, OUTPUT);
    }
  }
}

// Writing ports

void loop() {
  for (int i = 0; i <= 9; i++) {
    if (Number[i] != 0) {
      digitalWrite(i, HIGH);
    }
  }
}
