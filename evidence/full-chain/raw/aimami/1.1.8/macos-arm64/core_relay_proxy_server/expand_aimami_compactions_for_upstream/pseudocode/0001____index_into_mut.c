// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND expand_aimami_compactions_for_upstream node 0x10105f6d0 depth=1
__int64 __fastcall _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(
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

  if ( *(_BYTE *)a3 == 5 ) /*0x10105f6ec*/
  {
    v3 = *(_QWORD *)(a3 + 8); /*0x10105f6f2*/
    if ( v3 ) /*0x10105f6f9*/
    {
      for ( i = *(_QWORD *)(a3 + 16); ; --i ) /*0x10105f703*/
      {
        v4 = v3 + 360; /*0x10105f707*/
        v14 = v3; /*0x10105f715*/
        v5 = v3 - 32; /*0x10105f719*/
        v15 = *(unsigned __int16 *)(v3 + 626); /*0x10105f71d*/
        v6 = 3LL * (unsigned int)(8 * v15); /*0x10105f728*/
        v7 = -1; /*0x10105f72c*/
        do /*0x10105f78c*/
        {
          if ( !v6 ) /*0x10105f743*/
          {
            v7 = v15; /*0x10105f7a0*/
            goto LABEL_14; /*0x10105f7a0*/
          }
          v8 = v4 + 24; /*0x10105f745*/
          v9 = *(_QWORD *)(v4 + 16); /*0x10105f74d*/
          v10 = a2 - v9; /*0x10105f758*/
          if ( a2 < v9 ) /*0x10105f75b*/
            v9 = a2; /*0x10105f75b*/
          v11 = memcmp(a1, *(const void **)(v4 + 8), v9); /*0x10105f763*/
          if ( v11 ) /*0x10105f76c*/
            v10 = v11; /*0x10105f76c*/
          v12 = (v10 > 0) - (v10 < 0); /*0x10105f779*/
          v5 += 32; /*0x10105f77b*/
          ++v7; /*0x10105f77f*/
          v6 -= 24; /*0x10105f782*/
          v4 = v8; /*0x10105f786*/
        }
        while ( v12 == 1 ); /*0x10105f78c*/
        if ( !v12 ) /*0x10105f793*/
          return v5; /*0x10105f793*/
LABEL_14:
        if ( !i ) /*0x10105f7ac*/
          break; /*0x10105f7ac*/
        v3 = *(_QWORD *)(v14 + 8 * v7 + 632); /*0x10105f7b6*/
      }
    }
  }
  return 0; /*0x10105f7c9*/
}