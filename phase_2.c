Dump of assembler code for function phase_2:
   0x0000000000001475 <+0>:     push   %rbp
   0x0000000000001476 <+1>:     push   %rbx
   0x0000000000001477 <+2>:     sub    $0x28,%rsp
   0x000000000000147b <+6>:     mov    %rsp,%rsi
   0x000000000000147e <+9>:     callq  0x1b24 <read_six_numbers>
   0x0000000000001483 <+14>:    cmpl   $0x1,(%rsp)
   0x0000000000001487 <+18>:    jne    0x1493 <phase_2+30>
   0x0000000000001489 <+20>:    mov    %rsp,%rbx
   0x000000000000148c <+23>:    lea    0x14(%rsp),%rbp
   0x0000000000001491 <+28>:    jmp    0x14a3 <phase_2+46>
   0x0000000000001493 <+30>:    callq  0x1ae8 <explode_bomb>
   0x0000000000001498 <+35>:    jmp    0x1489 <phase_2+20>
   0x000000000000149a <+37>:    add    $0x4,%rbx
   0x000000000000149e <+41>:    cmp    %rbp,%rbx
   0x00000000000014a1 <+44>:    je     0x14b3 <phase_2+62>
   0x00000000000014a3 <+46>:    mov    (%rbx),%eax
   0x00000000000014a5 <+48>:    add    %eax,%eax
   0x00000000000014a7 <+50>:    cmp    %eax,0x4(%rbx)
   0x00000000000014aa <+53>:    je     0x149a <phase_2+37>
   0x00000000000014ac <+55>:    callq  0x1ae8 <explode_bomb>
   0x00000000000014b1 <+60>:    jmp    0x149a <phase_2+37>
   0x00000000000014b3 <+62>:    add    $0x28,%rsp
   0x00000000000014b7 <+66>:    pop    %rbx
   0x00000000000014b8 <+67>:    pop    %rbp
   0x00000000000014b9 <+68>:    retq
End of assembler dump.

//Solution 
1 2 4 8 16 32