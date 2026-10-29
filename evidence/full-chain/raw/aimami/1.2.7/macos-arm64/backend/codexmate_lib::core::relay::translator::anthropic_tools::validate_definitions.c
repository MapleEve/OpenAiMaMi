// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::validate_definitions::h66dea8e23488a8ee; addr: 0x1007f68c0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:22Z
char *__fastcall codexmate_lib::core::relay::translator::anthropic_tools::validate_definitions::h66dea8e23488a8ee(
        _BYTE *a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v7; // r14
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  bool v11; // zf
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // rax
  char *v16; // rbx
  __int64 v18; // [rsp+0h] [rbp-180h] BYREF
  _BYTE *v19; // [rsp+8h] [rbp-178h]
  __int64 v20; // [rsp+10h] [rbp-170h]
  __int64 v21; // [rsp+58h] [rbp-128h]
  __int64 v22; // [rsp+A0h] [rbp-E0h]
  __int64 v23; // [rsp+A8h] [rbp-D8h]
  _QWORD v24[9]; // [rsp+B0h] [rbp-D0h] BYREF
  _QWORD v25[9]; // [rsp+F8h] [rbp-88h] BYREF
  _QWORD v26[8]; // [rsp+140h] [rbp-40h] BYREF

  v26[0] = 0; /*0x1007f68d4*/
  v26[2] = 0; /*0x1007f68dc*/
  if ( a2 ) /*0x1007f68e7*/
  {
    v7 = 32 * a2; /*0x1007f68f3*/
    while ( 1 ) /*0x1007f6929*/
    {
      v8 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f6929*/
                       &anon_5fc5982723cbea77922f0a3a965b6f67_189,
                       4,
                       a1);
      if ( !v8 ) /*0x1007f6931*/
        v8 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f6933*/
      if ( *(_BYTE *)v8 == 3 ) /*0x1007f693d*/
      {
        a2 = v8[2]; /*0x1007f693f*/
        v9 = v8[3]; /*0x1007f6943*/
      }
      else
      {
        a2 = 1; /*0x1007f6950*/
        v9 = 0; /*0x1007f6955*/
      }
      v10 = alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbebde45e4a579bc5(v26, a2, v9, a1); /*0x1007f695d*/
      if ( v10 ) /*0x1007f6965*/
      {
        a4 = a1 + 8; /*0x1007f6967*/
        a3 = 0; /*0x1007f696f*/
        if ( *a1 != 5 ) /*0x1007f6974*/
          a4 = nullptr; /*0x1007f6974*/
        v11 = *(_BYTE *)v10 == 5; /*0x1007f6978*/
        v22 = 1; /*0x1007f697b*/
        v25[0] = 2; /*0x1007f6986*/
        v18 = 1; /*0x1007f6991*/
        v19 = a4; /*0x1007f699c*/
        v20 = 2; /*0x1007f69a3*/
        v21 = 2; /*0x1007f69ae*/
        v24[0] = 2; /*0x1007f69b9*/
        v23 = 0; /*0x1007f69c4*/
        if ( v11 ) /*0x1007f69cf*/
        {
          v12 = *(_QWORD *)(v10 + 8); /*0x1007f69d5*/
          v13 = 0; /*0x1007f69d9*/
          v14 = v12; /*0x1007f69db*/
          if ( v12 ) /*0x1007f69e5*/
            v14 = *(_QWORD *)(v10 + 24); /*0x1007f69e7*/
          v15 = *(_QWORD *)(v10 + 16); /*0x1007f69eb*/
          LOBYTE(v13) = v12 != 0; /*0x1007f69ef*/
          v24[0] = v13; /*0x1007f69f2*/
          v24[1] = 0; /*0x1007f69f9*/
          v24[2] = v12; /*0x1007f6a04*/
          v24[3] = v15; /*0x1007f6a0b*/
          v24[4] = v13; /*0x1007f6a12*/
          v24[5] = 0; /*0x1007f6a19*/
          v24[6] = v12; /*0x1007f6a24*/
          v24[7] = v15; /*0x1007f6a2b*/
          v24[8] = v14; /*0x1007f6a32*/
          a2 = (__int64)v24; /*0x1007f6a3c*/
          if ( (unsigned __int8)((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64, __int64, __int64, __int64))_$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::flatten::_$u7b$$u7b$closure$u7d$$u7d$::h76ddaa8a74c1729b)( /*0x1007f6a4a*/
                                  &v18,
                                  v24,
                                  v13,
                                  v12,
                                  a5,
                                  a6) != 3 )
            break; /*0x1007f6a4a*/
          v23 = 0; /*0x1007f6a4c*/
          v24[0] = 2; /*0x1007f6a5e*/
          if ( LODWORD(v25[0]) != 2 ) /*0x1007f6a69*/
          {
            a2 = (__int64)v25; /*0x1007f6a6e*/
            if ( (unsigned __int8)((__int64 (__fastcall *)(__int64 *, _QWORD *, __int64, _BYTE *, __int64, __int64))_$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::try_fold::flatten::_$u7b$$u7b$closure$u7d$$u7d$::h76ddaa8a74c1729b)( /*0x1007f6a7c*/
                                    &v18,
                                    v25,
                                    a3,
                                    a4,
                                    a5,
                                    a6) != 3 )
              break; /*0x1007f6a7c*/
          }
        }
        v25[0] = 2; /*0x1007f6a7e*/
        if ( ((__int64 (__fastcall *)(__int64 *, __int64, __int64, _BYTE *, __int64, __int64))_$LT$core..iter..adapters..filter..Filter$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8963dfcc4da0ddb6)( /*0x1007f6a8c*/
               &v18,
               a2,
               a3,
               a4,
               a5,
               a6) )
        {
          break; /*0x1007f6a8c*/
        }
      }
      a1 += 32; /*0x1007f6910*/
      v7 -= 32; /*0x1007f6914*/
      if ( !v7 ) /*0x1007f6918*/
        goto LABEL_20; /*0x1007f6918*/
    }
    v16 = "Conflicting discovered tool definitions; signed history was not modified/tool_choice/type"; /*0x1007f6a9a*/
  }
  else
  {
LABEL_20:
    v16 = nullptr; /*0x1007f6aa3*/
  }
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hdae5a189372841c0( /*0x1007f6aa9*/
    v26,
    a2,
    a3,
    a4,
    a5,
    a6,
    v18,
    v19,
    v20);
  return v16; /*0x1007f6ab1*/
}