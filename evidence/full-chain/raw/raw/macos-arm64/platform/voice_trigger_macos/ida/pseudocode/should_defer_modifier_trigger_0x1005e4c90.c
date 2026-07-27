// __ZN13codexmate_lib8platform19voice_trigger_macos29should_defer_modifier_trigger @ 0x1005e4c90 | 基线 same-set
char __fastcall codexmate_lib::platform::voice_trigger_macos::should_defer_modifier_trigger::h2fdf50b67e6d9a1d(
        __int64 a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // r10
  __int64 v8; // r12
  __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned __int64 v12; // r12
  __int64 v13; // rcx

  if ( !a2 ) /*0x1005e4c93*/
    return 0; /*0x1005e4d97*/
  v3 = a2 << 6; /*0x1005e4ca6*/
  v4 = a3[3]; /*0x1005e4caa*/
  v5 = a3[4]; /*0x1005e4cae*/
  v6 = a3[6] & 0x9E0000LL; /*0x1005e4cb6*/
  v7 = 0; /*0x1005e4cd4*/
  do /*0x1005e4ce7*/
  {
    if ( *(_QWORD *)(a1 + v7 + 24) != v4 /*0x1005e4cf7*/
      && (((unsigned __int64)(v5 - 54) < 0xA) & (unsigned __int8)(0x3F7u >> (v5 - 54))) != 0 )
    {
      v8 = *(_QWORD *)(a1 + v7 + 32); /*0x1005e4cf9*/
      v9 = *(_QWORD *)(a1 + v7 + 48); /*0x1005e4cfe*/
      v10 = v6 | qword_101601C30[v5 - 54]; /*0x1005e4d0b*/
      if ( ((unsigned __int8)(0x3F7u >> (v8 - 54)) & ((unsigned __int64)(v8 - 54) < 0xA)) != 0 ) /*0x1005e4d25*/
      {
        v11 = qword_101601C30[v8 - 54] | *(_QWORD *)(a1 + v7 + 48) & 0x9E0000LL; /*0x1005e4d2e*/
        if ( v10 != v11 && (v10 & v11) == v10 ) /*0x1005e4d41*/
          return 1; /*0x1005e4d41*/
      }
      else if ( v9 != 0 && v8 < 1000 ) /*0x1005e4d52*/
      {
        v12 = v8 - 64; /*0x1005e4d59*/
        if ( v12 <= 0x3A ) /*0x1005e4d61*/
        {
          v13 = 0x542AEBF04018001LL; /*0x1005e4d63*/
          if ( _bittest64(&v13, v12) ) /*0x1005e4d6d*/
            v9 = *(_QWORD *)(a1 + v7 + 48) & 0x1E0000LL; /*0x1005e4d73*/
        }
        if ( (~v9 & v10) == 0 ) /*0x1005e4d80*/
          return 1; /*0x1005e4d88*/
      }
    }
    v7 += 64; /*0x1005e4ce0*/
  }
  while ( v3 != v7 ); /*0x1005e4ce7*/
  return 0; /*0x1005e4d96*/
}