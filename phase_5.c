Dump of assembler code for function phase_5:
   0x00000000000016a9 <+0>:     push   %rbx
   0x00000000000016aa <+1>:     mov    %rdi,%rbx
   0x00000000000016ad <+4>:     callq  0x1900 <string_length>
   0x00000000000016b2 <+9>:     cmp    $0x6,%eax
   0x00000000000016b5 <+12>:    jne    0x16e3 <phase_5+58>
   0x00000000000016b7 <+14>:    mov    %rbx,%rax
   0x00000000000016ba <+17>:    lea    0x6(%rbx),%rdi
   0x00000000000016be <+21>:    mov    $0x0,%ecx
   0x00000000000016c3 <+26>:    lea    0x1b16(%rip),%rsi        # 0x31e0 <array.0>
   0x00000000000016ca <+33>:    movzbl (%rax),%edx
   0x00000000000016cd <+36>:    and    $0xf,%edx
   0x00000000000016d0 <+39>:    add    (%rsi,%rdx,4),%ecx
   0x00000000000016d3 <+42>:    add    $0x1,%rax
   0x00000000000016d7 <+46>:    cmp    %rdi,%rax
   0x00000000000016da <+49>:    jne    0x16ca <phase_5+33>
   0x00000000000016dc <+51>:    cmp    $0x31,%ecx
   0x00000000000016df <+54>:    jne    0x16ea <phase_5+65>
   0x00000000000016e1 <+56>:    pop    %rbx
   0x00000000000016e2 <+57>:    retq
   0x00000000000016e3 <+58>:    callq  0x1ae8 <explode_bomb>
   0x00000000000016e8 <+63>:    jmp    0x16b7 <phase_5+14>
   0x00000000000016ea <+65>:    callq  0x1ae8 <explode_bomb>
   0x00000000000016ef <+70>:    jmp    0x16e1 <phase_5+56>
End of assembler dump.

//Solution
aaacff