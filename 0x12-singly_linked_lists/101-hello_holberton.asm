section .data
	hello db "Hello, Holberton", 10 ;

section .text
	global _start

_start:
	;
	mov rdi, hello   ; Load the address of the string into the rdi (1st argument)
	call printf      ;
	; Exit the program
	mov rax, 60      ; syscall: exit
	xor rdi, rdi     ; status: 0
	syscall          ; Invoke syscall

section .extern
	extern printf
