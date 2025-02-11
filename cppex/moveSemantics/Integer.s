	.file	"Integer.cpp"
	.text
#APP
	.globl _ZSt21ios_base_library_initv
	.section	.rodata
.LC0:
	.string	"Integer()"
#NO_APP
	.text
	.align 2
	.globl	_ZN7IntegerC2Ev
	.type	_ZN7IntegerC2Ev, @function
_ZN7IntegerC2Ev:
.LFB1983:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC0(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	$4, %edi
	call	_Znwm@PLT
	movl	$0, (%rax)
	movq	-8(%rbp), %rdx
	movq	%rax, (%rdx)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1983:
	.size	_ZN7IntegerC2Ev, .-_ZN7IntegerC2Ev
	.globl	_ZN7IntegerC1Ev
	.set	_ZN7IntegerC1Ev,_ZN7IntegerC2Ev
	.section	.rodata
.LC1:
	.string	"Integer(int)"
	.text
	.align 2
	.globl	_ZN7IntegerC2Ei
	.type	_ZN7IntegerC2Ei, @function
_ZN7IntegerC2Ei:
.LFB1986:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	leaq	.LC1(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	$4, %edi
	call	_Znwm@PLT
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rdx
	movq	%rax, (%rdx)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1986:
	.size	_ZN7IntegerC2Ei, .-_ZN7IntegerC2Ei
	.globl	_ZN7IntegerC1Ei
	.set	_ZN7IntegerC1Ei,_ZN7IntegerC2Ei
	.section	.rodata
.LC2:
	.string	"Integer(const Integer&)"
	.text
	.align 2
	.globl	_ZN7IntegerC2ERKS_
	.type	_ZN7IntegerC2ERKS_, @function
_ZN7IntegerC2ERKS_:
.LFB1989:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	.LC2(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movl	$4, %edi
	call	_Znwm@PLT
	movq	-16(%rbp), %rdx
	movq	(%rdx), %rdx
	movl	(%rdx), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rdx
	movq	%rax, (%rdx)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1989:
	.size	_ZN7IntegerC2ERKS_, .-_ZN7IntegerC2ERKS_
	.globl	_ZN7IntegerC1ERKS_
	.set	_ZN7IntegerC1ERKS_,_ZN7IntegerC2ERKS_
	.section	.rodata
.LC3:
	.string	"Integer(int&&)"
	.text
	.align 2
	.globl	_ZN7IntegerC2EOS_
	.type	_ZN7IntegerC2EOS_, @function
_ZN7IntegerC2EOS_:
.LFB1992:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	.LC3(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movq	$0, (%rax)
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1992:
	.size	_ZN7IntegerC2EOS_, .-_ZN7IntegerC2EOS_
	.globl	_ZN7IntegerC1EOS_
	.set	_ZN7IntegerC1EOS_,_ZN7IntegerC2EOS_
	.section	.rodata
	.align 8
.LC4:
	.string	"Integer & operator=(const Integer &obj)"
	.text
	.align 2
	.globl	_ZN7IntegeraSERKS_
	.type	_ZN7IntegeraSERKS_, @function
_ZN7IntegeraSERKS_:
.LFB1994:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	.LC4(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	-8(%rbp), %rax
	cmpq	-16(%rbp), %rax
	jne	.L6
	movq	-8(%rbp), %rax
	jmp	.L7
.L6:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L8
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
.L8:
	movl	$4, %edi
	call	_Znwm@PLT
	movq	-16(%rbp), %rdx
	movq	(%rdx), %rdx
	movl	(%rdx), %edx
	movl	%edx, (%rax)
	movq	-8(%rbp), %rdx
	movq	%rax, (%rdx)
	movq	-8(%rbp), %rax
.L7:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1994:
	.size	_ZN7IntegeraSERKS_, .-_ZN7IntegeraSERKS_
	.section	.rodata
	.align 8
.LC5:
	.string	"Integer & operator=(Integer &&obj)"
	.text
	.align 2
	.globl	_ZN7IntegeraSEOS_
	.type	_ZN7IntegeraSEOS_, @function
_ZN7IntegeraSEOS_:
.LFB1995:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	movq	%rsi, -16(%rbp)
	leaq	.LC5(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	-8(%rbp), %rax
	cmpq	-16(%rbp), %rax
	jne	.L10
	movq	-8(%rbp), %rax
	jmp	.L11
.L10:
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L12
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
.L12:
	movq	-16(%rbp), %rax
	movq	(%rax), %rdx
	movq	-8(%rbp), %rax
	movq	%rdx, (%rax)
	movq	-16(%rbp), %rax
	movq	$0, (%rax)
	movq	-8(%rbp), %rax
.L11:
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1995:
	.size	_ZN7IntegeraSEOS_, .-_ZN7IntegeraSEOS_
	.align 2
	.globl	_ZNK7Integer8GetValueEv
	.type	_ZNK7Integer8GetValueEv, @function
_ZNK7Integer8GetValueEv:
.LFB1996:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	(%rax), %eax
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1996:
	.size	_ZNK7Integer8GetValueEv, .-_ZNK7Integer8GetValueEv
	.align 2
	.globl	_ZN7Integer8SetValueEi
	.type	_ZN7Integer8SetValueEi, @function
_ZN7Integer8SetValueEi:
.LFB1997:
	.cfi_startproc
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	movq	%rdi, -8(%rbp)
	movl	%esi, -12(%rbp)
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	movl	-12(%rbp), %edx
	movl	%edx, (%rax)
	nop
	popq	%rbp
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1997:
	.size	_ZN7Integer8SetValueEi, .-_ZN7Integer8SetValueEi
	.section	.rodata
.LC6:
	.string	"~Integer()"
	.text
	.align 2
	.globl	_ZN7IntegerD2Ev
	.type	_ZN7IntegerD2Ev, @function
_ZN7IntegerD2Ev:
.LFB1999:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1999
	pushq	%rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	movq	%rsp, %rbp
	.cfi_def_cfa_register 6
	subq	$16, %rsp
	movq	%rdi, -8(%rbp)
	leaq	.LC6(%rip), %rax
	movq	%rax, %rsi
	leaq	_ZSt4cout(%rip), %rax
	movq	%rax, %rdi
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
	movq	_ZSt4endlIcSt11char_traitsIcEERSt13basic_ostreamIT_T0_ES6_@GOTPCREL(%rip), %rdx
	movq	%rdx, %rsi
	movq	%rax, %rdi
	call	_ZNSolsEPFRSoS_E@PLT
	movq	-8(%rbp), %rax
	movq	(%rax), %rax
	testq	%rax, %rax
	je	.L18
	movl	$4, %esi
	movq	%rax, %rdi
	call	_ZdlPvm@PLT
.L18:
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1999:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table,"a",@progbits
.LLSDA1999:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1999-.LLSDACSB1999
.LLSDACSB1999:
.LLSDACSE1999:
	.text
	.size	_ZN7IntegerD2Ev, .-_ZN7IntegerD2Ev
	.globl	_ZN7IntegerD1Ev
	.set	_ZN7IntegerD1Ev,_ZN7IntegerD2Ev
	.section	.rodata
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIjEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedImEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedImEE:
	.byte	1
	.type	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, @object
	.size	_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE, 1
_ZNSt8__detail30__integer_to_chars_is_unsignedIyEE:
	.byte	1
	.hidden	DW.ref.__gxx_personality_v0
	.weak	DW.ref.__gxx_personality_v0
	.section	.data.rel.local.DW.ref.__gxx_personality_v0,"awG",@progbits,DW.ref.__gxx_personality_v0,comdat
	.align 8
	.type	DW.ref.__gxx_personality_v0, @object
	.size	DW.ref.__gxx_personality_v0, 8
DW.ref.__gxx_personality_v0:
	.quad	__gxx_personality_v0
	.ident	"GCC: (GNU) 13.2.1 20230801"
	.section	.note.GNU-stack,"",@progbits
