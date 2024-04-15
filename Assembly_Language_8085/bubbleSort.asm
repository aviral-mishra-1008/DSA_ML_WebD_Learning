
;Bubble Sort
START: 
   LXI H,2040H
   MVI D,00H
   MOV C,M
   DCR C
   MOV M,C ;This optimizes the algorithm to give a better complexity as we are updating the value of C here 
   INX H

CHECK: 
    MOV A,M
    INX H
    CMP M
    JC NEXTBYTE ;CHECKING THE CONDITIONS 
    JZ NEXTBYTE
    MOV B,M ;SWAP CODE
    MOV M,A
    DCX H
    MOV M,B
    INX H
    MVI D,01H ;TO NOTIFY THAT YES WE MADE A SWAP

NEXTBYTE:
    DCR C
    JNZ CHECK
    MOV A,D
    CPI 01H
    JZ START
    HLT