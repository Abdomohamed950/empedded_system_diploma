	.file	"main.c"
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
	subl	$48, %esp
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
	andl	$-8388609, %esi
	movl	%esi, 24(%esp)
	movl	%edx, %eax
	andb	$255, %ah
	movl	%eax, 28(%esp)
	movl	24(%esp), %eax
	movl	28(%esp), %edx
	movl	%eax, (%ecx)
	movl	%edx, 4(%ecx)
	movl	$1073809412, %ecx
	movl	$1073809412, %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, %ebx
	orl	$2097152, %ebx
	movl	%ebx, 16(%esp)
	movl	%edx, %eax
	orb	$0, %ah
	movl	%eax, 20(%esp)
	movl	16(%esp), %eax
	movl	20(%esp), %edx
	movl	%eax, (%ecx)
	movl	%edx, 4(%ecx)
L6:
	movl	$1073809420, %ecx
	movl	$1073809420, %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, %esi
	orl	$8192, %esi
	movl	%esi, 8(%esp)
	movl	%edx, %eax
	orb	$0, %ah
	movl	%eax, 12(%esp)
	movl	8(%esp), %eax
	movl	12(%esp), %edx
	movl	%eax, (%ecx)
	movl	%edx, 4(%ecx)
	movl	$0, 44(%esp)
	jmp	L2
L3:
	addl	$1, 44(%esp)
L2:
	cmpl	$4999, 44(%esp)
	jle	L3
	movl	$1073809420, %ecx
	movl	$1073809420, %eax
	movl	4(%eax), %edx
	movl	(%eax), %eax
	movl	%eax, %edi
	andl	$-8193, %edi
	movl	%edi, (%esp)
	movl	%edx, %eax
	andb	$255, %ah
	movl	%eax, 4(%esp)
	movl	(%esp), %eax
	movl	4(%esp), %edx
	movl	%eax, (%ecx)
	movl	%edx, 4(%ecx)
	movl	$0, 40(%esp)
	jmp	L4
L5:
	addl	$1, 40(%esp)
L4:
	cmpl	$4999, 40(%esp)
	jle	L5
	jmp	L6
	.cfi_endproc
LFE0:
	.ident	"GCC: (MinGW.org GCC-6.3.0-1) 6.3.0"
