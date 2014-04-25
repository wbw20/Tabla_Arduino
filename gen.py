import time

file = open("output.txt", 'w+')

x = [41, 39, 37, 35, 33, 31, 29, 27, 25, 23, 22, 21, 20, 19, 18, 17, 16, 15, 2, 3, 4, 5, 6, 7, 8, 9, 10]
y = [53, 51, 49, 47, 45, 43, 24, 26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50, 52]

file.write("###############  Generated %s %s ###############\n\n\n"%(time.strftime("%d/%m/%Y"), time.strftime("%H:%M:%S")));

for value in xrange(len(x)):
  file.write("void x_%d {\n  Serial.write(\"[%d, 15]\");\n}\n\n"%(value, value))

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