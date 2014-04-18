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

/*
 *  Vertical lines on the pad
 */
// void x_0() {
//   Serial.write("X --> 0\n");
// }

// void x_1() {
//   Serial.write("X --> 1\n");
// }

// void x_2() {
//   Serial.write("X --> 2\n");
// }

// void x_3() {
//   Serial.write("X --> 3\n");
// }

// void x_4() {
//   Serial.write("X --> 4\n");
// }

// void x_5() {
//   Serial.write("X --> 5\n");
// }

// void x_6() {
//   Serial.write("X --> 6\n");
// }

// void x_7() {
//   Serial.write("X --> 7\n");
// }

// void x_8() {
//   Serial.write("X --> 8\n");
// }

// void x_9() {
//   Serial.write("X --> 9\n");
// }

// void x_10() {
//   Serial.write("X --> 10\n");
// }

// void x_11() {
//   Serial.write("X --> 11\n");
// }

// void x_12() {
//   Serial.write("X --> 12\n");
// }

// void x_13() {
//   Serial.write("X --> 13\n");
// }

// void x_14() {
//   Serial.write("X --> 14\n");
// }

// void x_15() {
//   Serial.write("X --> 15\n");
// }

// void x_16() {
//   Serial.write("X --> 16\n");
// }

// void x_17() {
//   Serial.write("X --> 17\n");
// }

// void x_18() {
//   Serial.write("X --> 18\n");
// }

// void x_19() {
//   Serial.write("X --> 19\n");
// }

// void x_20() {
//   Serial.write("X --> 20\n");
// }

// void x_21() {
//   Serial.write("X --> 21\n");
// }

// void x_22() {
//   Serial.write("X --> 22\n");
// }

// void x_23() {
//   Serial.write("X --> 23\n");
// }

// void x_24() {
//   Serial.write("X --> 24\n");
// }

// void x_25() {
//   Serial.write("X --> 25\n");
// }

// void x_26() {
//   Serial.write("X --> 26\n");
// }

// void x_27() {
//   Serial.write("X --> 27\n");
// }

// void x_28() {
//   Serial.write("X --> 28\n");
// }

// void x_29() {
//   Serial.write("X --> 29\n");
// }

// void x_30() {
//   Serial.write("X --> 30\n");
// }

 void x_31() {
   Serial.write("X --> 31\n");
 }
 
 void test() {
   Serial.println("hit");
 }

void setup()
{
  Serial.begin(9600);
  // Columns
  for (int i = 0; i < (sizeof(x)/sizeof(int)); i+=8) {
    delay(250);
    
    Serial.println(x[i]);
    
    delay(250);
    
    pinMode(x[i], INPUT_PULLUP);
    digitalWrite(x[i], true);
    attachInterrupt(x[i], test, CHANGE);
  }

  Serial.println("setting up y");

  // Rows
  for (int j = 0; j <= (sizeof(y)/sizeof(int)); j+=8) {
    delay(250);
    Serial.println(y[j]);
    
    delay(250);
    
    pinMode(y[j], OUTPUT);
    digitalWrite(y[j], false);
  }
}

void loop()
{
//  int val = digitalRead(27);    // read the input pin
//
//  delay(40);

//  Serial.println("test");
}


