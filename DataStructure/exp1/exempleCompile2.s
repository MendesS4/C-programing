	.file	"exempleCompile2.c"
	.text
	.def	___main;	.scl	2;	.type	32;	.endef
	.section .rdata,"dr"
LC0:
	.ascii "Imprimindo de 1 a %d\12\12\0"
LC1:
	.ascii "--> %d\12\0"
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
	pushl	%ebp
	movl	%esp, %ebp
	andl	$-16, %esp
	subl	$32, %esp
	call	___main
	movl	$20, 4(%esp)
	movl	$LC0, (%esp)
	call	_printf
	movl	$1, 28(%esp)
	jmp	L2
L3:
	movl	28(%esp), %eax
	movl	%eax, 4(%esp)
	movl	$LC1, (%esp)
	call	_printf
	addl	$1, 28(%esp)
L2:
	cmpl	$20, 28(%esp)
	jle	L3
	movl	$0, %eax
	leave
	ret
	.ident	"GCC: (i686-posix-sjlj-rev0, Built by MinGW-W64 project) 8.1.0"
	.def	_printf;	.scl	2;	.type	32;	.endef
