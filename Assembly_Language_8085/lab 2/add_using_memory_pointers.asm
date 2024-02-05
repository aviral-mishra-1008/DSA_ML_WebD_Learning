MVI C, 00
LXI H, 2000 ;never use H in here, H is written in understanding but H is already understood here
MOV A,M
INX H
ADD M
JNC SKIP
INR C
SKIP: INX H
MOV M,A
INX H
MOV M,C
HLT 