Dump of assembler code for function phase_6:
   0x00000000000016f1 <+0>:     push   %r14
   0x00000000000016f3 <+2>:     push   %r13
   0x00000000000016f5 <+4>:     push   %r12
   0x00000000000016f7 <+6>:     push   %rbp
   0x00000000000016f8 <+7>:     push   %rbx
   0x00000000000016f9 <+8>:     sub    $0x50,%rsp
   0x00000000000016fd <+12>:    lea    0x30(%rsp),%r13
   0x0000000000001702 <+17>:    mov    %r13,%rsi
   0x0000000000001705 <+20>:    callq  0x1b24 <read_six_numbers>
   0x000000000000170a <+25>:    mov    $0x1,%r14d
   0x0000000000001710 <+31>:    mov    %r13,%r12
   0x0000000000001713 <+34>:    jmp    0x173d <phase_6+76>
   0x0000000000001715 <+36>:    callq  0x1ae8 <explode_bomb>
   0x000000000000171a <+41>:    jmp    0x174c <phase_6+91>
   0x000000000000171c <+43>:    add    $0x1,%rbx
   0x0000000000001720 <+47>:    cmp    $0x5,%ebx
   0x0000000000001723 <+50>:    jg     0x1735 <phase_6+68>
   0x0000000000001725 <+52>:    mov    (%r12,%rbx,4),%eax
   0x0000000000001729 <+56>:    cmp    %eax,0x0(%rbp)
   0x000000000000172c <+59>:    jne    0x171c <phase_6+43>
   0x000000000000172e <+61>:    callq  0x1ae8 <explode_bomb>
   0x0000000000001733 <+66>:    jmp    0x171c <phase_6+43>
   0x0000000000001735 <+68>:    add    $0x1,%r14
   0x0000000000001739 <+72>:    add    $0x4,%r13
   0x000000000000173d <+76>:    mov    %r13,%rbp
   0x0000000000001740 <+79>:    mov    0x0(%r13),%eax
   0x0000000000001744 <+83>:    sub    $0x1,%eax
   0x0000000000001747 <+86>:    cmp    $0x5,%eax
   0x000000000000174a <+89>:    ja     0x1715 <phase_6+36>
   0x000000000000174c <+91>:    cmp    $0x5,%r14d
   0x0000000000001750 <+95>:    jg     0x1757 <phase_6+102>
   0x0000000000001752 <+97>:    mov    %r14,%rbx
   0x0000000000001755 <+100>:   jmp    0x1725 <phase_6+52>
   0x0000000000001757 <+102>:   mov    $0x0,%esi
   0x000000000000175c <+107>:   mov    0x30(%rsp,%rsi,4),%ecx
   0x0000000000001760 <+111>:   mov    $0x1,%eax
   0x0000000000001765 <+116>:   lea    0x3be4(%rip),%rdx        # 0x5350 <node1>
   0x000000000000176c <+123>:   cmp    $0x1,%ecx
   0x000000000000176f <+126>:   jle    0x177c <phase_6+139>
   0x0000000000001771 <+128>:   mov    0x8(%rdx),%rdx
   0x0000000000001775 <+132>:   add    $0x1,%eax
   0x0000000000001778 <+135>:   cmp    %ecx,%eax
   0x000000000000177a <+137>:   jne    0x1771 <phase_6+128>
   0x000000000000177c <+139>:   mov    %rdx,(%rsp,%rsi,8)
   0x0000000000001780 <+143>:   add    $0x1,%rsi
   0x0000000000001784 <+147>:   cmp    $0x6,%rsi
   0x0000000000001788 <+151>:   jne    0x175c <phase_6+107>
   0x000000000000178a <+153>:   mov    (%rsp),%rbx
   0x000000000000178e <+157>:   mov    0x8(%rsp),%rax
--Type <RET> for more, q to quit, c to continue without paging--
   0x0000000000001793 <+162>:   mov    %rax,0x8(%rbx)
   0x0000000000001797 <+166>:   mov    0x10(%rsp),%rdx
   0x000000000000179c <+171>:   mov    %rdx,0x8(%rax)
   0x00000000000017a0 <+175>:   mov    0x18(%rsp),%rax
   0x00000000000017a5 <+180>:   mov    %rax,0x8(%rdx)
   0x00000000000017a9 <+184>:   mov    0x20(%rsp),%rdx
   0x00000000000017ae <+189>:   mov    %rdx,0x8(%rax)
   0x00000000000017b2 <+193>:   mov    0x28(%rsp),%rax
   0x00000000000017b7 <+198>:   mov    %rax,0x8(%rdx)
   0x00000000000017bb <+202>:   movq   $0x0,0x8(%rax)
   0x00000000000017c3 <+210>:   mov    $0x5,%ebp
   0x00000000000017c8 <+215>:   jmp    0x17d3 <phase_6+226>
   0x00000000000017ca <+217>:   mov    0x8(%rbx),%rbx
   0x00000000000017ce <+221>:   sub    $0x1,%ebp
   0x00000000000017d1 <+224>:   je     0x17e4 <phase_6+243>
   0x00000000000017d3 <+226>:   mov    0x8(%rbx),%rax
   0x00000000000017d7 <+230>:   mov    (%rax),%eax
   0x00000000000017d9 <+232>:   cmp    %eax,(%rbx)
   0x00000000000017db <+234>:   jle    0x17ca <phase_6+217>
   0x00000000000017dd <+236>:   callq  0x1ae8 <explode_bomb>
   0x00000000000017e2 <+241>:   jmp    0x17ca <phase_6+217>
   0x00000000000017e4 <+243>:   add    $0x50,%rsp
   0x00000000000017e8 <+247>:   pop    %rbx
   0x00000000000017e9 <+248>:   pop    %rbp
   0x00000000000017ea <+249>:   pop    %r12
   0x00000000000017ec <+251>:   pop    %r13
   0x00000000000017ee <+253>:   pop    %r14
   0x00000000000017f0 <+255>:   retq
End of assembler dump.

//Solution
1 3 2 6 4 5