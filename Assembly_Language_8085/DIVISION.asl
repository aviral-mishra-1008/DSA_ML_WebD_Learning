
;<Program title>

LXI H,2000H
MOV A,M
INX H
MOV B,M
MVI C,00H
LOOP: INR C
SUB B
JNC LOOP
DCR C
ADD B
STA 2003H
MOV A,C
STA 2002H
HLT

