Dump of assembler code for function phase_3:
   0x00000000000014ba <+0>:     sub    $0x18,%rsp
   0x00000000000014be <+4>:     lea    0x7(%rsp),%rcx
   0x00000000000014c3 <+9>:     lea    0xc(%rsp),%rdx
   0x00000000000014c8 <+14>:    lea    0x8(%rsp),%r8
   0x00000000000014cd <+19>:    lea    0x1cd2(%rip),%rsi        # 0x31a6
   0x00000000000014d4 <+26>:    mov    $0x0,%eax
   0x00000000000014d9 <+31>:    callq  0x10b0 <__isoc99_sscanf@plt>
   0x00000000000014de <+36>:    cmp    $0x2,%eax
   0x00000000000014e1 <+39>:    jle    0x1502 <phase_3+72>
   0x00000000000014e3 <+41>:    cmpl   $0x7,0xc(%rsp)
   0x00000000000014e8 <+46>:    ja     0x15f3 <phase_3+313>
   0x00000000000014ee <+52>:    mov    0xc(%rsp),%eax
   0x00000000000014f2 <+56>:    lea    0x1cc7(%rip),%rdx        # 0x31c0
   0x00000000000014f9 <+63>:    movslq (%rdx,%rax,4),%rax
   0x00000000000014fd <+67>:    add    %rdx,%rax
   0x0000000000001500 <+70>:    jmpq   *%rax
   0x0000000000001502 <+72>:    callq  0x1ae8 <explode_bomb>
   0x0000000000001507 <+77>:    jmp    0x14e3 <phase_3+41>
   0x0000000000001509 <+79>:    mov    $0x63,%eax
   0x000000000000150e <+84>:    cmpl   $0xc8,0x8(%rsp)
   0x0000000000001516 <+92>:    je     0x15fd <phase_3+323>
   0x000000000000151c <+98>:    callq  0x1ae8 <explode_bomb>
   0x0000000000001521 <+103>:   mov    $0x63,%eax
   0x0000000000001526 <+108>:   jmpq   0x15fd <phase_3+323>
   0x000000000000152b <+113>:   mov    $0x64,%eax
   0x0000000000001530 <+118>:   cmpl   $0x234,0x8(%rsp)
   0x0000000000001538 <+126>:   je     0x15fd <phase_3+323>
   0x000000000000153e <+132>:   callq  0x1ae8 <explode_bomb>
   0x0000000000001543 <+137>:   mov    $0x64,%eax
   0x0000000000001548 <+142>:   jmpq   0x15fd <phase_3+323>
   0x000000000000154d <+147>:   mov    $0x77,%eax
   0x0000000000001552 <+152>:   cmpl   $0x36a,0x8(%rsp)
   0x000000000000155a <+160>:   je     0x15fd <phase_3+323>
   0x0000000000001560 <+166>:   callq  0x1ae8 <explode_bomb>
   0x0000000000001565 <+171>:   mov    $0x77,%eax
   0x000000000000156a <+176>:   jmpq   0x15fd <phase_3+323>
   0x000000000000156f <+181>:   mov    $0x79,%eax
   0x0000000000001574 <+186>:   cmpl   $0x346,0x8(%rsp)
   0x000000000000157c <+194>:   je     0x15fd <phase_3+323>
   0x000000000000157e <+196>:   callq  0x1ae8 <explode_bomb>
   0x0000000000001583 <+201>:   mov    $0x79,%eax
   0x0000000000001588 <+206>:   jmp    0x15fd <phase_3+323>
   0x000000000000158a <+208>:   mov    $0x69,%eax
   0x000000000000158f <+213>:   cmpl   $0x7c,0x8(%rsp)
   0x0000000000001594 <+218>:   je     0x15fd <phase_3+323>
   0x0000000000001596 <+220>:   callq  0x1ae8 <explode_bomb>
   0x000000000000159b <+225>:   mov    $0x69,%eax
   0x00000000000015a0 <+230>:   jmp    0x15fd <phase_3+323>
   0x00000000000015a2 <+232>:   mov    $0x6f,%eax
--Type <RET> for more, q to quit, c to continue without paging--
   0x00000000000015a7 <+237>:   cmpl   $0x115,0x8(%rsp)
   0x00000000000015af <+245>:   je     0x15fd <phase_3+323>
   0x00000000000015b1 <+247>:   callq  0x1ae8 <explode_bomb>
   0x00000000000015b6 <+252>:   mov    $0x6f,%eax
   0x00000000000015bb <+257>:   jmp    0x15fd <phase_3+323>
   0x00000000000015bd <+259>:   mov    $0x6c,%eax
   0x00000000000015c2 <+264>:   cmpl   $0x18e,0x8(%rsp)
   0x00000000000015ca <+272>:   je     0x15fd <phase_3+323>
   0x00000000000015cc <+274>:   callq  0x1ae8 <explode_bomb>
   0x00000000000015d1 <+279>:   mov    $0x6c,%eax
   0x00000000000015d6 <+284>:   jmp    0x15fd <phase_3+323>
   0x00000000000015d8 <+286>:   mov    $0x76,%eax
   0x00000000000015dd <+291>:   cmpl   $0x379,0x8(%rsp)
   0x00000000000015e5 <+299>:   je     0x15fd <phase_3+323>
   0x00000000000015e7 <+301>:   callq  0x1ae8 <explode_bomb>
   0x00000000000015ec <+306>:   mov    $0x76,%eax
   0x00000000000015f1 <+311>:   jmp    0x15fd <phase_3+323>
   0x00000000000015f3 <+313>:   callq  0x1ae8 <explode_bomb>
   0x00000000000015f8 <+318>:   mov    $0x77,%eax
   0x00000000000015fd <+323>:   cmp    %al,0x7(%rsp)
   0x0000000000001601 <+327>:   jne    0x1608 <phase_3+334>
   0x0000000000001603 <+329>:   add    $0x18,%rsp
   0x0000000000001607 <+333>:   retq
   0x0000000000001608 <+334>:   callq  0x1ae8 <explode_bomb>
   0x000000000000160d <+339>:   jmp    0x1603 <phase_3+329>
End of assembler dump.
//solution

3 y 838
