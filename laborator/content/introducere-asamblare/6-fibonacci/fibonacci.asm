%include "printf32.asm"

section .text
    global main
    extern printf

main:
    mov eax, 7       ; vrem sa aflam al N-lea numar; N = 7

    ; TODO: calculati al N-lea numar fibonacci (f(0) = 0, f(1) = 1)
    mov ebx, 0
    mov ecx, 1
for:
	cmp eax, 1
	je out
	sub eax, 1
	mov edx, ebx
	add edx, ecx
	mov ebx, ecx
	mov ecx, edx
	jmp for

out:
	PRINTF32 `%d\n\x0`, ecx
    ret
