/*      Generated 25/04/2014 12:07:51      */


int x_average = 0;
float y_average = 0;

int x[27] = { 41, 39, 37, 35, 33, 31, 29, 27, 25, 23, 22, 21, 20, 19, 18, 17, 16, 15, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
int y[21] = { 53, 51, 49, 47, 45, 43, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52 };

void update_x(int value) {
  x_average = value;
}

void update_y(int value) {
  y_average = value;
}

void x_0() {
  update_x(0);
}

void x_2() {
  update_x(2);
}

void x_4() {
  update_x(4);
}

void x_6() {
  update_x(6);
}

void x_8() {
  update_x(8);
}

void x_10() {
  update_x(10);
}

void x_12() {
  update_x(12);
}

void x_14() {
  update_x(14);
}

void x_16() {
  update_x(16);
}

void x_18() {
  update_x(18);
}

void x_20() {
  update_x(20);
}

void x_22() {
  update_x(22);
}

void x_24() {
  update_x(24);
}

void x_26() {
  update_x(26);
}

void y_0() {
  update_y(0);
}

void y_2() {
  update_y(2);
}

void y_4() {
  update_y(4);
}

void y_6() {
  update_y(6);
}

void y_8() {
  update_y(8);
}

void y_10() {
  update_y(10);
}

void y_12() {
  update_y(12);
}

void y_14() {
  update_y(14);
}

void y_16() {
  update_y(16);
}

void y_18() {
  update_y(18);
}

void y_20() {
  update_y(20);
}

void setup() {
  Serial.begin(9600);

  pinMode(x[0], INPUT);
  digitalWrite(x[0], HIGH);
  attachInterrupt(x[0], x_0, CHANGE);

  pinMode(x[2], INPUT);
  digitalWrite(x[2], HIGH);
  attachInterrupt(x[2], x_2, CHANGE);

  pinMode(x[4], INPUT);
  digitalWrite(x[4], HIGH);
  attachInterrupt(x[4], x_4, CHANGE);

  pinMode(x[6], INPUT);
  digitalWrite(x[6], HIGH);
  attachInterrupt(x[6], x_6, CHANGE);

  pinMode(x[8], INPUT);
  digitalWrite(x[8], HIGH);
  attachInterrupt(x[8], x_8, CHANGE);

  pinMode(x[10], INPUT);
  digitalWrite(x[10], HIGH);
  attachInterrupt(x[10], x_10, CHANGE);

  pinMode(x[12], INPUT);
  digitalWrite(x[12], HIGH);
  attachInterrupt(x[12], x_12, CHANGE);

  pinMode(x[14], INPUT);
  digitalWrite(x[14], HIGH);
  attachInterrupt(x[14], x_14, CHANGE);

  pinMode(x[16], INPUT);
  digitalWrite(x[16], HIGH);
  attachInterrupt(x[16], x_16, CHANGE);

  pinMode(x[18], INPUT);
  digitalWrite(x[18], HIGH);
  attachInterrupt(x[18], x_18, CHANGE);

  pinMode(x[20], INPUT);
  digitalWrite(x[20], HIGH);
  attachInterrupt(x[20], x_20, CHANGE);

  pinMode(x[22], INPUT);
  digitalWrite(x[22], HIGH);
  attachInterrupt(x[22], x_22, CHANGE);

  pinMode(x[24], INPUT);
  digitalWrite(x[24], HIGH);
  attachInterrupt(x[24], x_24, CHANGE);

  pinMode(x[26], INPUT);
  digitalWrite(x[26], HIGH);
  attachInterrupt(x[26], x_26, CHANGE);

  pinMode(y[0], INPUT);
  digitalWrite(y[0], HIGH);
  attachInterrupt(y[0], y_0, CHANGE);

  pinMode(y[2], INPUT);
  digitalWrite(y[2], HIGH);
  attachInterrupt(y[2], y_2, CHANGE);

  pinMode(y[4], INPUT);
  digitalWrite(y[4], HIGH);
  attachInterrupt(y[4], y_4, CHANGE);

  pinMode(y[6], INPUT);
  digitalWrite(y[6], HIGH);
  attachInterrupt(y[6], y_6, CHANGE);

  pinMode(y[8], INPUT);
  digitalWrite(y[8], HIGH);
  attachInterrupt(y[8], y_8, CHANGE);

  pinMode(y[10], INPUT);
  digitalWrite(y[10], HIGH);
  attachInterrupt(y[10], y_10, CHANGE);

  pinMode(y[12], INPUT);
  digitalWrite(y[12], HIGH);
  attachInterrupt(y[12], y_12, CHANGE);

  pinMode(y[14], INPUT);
  digitalWrite(y[14], HIGH);
  attachInterrupt(y[14], y_14, CHANGE);

  pinMode(y[16], INPUT);
  digitalWrite(y[16], HIGH);
  attachInterrupt(y[16], y_16, CHANGE);

  pinMode(y[18], INPUT);
  digitalWrite(y[18], HIGH);
  attachInterrupt(y[18], y_18, CHANGE);

  pinMode(y[20], INPUT);
  digitalWrite(y[20], HIGH);
  attachInterrupt(y[20], y_20, CHANGE);

}

void loop() {
  delay(250);

  if (x_average != 0 || y_average != 0) {
    Serial.print("[");
    Serial.print(x_average);
    Serial.print(", ");
    Serial.print(y_average);
    Serial.println("]");

    x_average = 0;
    y_average = 0;
  }
}

