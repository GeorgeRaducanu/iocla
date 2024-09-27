%include "printf32.asm"

section .text
    global main
    extern printf

main:
    ;cele doua multimi se gasesc in eax si ebx
    mov eax, 139
    mov ebx, 169
    PRINTF32 `%u\n\x0`, eax ; afiseaza prima multime
    PRINTF32 `%u\n\x0`, ebx ; afiseaza cea de-a doua multime

    ; TODO1: reuniunea a doua multimi
    ; reuniunea e echivalenta cu or
    mov ecx, eax
    or ecx, ebx
    PRINTF32 `%u\n\x0`, ecx

    ; TODO2: adaugarea unui element in multime
    ; adaugam cu operatia or
    or eax, 4
    PRINTF32 `%u\n\x0`, eax

    ; TODO3: intersectia a doua multimi
    ; intersectia e echivalenta cu and
    mov ecx, eax
    and ecx, ebx
    PRINTF32 `%u\n\x0`, ecx

    ; TODO4: complementul unei multimi
    ; complementul e echivalent cu not
    mov ecx, eax
    not ecx
    PRINTF32 `%u\n\x0`, ecx

    ; TODO5: eliminarea unui element
    ; eliminare la eax a unui element
    mov ecx, 8
    not ecx
    and eax, ecx
    PRINTF32 `%u\n\x0`, ecx

    ; TODO6: diferenta de multimi EAX-EBX
    ; diferenta eax - ebx  e echivalenta cu (eax & ebx) ^ eax
    mov ecx, eax
    and ecx, ebx
    xor ecx, eax
    PRINTF32 `%u\n\x0`, ecx

    xor eax, eax
    ret
