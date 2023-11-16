section .data
    hello db 'Hello, Holberton', 0xA  ; input string

section .text
    global main
    extern printf

main:
    push rbp
    mov rdi, hello                   ; Format string
    call printf                     ; Call printf
    pop rbp

    mov eax, 0                      ; Return 0 from main
    ret
