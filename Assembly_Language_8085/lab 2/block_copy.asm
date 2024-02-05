MVI H, 0AH ;when using hexadecimal numbers as immediate data value, use H but not in address
LXI B, 2000
LXI D, 3000
Back: LDAX B
STAX D
INX B
INX D
DCR H
JNZ Back
HLT