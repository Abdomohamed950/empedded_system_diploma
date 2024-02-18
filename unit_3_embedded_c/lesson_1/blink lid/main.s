	.file	"main.c"
	.globl	_port_a
	.data
	.align 4
_port_a:
	.long	1073809420
	.def	___main;	.scl	2;	.type	32;	.endef
	.text
	.globl	_main
	.def	_main;	.scl	2;	.type	32;	.endef
_main:
LFB0:
	.cfi_startproc
	pushl	%ebp
	.cfi_def_cfa_offset 8
	.cfi_offset 5, -8
	movl	%esp, %ebp
	.cfi_def_cfa_register 5
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	andl	$-16, %esp
	subl	$32, %esp
	.cfi_offset 7, -12
	.cfi_offset 6, -16
	.cfi_offset 3, -20
	call	___main
	movl	$1073877016, %ecx
	movl	$1073877016, %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, %edi
	orl	$4, %edi
	movl	%edi, %ebx
	movl	%edx, %eax
	orb	$0, %ah
	movl	%eax, %esi
	movl	%ebx, (%ecx)
	movl	%esi, 4(%ecx)
	movl	$1073809412, %ecx
	movl	$1073809412, %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, %esi
	andl	$-15728641, %esi
	movl	%esi, 8(%esp)
	movl	%edx, %eax
	andl	$0, %eax
	movl	%eax, 12(%esp)
	movl	8(%esp), %eax
	movl	12(%esp), %edx
	movl	%eax, (%ecx)
	movl	%edx, 4(%ecx)
	movl	$1073809412, %ecx
	movl	$1073809412, %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, %ebx
	orl	$2097152, %ebx
	movl	%ebx, (%esp)
	movl	%edx, %eax
	orb	$0, %ah
	movl	%eax, 4(%esp)
	movl	(%esp), %eax
	movl	4(%esp), %edx
	movl	%eax, (%ecx)
	movl	%edx, 4(%ecx)
L6:
	movl	_port_a, %eax
	movzwl	(%eax), %edx
	orb	$32, %dh
	movw	%dx, (%eax)
	movl	$0, 28(%esp)
	jmp	L2
L3:
	addl	$1, 28(%esp)
L2:
	cmpl	$4999, 28(%esp)
	jle	L3
	movl	_port_a, %eax
	movzwl	(%eax), %edx
	andb	$223, %dh
	movw	%dx, (%eax)
	movl	$0, 24(%esp)
	jmp	L4
L5:
	addl	$1, 24(%esp)
L4:
	cmpl	$4999, 24(%esp)
	jle	L5
	jmp	L6
	.cfi_endproc
LFE0:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
