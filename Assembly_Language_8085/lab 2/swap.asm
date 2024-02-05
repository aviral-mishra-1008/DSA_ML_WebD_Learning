; this program is about swapping
MVI H, 0AH   ; Move immediate 0AH into register H
LXI B, 2000  ; Load immediate 2000H into registers B and C
LXI D, 3000  ; Load immediate 3000H into registers D and E
Back: LDAX B ; Load accumulator with contents of BC address
MOV L, A    ; Move accumulator content to L register
LDAX D      ; Load accumulator with contents of DE address
STAX B      ; Store accumulator content at BC address
MOV A, L    ; Move L register content to accumulator
STAX D      ; Store accumulator content at DE address
INX B       ; Increment BC pair
INX D       ; Increment DE pair
DCR H       ; Decrement register H
JNZ Back    ; Jump to Back label if Z flag is not set (H is not zero)
HLT         ; Halt