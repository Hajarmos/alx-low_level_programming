;main.asm
GLOBAL main
EXTERN printf

section .rodata:
fmt db "Number of parameters: %d \n", 0 

section .text:

main:

    push ebp
    mov ebp, esp    ;stackframe

    push dword[ebp+8]       ;prepara los parametros para printf
    push fmt
    call printf
    add esp, 2*4

    mov eax, 0      ;return value

    leave           ;desarmado del stack frame
    ret
