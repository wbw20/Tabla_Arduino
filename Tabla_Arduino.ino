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

bool mutex = false;

/*
 *  Vertical lines on the pad
 */
void x_0() {
  if (mutex) {
    return;
  }
  
  mutex = true;

  Serial.write("X --> 0\n");
}

void x_1() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 1\n");
}

void x_2() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 2\n");
}

void x_3() {
  if (mutex) {
    return;
  }
  
  mutex = true;

  Serial.write("X --> 3\n");
}

void x_4() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 4\n");
}

void x_5() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 5\n");
}

void x_6() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 6\n");
}

void x_7() {
  if (mutex) {
    return;
  }
  
  mutex = true;

  Serial.write("X --> 7\n");
}

void x_8() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 8\n");
}

void x_9() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 9\n");
}

void x_10() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 10\n");
}

void x_11() {
  if (mutex) {
    return;
  }
  
  mutex = true;
 
  Serial.write("X --> 11\n");
}

void x_12() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 12\n");
}

void x_13() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 13\n");
}

void x_14() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 14\n");
}

void x_15() {
  if (mutex) {
    return;
  }
  
  mutex = true;

  Serial.write("X --> 15\n");
}

void x_16() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 16\n");
}

void x_17() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 17\n");
}

void x_18() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 18\n");
}

void x_19() {
  if (mutex) {
    return;
  }
  
  mutex = true;

  Serial.write("X --> 19\n");
}

void x_20() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 20\n");
}

void x_21() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 21\n");
}

void x_22() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 22\n");
}

void x_23() {
  if (mutex) {
    return;
  }
  
  mutex = true;

  Serial.write("X --> 23\n");
}

void x_24() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 24\n");
}

void x_25() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 25\n");
}

void x_26() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 26\n");
}

void x_27() {
  if (mutex) {
    return;
  }
  
  mutex = true;

  Serial.write("X --> 27\n");
}

void x_28() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 28\n");
}

void x_29() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 29\n");
}

void x_30() {
  if (mutex) {
    return;
  }

  mutex = true;

  Serial.write("X --> 30\n");
}

 void x_31() {
  if (mutex) {
    return;
  }

  mutex = true;

   Serial.write("X --> 31\n");
 }
 
 void test() {
  if (mutex) {
    return;
  }

  mutex = true;

   Serial.println("hit");
 }

void setup()
{
  Serial.begin(9600);
  // Columns
  // for (int i = 0; i < (sizeof(x)/sizeof(int)); i+=8) {
  //   delay(250);
    
  //   Serial.println(x[i]);
    
  //   delay(250);
    
  //   pinMode(x[i], INPUT_PULLUP);
  //   digitalWrite(x[i], true);
  //   attachInterrupt(x[i], test, CHANGE);
  // }

    pinMode(x[0], INPUT_PULLUP);
    digitalWrite(x[0], true);
    attachInterrupt(x[0], x_0, FALLING);

    pinMode(x[1], INPUT_PULLUP);
    digitalWrite(x[1], true);
    attachInterrupt(x[1], x_1, FALLING);

    pinMode(x[2], INPUT_PULLUP);
    digitalWrite(x[2], true);
    attachInterrupt(x[2], x_2, FALLING);

    pinMode(x[3], INPUT);
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

  Serial.println("setting up y");

  // Rows
  for (int j = 0; j <= (sizeof(y)/sizeof(int)); j++) {
    delay(250);
    Serial.println(y[j]);
    
    delay(250);
    
    pinMode(y[j], OUTPUT);
    digitalWrite(y[j], false);
  }
  
  for (int j = 0; j <= (sizeof(y)/sizeof(int)); j++) {
    
  }
}

void loop() {
  delay(300);
  
  mutex = false;
}





