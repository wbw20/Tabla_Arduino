/*      Generated 24/04/2014 22:02:12      */


float x_average = 0;
float y_average = 0;

float x_variance = 0;
float y_variance = 0;

int x[27] = { 41, 39, 37, 35, 33, 31, 29, 27, 25, 23, 22, 21, 20, 19, 18, 17, 16, 15, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int y[21] = { 53, 51, 49, 47, 45, 43, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52 };

void update_x(int value) {
Serial.println(x_average == 0 ? 0 : (x_average - value));
  x_variance += x_average == 0 ? 0 : (x_average - value);
  x_average = value;
}

void update_y(int value) {
  y_variance += y_average == 0 ? 0 : (y_average - value);
  y_average = value;
}

void x_0() {
  update_x(0);
}

void x_1() {
  update_x(1);
}

void x_2() {
  update_x(2);
}

void x_3() {
  update_x(3);
}

void x_4() {
  update_x(4);
}

void x_5() {
  update_x(5);
}

void x_6() {
  update_x(6);
}

void x_7() {
  update_x(7);
}

void x_8() {
  update_x(8);
}

void x_9() {
  update_x(9);
}

void x_10() {
  update_x(10);
}

void x_11() {
  update_x(11);
}

void x_12() {
  update_x(12);
}

void x_13() {
  update_x(13);
}

void x_14() {
  update_x(14);
}

void x_15() {
  update_x(15);
}

void x_16() {
  update_x(16);
}

void x_17() {
  update_x(17);
}

void x_18() {
  update_x(18);
}

void x_19() {
  update_x(19);
}

void x_20() {
  update_x(20);
}

void x_21() {
  update_x(21);
}

void x_22() {
  update_x(22);
}

void x_23() {
  update_x(23);
}

void x_24() {
  update_x(24);
}

void x_25() {
  update_x(25);
}

void x_26() {
  update_x(26);
}

void setup() {
  Serial.begin(9600);

  pinMode(x[0], INPUT_PULLUP);
  digitalWrite(x[0], true);
  attachInterrupt(x[0], x_0, FALLING);

  pinMode(x[1], INPUT_PULLUP);
  digitalWrite(x[1], true);
  attachInterrupt(x[1], x_1, FALLING);

  pinMode(x[2], INPUT_PULLUP);
  digitalWrite(x[2], true);
  attachInterrupt(x[2], x_2, FALLING);

  pinMode(x[3], INPUT_PULLUP);
  digitalWrite(x[3], true);
  attachInterrupt(x[3], x_3, FALLING);

  pinMode(x[4], INPUT_PULLUP);
  digitalWrite(x[4], true);
  attachInterrupt(x[4], x_4, FALLING);

  pinMode(x[5], INPUT_PULLUP);
  digitalWrite(x[5], true);
  attachInterrupt(x[5], x_5, FALLING);

  pinMode(x[6], INPUT_PULLUP);
  digitalWrite(x[6], true);
  attachInterrupt(x[6], x_6, FALLING);

  pinMode(x[7], INPUT_PULLUP);
  digitalWrite(x[7], true);
  attachInterrupt(x[7], x_7, FALLING);

  pinMode(x[8], INPUT_PULLUP);
  digitalWrite(x[8], true);
  attachInterrupt(x[8], x_8, FALLING);

  pinMode(x[9], INPUT_PULLUP);
  digitalWrite(x[9], true);
  attachInterrupt(x[9], x_9, FALLING);

  pinMode(x[10], INPUT_PULLUP);
  digitalWrite(x[10], true);
  attachInterrupt(x[10], x_10, FALLING);

  pinMode(x[11], INPUT_PULLUP);
  digitalWrite(x[11], true);
  attachInterrupt(x[11], x_11, FALLING);

  pinMode(x[12], INPUT_PULLUP);
  digitalWrite(x[12], true);
  attachInterrupt(x[12], x_12, FALLING);

  pinMode(x[13], INPUT_PULLUP);
  digitalWrite(x[13], true);
  attachInterrupt(x[13], x_13, FALLING);

  pinMode(x[14], INPUT_PULLUP);
  digitalWrite(x[14], true);
  attachInterrupt(x[14], x_14, FALLING);

  pinMode(x[15], INPUT_PULLUP);
  digitalWrite(x[15], true);
  attachInterrupt(x[15], x_15, FALLING);

  pinMode(x[16], INPUT_PULLUP);
  digitalWrite(x[16], true);
  attachInterrupt(x[16], x_16, FALLING);

  pinMode(x[17], INPUT_PULLUP);
  digitalWrite(x[17], true);
  attachInterrupt(x[17], x_17, FALLING);

  pinMode(x[18], INPUT_PULLUP);
  digitalWrite(x[18], true);
  attachInterrupt(x[18], x_18, FALLING);

  pinMode(x[19], INPUT_PULLUP);
  digitalWrite(x[19], true);
  attachInterrupt(x[19], x_19, FALLING);

  pinMode(x[20], INPUT_PULLUP);
  digitalWrite(x[20], true);
  attachInterrupt(x[20], x_20, FALLING);

  pinMode(x[21], INPUT_PULLUP);
  digitalWrite(x[21], true);
  attachInterrupt(x[21], x_21, FALLING);

  pinMode(x[22], INPUT_PULLUP);
  digitalWrite(x[22], true);
  attachInterrupt(x[22], x_22, FALLING);

  pinMode(x[23], INPUT_PULLUP);
  digitalWrite(x[23], true);
  attachInterrupt(x[23], x_23, FALLING);

  pinMode(x[24], INPUT_PULLUP);
  digitalWrite(x[24], true);
  attachInterrupt(x[24], x_24, FALLING);

  pinMode(x[25], INPUT_PULLUP);
  digitalWrite(x[25], true);
  attachInterrupt(x[25], x_25, FALLING);

  pinMode(x[26], INPUT_PULLUP);
  digitalWrite(x[26], true);
  attachInterrupt(x[26], x_26, FALLING);

  pinMode(y[0], OUTPUT);
  digitalWrite(y[0], false);

  pinMode(y[1], OUTPUT);
  digitalWrite(y[1], false);

  pinMode(y[2], OUTPUT);
  digitalWrite(y[2], false);

  pinMode(y[3], OUTPUT);
  digitalWrite(y[3], false);

  pinMode(y[4], OUTPUT);
  digitalWrite(y[4], false);

  pinMode(y[5], OUTPUT);
  digitalWrite(y[5], false);

  pinMode(y[6], OUTPUT);
  digitalWrite(y[6], false);

  pinMode(y[7], OUTPUT);
  digitalWrite(y[7], false);

  pinMode(y[8], OUTPUT);
  digitalWrite(y[8], false);

  pinMode(y[9], OUTPUT);
  digitalWrite(y[9], false);

  pinMode(y[10], OUTPUT);
  digitalWrite(y[10], false);

  pinMode(y[11], OUTPUT);
  digitalWrite(y[11], false);

  pinMode(y[12], OUTPUT);
  digitalWrite(y[12], false);

  pinMode(y[13], OUTPUT);
  digitalWrite(y[13], false);

  pinMode(y[14], OUTPUT);
  digitalWrite(y[14], false);

  pinMode(y[15], OUTPUT);
  digitalWrite(y[15], false);

  pinMode(y[16], OUTPUT);
  digitalWrite(y[16], false);

  pinMode(y[17], OUTPUT);
  digitalWrite(y[17], false);

  pinMode(y[18], OUTPUT);
  digitalWrite(y[18], false);

  pinMode(y[19], OUTPUT);
  digitalWrite(y[19], false);

  pinMode(y[20], OUTPUT);
  digitalWrite(y[20], false);

}

void loop() {
  delay(250);
  if (x_variance > 0) {
    Serial.println(x_average);
    x_variance = 0;
  }

  x_average = 0;
}

