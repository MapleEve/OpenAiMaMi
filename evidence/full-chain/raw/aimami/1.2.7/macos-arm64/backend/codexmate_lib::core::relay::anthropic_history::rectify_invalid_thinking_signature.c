// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_history::rectify_invalid_thinking_signature::h1127c9cd26de889e; addr: 0x100c3fc00; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:41Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_history::rectify_invalid_thinking_signature::h1127c9cd26de889e(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r14
  int v7; // edx
  __int64 v8; // r13
  __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int32 v11; // eax
  unsigned int v12; // ecx
  __int64 v13; // rax
  unsigned __int32 v14; // eax
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // r14
  _BYTE *v18; // rax
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r12
  __int64 v22; // r14
  __int64 v23; // rax
  _QWORD v25[3]; // [rsp+8h] [rbp-68h] BYREF
  __int64 v26; // [rsp+20h] [rbp-50h]
  __int64 v27; // [rsp+28h] [rbp-48h]
  __int128 v28; // [rsp+30h] [rbp-40h] BYREF
  __int64 v29; // [rsp+40h] [rbp-30h] BYREF

  v28 = 0; /*0x100c3fc1a*/
  v29 = 0; /*0x100c3fc1e*/
  v2 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x100c3fc32*/
         "messagesadaptiverequiredrejectedmsg_stopmarkdown",
         8,
         a2);
  if ( v2 ) /*0x100c3fc3a*/
  {
    v3 = v2; /*0x100c3fc40*/
    if ( *(_BYTE *)v2 == 4 ) /*0x100c3fc46*/
    {
      v26 = v2 + 8; /*0x100c3fc53*/
      v4 = *(_QWORD *)(v2 + 16); /*0x100c3fc57*/
      v5 = 32LL * *(_QWORD *)(v2 + 24); /*0x100c3fc5f*/
      v27 = v4; /*0x100c3fc63*/
      v6 = v4 - 32; /*0x100c3fc67*/
      do /*0x100c3fc91*/
      {
        if ( !v5 ) /*0x100c3fc96*/
          goto LABEL_17; /*0x100c3fc96*/
        v8 = v5; /*0x100c3fc9c*/
        v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3fcab*/
               "roletask-axobluedaterectMoveline",
               4,
               v6 + v5);
        if ( !v9 || *(_BYTE *)v9 != 3 || *(_QWORD *)(v9 + 24) != 6 ) /*0x100c3fcbf*/
          break; /*0x100c3fcbf*/
        v10 = *(_QWORD *)(v9 + 16); /*0x100c3fcc1*/
        v11 = _byteswap_ulong(*(_DWORD *)v10); /*0x100c3fcc7*/
        v12 = 1937339252; /*0x100c3fcc9*/
        if ( v11 == 1937339252 ) /*0x100c3fcd3*/
        {
          v11 = (unsigned __int16)__ROL2__(*(_WORD *)(v10 + 4), 8); /*0x100c3fcdd*/
          v12 = 25965; /*0x100c3fce0*/
          v7 = 0; /*0x100c3fce5*/
          if ( (unsigned __int16)v11 == 25965 ) /*0x100c3fcec*/
            continue; /*0x100c3fcec*/
        }
        v7 = 2 * (v11 >= v12) - 1; /*0x100c3fc87*/
        v5 = v8 - 32; /*0x100c3fc8b*/
      }
      while ( !v7 ); /*0x100c3fc91*/
      v13 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3fd08*/
              "roletask-axobluedaterectMoveline",
              4,
              v27 + v8 - 32);
      if ( !v13 /*0x100c3fdff*/
        || *(_BYTE *)v13 != 3
        || *(_QWORD *)(v13 + 24) != 4
        || (v14 = _byteswap_ulong(**(_DWORD **)(v13 + 16)), v14 >= 0x75736573 != v14 < 0x75736572)
        || (v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &anon_859d1b4600149d0c2c9adb806d5a63b7_295,
                    7,
                    v27 + v8 - 32)) == 0
        || *(_BYTE *)v19 != 4
        || (v20 = *(_QWORD *)(v19 + 24)) == 0 )
      {
LABEL_17:
        v15 = *(_QWORD *)(v3 + 24); /*0x100c3fd41*/
        if ( v15 ) /*0x100c3fd48*/
        {
          v16 = *(_QWORD *)(v3 + 16); /*0x100c3fd4a*/
          v17 = 32 * v15; /*0x100c3fd4e*/
          do /*0x100c3fd68*/
          {
            v18 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x100c3fd75*/
                             &anon_859d1b4600149d0c2c9adb806d5a63b7_295,
                             7,
                             v16);
            if ( v18 && *v18 == 4 ) /*0x100c3fd82*/
            {
              v25[0] = &v28; /*0x100c3fd8c*/
              v25[1] = (char *)&v28 + 8; /*0x100c3fd94*/
              v25[2] = &v29; /*0x100c3fd9c*/
              alloc::vec::Vec$LT$T$C$A$GT$::retain_mut::hc848b0f6aa6292c6(v18 + 8, v25); /*0x100c3fda6*/
            }
            v16 += 32; /*0x100c3fd60*/
            v17 -= 32; /*0x100c3fd64*/
          }
          while ( v17 ); /*0x100c3fd68*/
        }
        alloc::vec::Vec$LT$T$C$A$GT$::retain::h633935155e064ca5(v26); /*0x100c3fdb1*/
        *(_QWORD *)(a1 + 16) = v29; /*0x100c3fdba*/
        *(_OWORD *)a1 = v28; /*0x100c3fdca*/
        return a1; /*0x100c3fdcd*/
      }
      v21 = *(_QWORD *)(v19 + 16); /*0x100c3fe05*/
      v22 = 32 * v20; /*0x100c3fe09*/
      while ( 1 ) /*0x100c3fe2f*/
      {
        v23 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3fe2f*/
                &anon_859d1b4600149d0c2c9adb806d5a63b7_276,
                4,
                v21);
        if ( v23 ) /*0x100c3fe37*/
        {
          if ( *(_BYTE *)v23 == 3 /*0x100c3fe6a*/
            && *(_QWORD *)(v23 + 24) == 11
            && !(**(_QWORD **)(v23 + 16) ^ 0x7365725F6C6F6F74LL
               | *(_QWORD *)(*(_QWORD *)(v23 + 16) + 3LL) ^ 0x746C757365725F6CLL) )
          {
            break; /*0x100c3fe6a*/
          }
        }
        v21 += 32; /*0x100c3fe16*/
        v22 -= 32; /*0x100c3fe1a*/
        if ( !v22 ) /*0x100c3fe1e*/
          goto LABEL_17; /*0x100c3fe1e*/
      }
    }
  }
  *(_QWORD *)(a1 + 16) = 0; /*0x100c3fe6f*/
  *(_QWORD *)(a1 + 8) = 0; /*0x100c3fe77*/
  *(_QWORD *)a1 = 0; /*0x100c3fe7f*/
  return a1; /*0x100c3fe89*/
}