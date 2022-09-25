section .data
	teksKu times 50 db ' '       ; 'Hello, World!' plus a linefeed character
	panjangTeks equ $-teksKu    ; Length of the 'Hello world!' string

section .text
	global _start

_start:
  mov eax,3
  mov ebx,0
  mov ecx,teksKu
  mov edx,panjangTeks
  int 80h
  
	mov eax,4            ; The system call for write (sys_write)
	mov ebx,1            ; File descriptor 1 - standard output
	mov ecx,teksKu        ; Put the offset of hello in ecx
	mov edx,panjangTeks     ; helloLen is a constant, so we don't need to say
	                     ;  mov edx,[helloLen] to get it's actual value
	int 80h              ; Call the kernel
	
	mov eax,1            ; The system call for exit (sys_exit)
	mov ebx,0            ; Exit with return "code" of 0 (no error)
	int 80h;