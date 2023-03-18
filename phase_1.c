(gdb) disas phase_1
Dump of assembler code for function phase_1:
   0x0000000000001455 <+0>:     sub    $0x8,%rsp
   0x0000000000001459 <+4>:     lea    0x1cf0(%rip),%rsi        # 0x3150
   0x0000000000001460 <+11>:    callq  0x191d <strings_not_equal>
   0x0000000000001465 <+16>:    test   %eax,%eax
   0x0000000000001467 <+18>:    jne    0x146e <phase_1+25>
   0x0000000000001469 <+20>:    add    $0x8,%rsp
   0x000000000000146d <+24>:    retq
   0x000000000000146e <+25>:    callq  0x1ae8 <explode_bomb>
   0x0000000000001473 <+30>:    jmp    0x1469 <phase_1+20>
End of assembler dump.

//solution 
For NASA, space is still a high priority.
