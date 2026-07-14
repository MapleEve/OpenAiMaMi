// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_compact_compat_response node 0x10105f5c0 depth=1
__int64 __fastcall _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
        const void *a1,
        size_t a2,
        __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r15
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  size_t v9; // rdx
  __int64 v10; // rbx
  int v11; // eax
  char v12; // cl
  __int64 v14; // [rsp+10h] [rbp-40h]
  __int64 v15; // [rsp+18h] [rbp-38h]
  __int64 i; // [rsp+20h] [rbp-30h]

  if ( *(_BYTE *)a3 == 5 ) /*0x10105f5dc*/
  {
    v3 = *(_QWORD *)(a3 + 8); /*0x10105f5e2*/
    if ( v3 ) /*0x10105f5e9*/
    {
      for ( i = *(_QWORD *)(a3 + 16); ; --i ) /*0x10105f5f3*/
      {
        v4 = v3 + 360; /*0x10105f5f7*/
        v14 = v3; /*0x10105f605*/
        v5 = v3 - 32; /*0x10105f609*/
        v15 = *(unsigned __int16 *)(v3 + 626); /*0x10105f60d*/
        v6 = 3LL * (unsigned int)(8 * v15); /*0x10105f618*/
        v7 = -1; /*0x10105f61c*/
        do /*0x10105f67c*/
        {
          if ( !v6 ) /*0x10105f633*/
          {
            v7 = v15; /*0x10105f690*/
            goto LABEL_14; /*0x10105f690*/
          }
          v8 = v4 + 24; /*0x10105f635*/
          v9 = *(_QWORD *)(v4 + 16); /*0x10105f63d*/
          v10 = a2 - v9; /*0x10105f648*/
          if ( a2 < v9 ) /*0x10105f64b*/
            v9 = a2; /*0x10105f64b*/
          v11 = memcmp(a1, *(const void **)(v4 + 8), v9); /*0x10105f653*/
          if ( v11 ) /*0x10105f65c*/
            v10 = v11; /*0x10105f65c*/
          v12 = (v10 > 0) - (v10 < 0); /*0x10105f669*/
          v5 += 32; /*0x10105f66b*/
          ++v7; /*0x10105f66f*/
          v6 -= 24; /*0x10105f672*/
          v4 = v8; /*0x10105f676*/
        }
        while ( v12 == 1 ); /*0x10105f67c*/
        if ( !v12 ) /*0x10105f683*/
          return v5; /*0x10105f683*/
LABEL_14:
        if ( !i ) /*0x10105f69c*/
          break; /*0x10105f69c*/
        v3 = *(_QWORD *)(v14 + 8 * v7 + 632); /*0x10105f6a6*/
      }
    }
  }
  return 0; /*0x10105f6b9*/
}