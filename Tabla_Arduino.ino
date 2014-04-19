// X0 = 41
// X1 = 39
// X2 = 37
// X3 = 35
// X4 = 33
// X5 = 31
// X6 = 29
// X7 = 27
// X8 = 25
// X9 = 23
// X10 = 22
// X11 = 21
// X12 = 20
// X13 = 19
// X14 = 18
// X15 = 17
// X16 = 16
// X17 = 15
// X18 = 0 -- But this pin is needed for USB
// X19 = 1 -- But this pin is needed for USB
// X20 = 2
// X21 = 3
// X22 = 4
// X23 = 5
// X24 = 6
// X25 = 7
// X26 = 8
// X27 = 9
// X28 = 10
// X29 = AREF
// X30 = SDA1

// Y0 = CANTX
// Y1 = DEAD PIN -- oops!
// Y2 = 53
// Y3 = 51
// Y4 = 49
// Y5 = 47
// Y6 = 45
// Y7 = 43
// Y8 = 24
// Y9 = 26
// Y10 = 28
// Y11 = 30
// Y12 = 32
// Y13 = 34
// Y14 = 36
// Y15 = 38
// Y16 = 40
// Y17 = 42
// Y18 = 44
// Y19 = 46
// Y20 = 48
// Y21 = 50
// Y22 = 52
// Y23 = A1
// Y24 = A2
// Y25 = A4
// Y26 = A5
// Y27 = A6
// Y28 = A8
// Y29 = A10
// Y30 = A11

int x[27] = {41, 39, 37, 35, 33, 31, 29, 27, 25, 23, 22, 21, 20, 19, 18, 17, 16, 15, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int y[21] = {53, 51, 49, 47, 45, 43, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52};


int MAX_READINGS = 30;
int readings = 0;
int total;

/*
 *  Vertical lines on the pad
 */
void x_0() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 0;
}

void x_1() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 1;
}

void x_2() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 2;
}

void x_3() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 3;
}

void x_4() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 4;
}

void x_5() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 5;
}

void x_6() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 6;
}

void x_7() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 7;
}

void x_8() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 8;
}

void x_9() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 9;
}

void x_10() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 10;
}

void x_11() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 11;
}

void x_12() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 12;
}

void x_13() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 13;
}

void x_14() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 14;
}

void x_15() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 15;
}

void x_16() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 16;
}

void x_17() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 17;
}

void x_18() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 18;
}

void x_19() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 19;
}

void x_20() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 20;
}

void x_21() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 21;
}

void x_22() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 22;
}

void x_23() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 23;
}

void x_24() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 24;
}

void x_25() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 25;
}

void x_26() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 26;
}

void x_27() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 27;
}

void x_28() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 28;
}

void x_29() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 29;
}

void x_30() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 30;
}

 void x_31() {
  if (readings >= MAX_READINGS) {
    return;
  }

  readings++;

  total += 31;
}

void setup()
{
  Serial.begin(9600);

  pinMode(x[0], INPUT_PULLUP);
  digitalWrite(x[0], true);
  attachInterrupt(x[0], x_0, CHANGE);

  pinMode(x[1], INPUT_PULLUP);
  digitalWrite(x[1], true);
  attachInterrupt(x[1], x_1, CHANGE);

  pinMode(x[2], INPUT_PULLUP);
  digitalWrite(x[2], true);
  attachInterrupt(x[2], x_2, CHANGE);

  pinMode(x[3], INPUT_PULLUP);
  digitalWrite(x[3], true);
  attachInterrupt(x[3], x_3, CHANGE);

  pinMode(x[4], INPUT_PULLUP);
  digitalWrite(x[4], true);
  attachInterrupt(x[4], x_4, CHANGE);

  pinMode(x[5], INPUT_PULLUP);
  digitalWrite(x[5], true);
  attachInterrupt(x[5], x_5, CHANGE);

  pinMode(x[6], INPUT_PULLUP);
  digitalWrite(x[6], true);
  attachInterrupt(x[6], x_6, CHANGE);

  pinMode(x[7], INPUT_PULLUP);
  digitalWrite(x[7], true);
  attachInterrupt(x[7], x_7, CHANGE);

  pinMode(x[8], INPUT_PULLUP);
  digitalWrite(x[8], true);
  attachInterrupt(x[8], x_8, CHANGE);

  pinMode(x[9], INPUT_PULLUP);
  digitalWrite(x[9], true);
  attachInterrupt(x[9], x_9, CHANGE);

  pinMode(x[10], INPUT_PULLUP);
  digitalWrite(x[10], true);
  attachInterrupt(x[10], x_10, CHANGE);

  pinMode(x[11], INPUT_PULLUP);
  digitalWrite(x[11], true);
  attachInterrupt(x[11], x_11, CHANGE);

  pinMode(x[12], INPUT_PULLUP);
  digitalWrite(x[12], true);
  attachInterrupt(x[12], x_12, CHANGE);

  pinMode(x[13], INPUT_PULLUP);
  digitalWrite(x[13], true);
  attachInterrupt(x[13], x_13, CHANGE);

  pinMode(x[14], INPUT_PULLUP);
  digitalWrite(x[14], true);
  attachInterrupt(x[14], x_14, CHANGE);

  pinMode(x[15], INPUT_PULLUP);
  digitalWrite(x[15], true);
  attachInterrupt(x[15], x_15, CHANGE);

  pinMode(x[16], INPUT_PULLUP);
  digitalWrite(x[16], true);
  attachInterrupt(x[16], x_16, CHANGE);

  pinMode(x[17], INPUT_PULLUP);
  digitalWrite(x[17], true);
  attachInterrupt(x[17], x_17, CHANGE);

  pinMode(x[18], INPUT_PULLUP);
  digitalWrite(x[18], true);
  attachInterrupt(x[18], x_18, CHANGE);

  pinMode(x[19], INPUT_PULLUP);
  digitalWrite(x[19], true);
  attachInterrupt(x[19], x_19, CHANGE);

  pinMode(x[20], INPUT_PULLUP);
  digitalWrite(x[20], true);
  attachInterrupt(x[20], x_20, CHANGE);

  pinMode(x[21], INPUT_PULLUP);
  digitalWrite(x[21], true);
  attachInterrupt(x[21], x_21, CHANGE);

  pinMode(x[22], INPUT_PULLUP);
  digitalWrite(x[22], true);
  attachInterrupt(x[22], x_22, CHANGE);

  pinMode(x[23], INPUT_PULLUP);
  digitalWrite(x[23], true);
  attachInterrupt(x[23], x_23, CHANGE);

  pinMode(x[24], INPUT_PULLUP);
  digitalWrite(x[24], true);
  attachInterrupt(x[24], x_24, CHANGE);

  pinMode(x[25], INPUT_PULLUP);
  digitalWrite(x[25], true);
  attachInterrupt(x[25], x_25, CHANGE);

  pinMode(x[26], INPUT_PULLUP);
  digitalWrite(x[26], true);
  attachInterrupt(x[26], x_26, CHANGE);

  pinMode(x[27], INPUT_PULLUP);
  digitalWrite(x[27], true);
  attachInterrupt(x[27], x_27, CHANGE);

  Serial.println("setting up y");

  // Rows
  for (int j = 0; j <= (sizeof(y)/sizeof(int)); j+=7) {
    delay(250);
    Serial.println(y[j]);

    delay(250);

    pinMode(y[j], OUTPUT);
    digitalWrite(y[j], false);
  }
}

void loop() {
  delay(150);

  if (total > 0) {
    Serial.println(total / readings);
  }

  delay(150);


  total = 0;
  readings = 0;
}



