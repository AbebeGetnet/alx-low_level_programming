bal main

	section .text
main:
	mov     rax, 1
	mov     rdi, 
	mov     rsi, msg
	mov     rdx, 17
	syscall

	mov     rax,60
	xor     rdi, rdi
	syscall

	section .data
msg:
	db   "Hello, main",10
