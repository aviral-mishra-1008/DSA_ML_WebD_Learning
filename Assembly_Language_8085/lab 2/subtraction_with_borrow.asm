;Subtraction with or without borrow
MVI C, 0
LXI H, 2000
MOV A,M
INX H
SUB M
JNC Borrow
INR C
Borrow: INX H
MOV M,A
MOV A,C
INX H
MOV M,A
HLT