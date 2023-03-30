section .data
    hello db 'Hello, Holberton',0Ah ; message to print (with newline)

section .text
    global main

extern printf

main:
    ; prepare arguments for printf function call
    mov  rdi, hello    ; set first argument to pointer to message string
    xor  eax, eax      ; set eax to 0 (no floating point args)
    call printf        ; call printf with one argument

    ; exit program
    xor  eax, eax      ; set exit status to 0
    ret                ; return to shell

