global main

section .text

main:
	MOV rax, 1
	MOV rdi, 1
	MOV rsi, msg
	MOV rdx, msglen
	SYSCALL

	MOV rax, 60
	MOV rdi, 0
	SYSCALL

section .data
	msg: db "Hello, Holberton", 10
	msglen: equ $ - msg
