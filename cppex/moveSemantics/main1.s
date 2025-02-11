	.file	"main1.cpp"
	.intel_syntax noprefix
	.text
#APP
	.globl _ZSt21ios_base_library_initv
	.section	.rodata
	.align 8
.LC0:
	.string	"Number(int value) constructor got called\n"
#NO_APP
	.section	.text._ZN6NumberC2Ei,"axG",@progbits,_ZN6NumberC5Ei,comdat
	.align 2
	.weak	_ZN6NumberC2Ei
	.type	_ZN6NumberC2Ei, @function
_ZN6NumberC2Ei:
.LFB1983:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1983
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 24
	.cfi_offset 3, -24
	mov	QWORD PTR -24[rbp], rdi
	mov	DWORD PTR -28[rbp], esi
	mov	rax, QWORD PTR -24[rbp]
	mov	edx, DWORD PTR -28[rbp]
	mov	esi, edx
	mov	rdi, rax
.LEHB0:
	call	_ZN7IntegerC1Ei@PLT
.LEHE0:
	lea	rax, .LC0[rip]
	mov	rsi, rax
	lea	rax, _ZSt4cout[rip]
	mov	rdi, rax
.LEHB1:
	call	_ZStlsISt11char_traitsIcEERSt13basic_ostreamIcT_ES5_PKc@PLT
.LEHE1:
	jmp	.L4
.L3:
	mov	rbx, rax
	mov	rax, QWORD PTR -24[rbp]
	mov	rdi, rax
	call	_ZN7IntegerD1Ev@PLT
	mov	rax, rbx
	mov	rdi, rax
.LEHB2:
	call	_Unwind_Resume@PLT
.LEHE2:
.L4:
	mov	rbx, QWORD PTR -8[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1983:
	.globl	__gxx_personality_v0
	.section	.gcc_except_table._ZN6NumberC2Ei,"aG",@progbits,_ZN6NumberC5Ei,comdat
.LLSDA1983:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1983-.LLSDACSB1983
.LLSDACSB1983:
	.uleb128 .LEHB0-.LFB1983
	.uleb128 .LEHE0-.LEHB0
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB1-.LFB1983
	.uleb128 .LEHE1-.LEHB1
	.uleb128 .L3-.LFB1983
	.uleb128 0
	.uleb128 .LEHB2-.LFB1983
	.uleb128 .LEHE2-.LEHB2
	.uleb128 0
	.uleb128 0
.LLSDACSE1983:
	.section	.text._ZN6NumberC2Ei,"axG",@progbits,_ZN6NumberC5Ei,comdat
	.size	_ZN6NumberC2Ei, .-_ZN6NumberC2Ei
	.weak	_ZN6NumberC1Ei
	.set	_ZN6NumberC1Ei,_ZN6NumberC2Ei
	.section	.text._ZN6NumberD2Ev,"axG",@progbits,_ZN6NumberD5Ev,comdat
	.align 2
	.weak	_ZN6NumberD2Ev
	.type	_ZN6NumberD2Ev, @function
_ZN6NumberD2Ev:
.LFB1987:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdi, rax
	call	_ZN7IntegerD1Ev@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1987:
	.size	_ZN6NumberD2Ev, .-_ZN6NumberD2Ev
	.weak	_ZN6NumberD1Ev
	.set	_ZN6NumberD1Ev,_ZN6NumberD2Ev
	.section	.text._ZN6NumberC2ERKS_,"axG",@progbits,_ZN6NumberC5ERKS_,comdat
	.align 2
	.weak	_ZN6NumberC2ERKS_
	.type	_ZN6NumberC2ERKS_, @function
_ZN6NumberC2ERKS_:
.LFB1990:
	.cfi_startproc
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	sub	rsp, 16
	mov	QWORD PTR -8[rbp], rdi
	mov	QWORD PTR -16[rbp], rsi
	mov	rax, QWORD PTR -8[rbp]
	mov	rdx, QWORD PTR -16[rbp]
	mov	rsi, rdx
	mov	rdi, rax
	call	_ZN7IntegerC1ERKS_@PLT
	nop
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1990:
	.size	_ZN6NumberC2ERKS_, .-_ZN6NumberC2ERKS_
	.weak	_ZN6NumberC1ERKS_
	.set	_ZN6NumberC1ERKS_,_ZN6NumberC2ERKS_
	.text
	.globl	main
	.type	main, @function
main:
.LFB1985:
	.cfi_startproc
	.cfi_personality 0x9b,DW.ref.__gxx_personality_v0
	.cfi_lsda 0x1b,.LLSDA1985
	push	rbp
	.cfi_def_cfa_offset 16
	.cfi_offset 6, -16
	mov	rbp, rsp
	.cfi_def_cfa_register 6
	push	rbx
	sub	rsp, 40
	.cfi_offset 3, -24
	mov	rax, QWORD PTR fs:40
	mov	QWORD PTR -24[rbp], rax
	xor	eax, eax
	lea	rax, -40[rbp]
	mov	esi, 1
	mov	rdi, rax
.LEHB3:
	call	_ZN6NumberC1Ei
.LEHE3:
	lea	rdx, -40[rbp]
	lea	rax, -32[rbp]
	mov	rsi, rdx
	mov	rdi, rax
.LEHB4:
	call	_ZN6NumberC1ERKS_
.LEHE4:
	mov	ebx, 0
	lea	rax, -32[rbp]
	mov	rdi, rax
	call	_ZN6NumberD1Ev
	lea	rax, -40[rbp]
	mov	rdi, rax
	call	_ZN6NumberD1Ev
	mov	eax, ebx
	mov	rdx, QWORD PTR -24[rbp]
	sub	rdx, QWORD PTR fs:40
	je	.L11
	jmp	.L13
.L12:
	mov	rbx, rax
	lea	rax, -40[rbp]
	mov	rdi, rax
	call	_ZN6NumberD1Ev
	mov	rax, rbx
	mov	rdx, QWORD PTR -24[rbp]
	sub	rdx, QWORD PTR fs:40
	je	.L10
	call	__stack_chk_fail@PLT
.L10:
	mov	rdi, rax
.LEHB5:
	call	_Unwind_Resume@PLT
.LEHE5:
.L13:
	call	__stack_chk_fail@PLT
.L11:
	mov	rbx, QWORD PTR -8[rbp]
	leave
	.cfi_def_cfa 7, 8
	ret
	.cfi_endproc
.LFE1985:
	.section	.gcc_except_table,"a",@progbits
.LLSDA1985:
	.byte	0xff
	.byte	0xff
	.byte	0x1
	.uleb128 .LLSDACSE1985-.LLSDACSB1985
.LLSDACSB1985:
	.uleb128 .LEHB3-.LFB1985
	.uleb128 .LEHE3-.LEHB3
	.uleb128 0
	.uleb128 0
	.uleb128 .LEHB4-.LFB1985
	.uleb128 .LEHE4-.LEHB4
	.uleb128 .L12-.LFB1985
	.uleb128 0
	.uleb128 .LEHB5-.LFB1985
	.uleb128 .LEHE5-.LEHB5
	.uleb128 0
	.uleb128 0
.LLSDACSE1985:
	.text
	.size	main, .-main
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
