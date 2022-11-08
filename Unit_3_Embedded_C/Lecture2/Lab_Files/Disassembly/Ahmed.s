
Ahmed.elf:     file format elf32-littlearm


Disassembly of section .reset:

00010000 <reset>:
   10000:	e59fd004 	ldr	sp, [pc, #4]	; 1000c <stop+0x4>
   10004:	eb000001 	bl	10010 <ahmed>

00010008 <stop>:
   10008:	eafffffe 	b	10008 <stop>
   1000c:	00011148 	andeq	r1, r1, r8, asr #2

Disassembly of section .text:

00010010 <ahmed>:
   10010:	e92d4800 	push	{fp, lr}
   10014:	e28db004 	add	fp, sp, #4
   10018:	e59f0008 	ldr	r0, [pc, #8]	; 10028 <ahmed+0x18>
   1001c:	eb000002 	bl	1002c <Uart_Send_String>
   10020:	e1a00000 	nop			; (mov r0, r0)
   10024:	e8bd8800 	pop	{fp, pc}
   10028:	000100e4 	andeq	r0, r1, r4, ror #1

0001002c <Uart_Send_String>:
   1002c:	e52db004 	push	{fp}		; (str fp, [sp, #-4]!)
   10030:	e28db000 	add	fp, sp, #0
   10034:	e24dd00c 	sub	sp, sp, #12
   10038:	e50b0008 	str	r0, [fp, #-8]
   1003c:	ea000006 	b	1005c <Uart_Send_String+0x30>
   10040:	e51b3008 	ldr	r3, [fp, #-8]
   10044:	e5d32000 	ldrb	r2, [r3]
   10048:	e59f302c 	ldr	r3, [pc, #44]	; 1007c <Uart_Send_String+0x50>
   1004c:	e5832000 	str	r2, [r3]
   10050:	e51b3008 	ldr	r3, [fp, #-8]
   10054:	e2833001 	add	r3, r3, #1
   10058:	e50b3008 	str	r3, [fp, #-8]
   1005c:	e51b3008 	ldr	r3, [fp, #-8]
   10060:	e5d33000 	ldrb	r3, [r3]
   10064:	e3530000 	cmp	r3, #0
   10068:	1afffff4 	bne	10040 <Uart_Send_String+0x14>
   1006c:	e1a00000 	nop			; (mov r0, r0)
   10070:	e28bd000 	add	sp, fp, #0
   10074:	e49db004 	pop	{fp}		; (ldr fp, [sp], #4)
   10078:	e12fff1e 	bx	lr
   1007c:	101f1000 	andsne	r1, pc, r0

00010080 <string_buffer2>:
   10080:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   10084:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   10088:	7065642d 	rsbvc	r6, r5, sp, lsr #8
   1008c:	413a6874 	teqmi	sl, r4, ror r8
   10090:	64656d68 	strbtvs	r6, [r5], #-3432	; 0xfffff298
   10094:	202e4d20 	eorcs	r4, lr, r0, lsr #26
   10098:	6b7a6952 	blvs	1eaa5e8 <stack_top+0x1e994a0>
	...

Disassembly of section .data:

000100e4 <string_buffer>:
   100e4:	7261656c 	rsbvc	r6, r1, #108, 10	; 0x1b000000
   100e8:	6e692d6e 	cdpvs	13, 6, cr2, cr9, cr14, {3}
   100ec:	7065642d 	rsbvc	r6, r5, sp, lsr #8
   100f0:	413a6874 	teqmi	sl, r4, ror r8
   100f4:	64656d68 	strbtvs	r6, [r5], #-3432	; 0xfffff298
   100f8:	202e4d20 	eorcs	r4, lr, r0, lsr #26
   100fc:	6b7a6952 	blvs	1eaa64c <stack_top+0x1e99504>
	...

Disassembly of section .ARM.attributes:

00000000 <.ARM.attributes>:
   0:	00002d41 	andeq	r2, r0, r1, asr #26
   4:	61656100 	cmnvs	r5, r0, lsl #2
   8:	01006962 	tsteq	r0, r2, ror #18
   c:	00000023 	andeq	r0, r0, r3, lsr #32
  10:	4d524105 	ldfmie	f4, [r2, #-20]	; 0xffffffec
  14:	45363239 	ldrmi	r3, [r6, #-569]!	; 0xfffffdc7
  18:	00532d4a 	subseq	r2, r3, sl, asr #26
  1c:	01080506 	tsteq	r8, r6, lsl #10
  20:	04120109 	ldreq	r0, [r2], #-265	; 0xfffffef7
  24:	01150114 	tsteq	r5, r4, lsl r1
  28:	01180317 	tsteq	r8, r7, lsl r3
  2c:	Address 0x0000002c is out of bounds.


Disassembly of section .comment:

00000000 <.comment>:
   0:	3a434347 	bcc	10d0d24 <stack_top+0x10bfbdc>
   4:	4e472820 	cdpmi	8, 4, cr2, cr7, cr0, {1}
   8:	6f542055 	svcvs	0x00542055
   c:	20736c6f 	rsbscs	r6, r3, pc, ror #24
  10:	20726f66 	rsbscs	r6, r2, r6, ror #30
  14:	206d7241 	rsbcs	r7, sp, r1, asr #4
  18:	65626d45 	strbvs	r6, [r2, #-3397]!	; 0xfffff2bb
  1c:	64656464 	strbtvs	r6, [r5], #-1124	; 0xfffffb9c
  20:	6f725020 	svcvs	0x00725020
  24:	73736563 	cmnvc	r3, #415236096	; 0x18c00000
  28:	2073726f 	rsbscs	r7, r3, pc, ror #4
  2c:	30322d37 	eorscc	r2, r2, r7, lsr sp
  30:	712d3731 			; <UNDEFINED> instruction: 0x712d3731
  34:	616d2d34 	cmnvs	sp, r4, lsr sp
  38:	29726f6a 	ldmdbcs	r2!, {r1, r3, r5, r6, r8, r9, sl, fp, sp, lr}^
  3c:	322e3720 	eorcc	r3, lr, #32, 14	; 0x800000
  40:	3220312e 	eorcc	r3, r0, #-2147483637	; 0x8000000b
  44:	30373130 	eorscc	r3, r7, r0, lsr r1
  48:	20343039 	eorscs	r3, r4, r9, lsr r0
  4c:	6c657228 	sfmvs	f7, 2, [r5], #-160	; 0xffffff60
  50:	65736165 	ldrbvs	r6, [r3, #-357]!	; 0xfffffe9b
  54:	415b2029 	cmpmi	fp, r9, lsr #32
  58:	652f4d52 	strvs	r4, [pc, #-3410]!	; fffff30e <stack_top+0xfffee1c6>
  5c:	6465626d 	strbtvs	r6, [r5], #-621	; 0xfffffd93
  60:	2d646564 	cfstr64cs	mvdx6, [r4, #-400]!	; 0xfffffe70
  64:	72622d37 	rsbvc	r2, r2, #3520	; 0xdc0
  68:	68636e61 	stmdavs	r3!, {r0, r5, r6, r9, sl, fp, sp, lr}^
  6c:	76657220 	strbtvc	r7, [r5], -r0, lsr #4
  70:	6f697369 	svcvs	0x00697369
  74:	3532206e 	ldrcc	r2, [r2, #-110]!	; 0xffffff92
  78:	34303235 	ldrtcc	r3, [r0], #-565	; 0xfffffdcb
  7c:	Address 0x0000007c is out of bounds.

