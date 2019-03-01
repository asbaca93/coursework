%include "io64.inc"
section .data
section .text
	global main
main:
	mov	rbp, rsp
	mov	r8, rsp
	add	r8, -80
	mov	[r8], rbp
	mov	[r8+8],rsp
	mov	rsp, r8
	MOV	rax, 4
	MOV	[rsp + 64], rax 

	mov	rax, 16
	add	rax, rsp
	mov	rbx, [64 + rsp] 
	mov	[rax], rbx 
	MOV	rax, 4
	MOV	[rsp + 72], rax 

	mov	rax, 16
	add	rax, rsp
	MOV	rbx, [rax] 
	shl	RBX, 3 

	mov	rax, 16
	add	rax, rsp
	add	rax, rbx 
	mov	rbx, [72 + rsp] 
	mov	[rax], rbx 

	mov	rax, 16
	add	rax, rsp
	MOV	rbx, [rax] 
	shl	RBX, 3 

	mov	rax, 16
	add	rax, rsp
	add	rax, rbx 
	MOV rsi, [rax]  ; load immediate value
	PRINT_DEC 8, rsi 		;standard Write a value 
	NEWLINE		;standard Write a NEWLINE

	mov	rbp,[rsp]
	mov	rsp,[rsp+8]
	mov	rsp,rbp
	ret

	mov	rbp,[rsp]
	mov	rsp,[rsp+8]
	mov	rsp,rbp
	ret
