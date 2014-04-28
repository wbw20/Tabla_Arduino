import time, itertools

file = open("output.ino", 'w+')

baudrate = 9600
x = [41, 39, 37, 35, 33, 31, 29, 27, 25, 23, 22, 21, 20, 19, 18, 17, 16, 15, 2, 3, 4, 5, 6, 7, 8, 9, 10]
y = [53, 51, 49, 47, 45, 43, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52]

file.write("/*      Generated %s %s      */\n\n\n"%(time.strftime("%d/%m/%Y"), time.strftime("%H:%M:%S")))
file.write("float x_average = 0;\nfloat y_average = 0;\n\n")
# file.write("float x_variance = 0;\nfloat y_variance = 0;\n\n")

file.write("int x[%d] = { "%len(x))
for value in itertools.islice(x, 0, len(x) - 1):
  file.write("%d, "%value)
file.write("%d };\n"%x[-1]) # x[-1] is the last element

file.write("int y[%d] = { "%len(y))
for value in itertools.islice(y, 0, len(y) - 1):
  file.write("%d, "%value)
file.write("%d };\n\n"%y[-1]) # y[-1] is the last element


file.write("void update_x(int value) {\n  x_average = value;\n}\n\n")
file.write("void update_y(int value) {\n  y_average = value;\n}\n\n")

for value in xrange(len(x)):
  if value%2 == 0:
    file.write("void x_%d() {\n  update_x(%d);\n}\n\n"%(value, value))

for value in xrange(len(y)):
  if value%2 == 0:
    file.write("void y_%d() {\n  update_y(%d);\n}\n\n"%(value, value))

file.write("void setup() {\n  Serial.begin(%d);\n\n"%baudrate)

for value in xrange(len(x)):
  if value%2 == 0:
    file.write("  pinMode(x[%d], INPUT);\n"%value)
    file.write("  digitalWrite(x[%d], HIGH);\n"%value)
    file.write("  attachInterrupt(x[%d], x_%d, CHANGE);\n\n"%(value, value))

for value in xrange(len(y)):
  if value%2 == 0:
    file.write("  pinMode(y[%d], INPUT);\n"%value)
    file.write("  digitalWrite(y[%d], HIGH);\n"%value)
    file.write("  attachInterrupt(y[%d], y_%d, CHANGE);\n\n"%(value, value))

# for value in xrange(len(y)):
#   file.write("  pinMode(y[%d], OUTPUT);\n"%value)
#   file.write("  digitalWrite(y[%d], false);\n\n"%value)

file.write("}\n\nvoid loop() {\n  delay(250);\n  String coordinate = sprintf(\"[%f, %f]\\n\", x_average, y_average);\n")
file.write("  Serial.println(coordinate);\n\n  x_average = 0;\n}\n")

file.close()

# X0 = 41
# X1 = 39
# X2 = 37
# X3 = 35
# X4 = 33
# X5 = 31
# X6 = 29
# X7 = 27
# X8 = 25
# X9 = 23
# X10 = 22
# X11 = 21
# X12 = 20
# X13 = 19
# X14 = 18
# X15 = 17
# X16 = 16
# X17 = 15
# X18 = 0 -- But this pin is needed for USB
# X19 = 1 -- But this pin is needed for USB
# X20 = 2
# X21 = 3
# X22 = 4
# X23 = 5
# X24 = 6
# X25 = 7
# X26 = 8
# X27 = 9
# X28 = 10
# X29 = AREF
# X30 = SDA1

# Y0 = CANTX
# Y1 = DEAD PIN -- oops!
# Y2 = 53
# Y3 = 51
# Y4 = 49
# Y5 = 47
# Y6 = 45
# Y7 = 43
# Y8 = 24
# Y9 = 26
# Y10 = 28
# Y11 = 30
# Y12 = 32
# Y13 = 34
# Y14 = 36
# Y15 = 38
# Y16 = 40
# Y17 = 42
# Y18 = 44
# Y19 = 46
# Y20 = 48
# Y21 = 50
# Y22 = 52
# Y23 = A1
# Y24 = A2
# Y25 = A4
# Y26 = A5
# Y27 = A6
# Y28 = A8
# Y29 = A10
# Y30 = A11