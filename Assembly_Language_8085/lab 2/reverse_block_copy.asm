MVI H, 0AH
LXI B, 2000
LXI D, 3009
Back: LDAX B
STAX D
INX B
DCX D
DCR H
JNZ Back
HLT