Dump of assembler code for function phase_4:
   0x0000000000001650 <+0>:     sub    $0x18,%rsp
   0x0000000000001654 <+4>:     lea    0x8(%rsp),%rcx
   0x0000000000001659 <+9>:     lea    0xc(%rsp),%rdx
   0x000000000000165e <+14>:    lea    0x1d70(%rip),%rsi        # 0x33d5
   0x0000000000001665 <+21>:    mov    $0x0,%eax
   0x000000000000166a <+26>:    callq  0x10b0 <__isoc99_sscanf@plt>
   0x000000000000166f <+31>:    cmp    $0x2,%eax
   0x0000000000001672 <+34>:    jne    0x167b <phase_4+43>
   0x0000000000001674 <+36>:    cmpl   $0xe,0xc(%rsp)
   0x0000000000001679 <+41>:    jbe    0x1680 <phase_4+48>
   0x000000000000167b <+43>:    callq  0x1ae8 <explode_bomb>
   0x0000000000001680 <+48>:    mov    $0xe,%edx
   0x0000000000001685 <+53>:    mov    $0x0,%esi
   0x000000000000168a <+58>:    mov    0xc(%rsp),%edi
   0x000000000000168e <+62>:    callq  0x160f <func4>
   0x0000000000001693 <+67>:    cmp    $0x4,%eax
   0x0000000000001696 <+70>:    jne    0x169f <phase_4+79>
   0x0000000000001698 <+72>:    cmpl   $0x4,0x8(%rsp)
   0x000000000000169d <+77>:    je     0x16a4 <phase_4+84>
   0x000000000000169f <+79>:    callq  0x1ae8 <explode_bomb>
   0x00000000000016a4 <+84>:    add    $0x18,%rsp
   0x00000000000016a8 <+88>:    retq
End of assembler dump.

//Solution
2 4