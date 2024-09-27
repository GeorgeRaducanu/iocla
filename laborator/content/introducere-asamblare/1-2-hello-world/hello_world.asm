%include "printf32.asm"

section .data
    myString: db "Hello, World!", 0
    String: db "Goodbye, World!", 0

section .text
    global main
    extern printf

main:
    mov ecx, 6                      ; N = valoarea registrului ecx
    mov eax, 2
    mov ebx, 1
    cmp eax, ebx
    jg print                        ; TODO1: eax > ebx?
    ret

print:
        mov edx, 0
        PRINTF32 `%s\n\x0`, String      ; TODO2.2: afisati "Hello, World!" de N ori
    fl:
        PRINTF32 `%s\n\x0`, myString      ; TODO2.1: afisati "Goodbye,World!"
        add edx, 1   
        cmp edx, ecx
        jne fl
    ret
