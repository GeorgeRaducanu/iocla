%include "printf32.asm"

section .text
    global main
    extern printf

main:
    ;cele doua numere se gasesc in eax si ebx
    mov eax, 5
    mov ebx, 4
    ; TODO: aflati minimul
    cmp ebx, eax
    jge L2
    xchg eax, ebx
L2:
    PRINTF32 `%d\n\x0`, eax ; afiseaza minimul
    ret
