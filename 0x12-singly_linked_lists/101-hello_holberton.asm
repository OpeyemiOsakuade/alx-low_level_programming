section .data
	helloString db 'Hello, Holberton', 0xA, 0X0 ; String with newline and null

section .text
	global main
	extern printf

main:
	; Prepare arguments for printf
	mov rdi, helloString ; First argument: address of the string
	xor rax, rax ; Clear RAX (number of floating point arguments)

	; Call printf
	call printf

	; Exit program
	mov rax, 60	; System call for exit
	xor rdi, rdi	; Exit code 0
	syscall
