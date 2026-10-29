// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | ea 0x140bbdd60 | name sub_140BBDD60
// win 1.2.7 | module src/core/relay/codex_thread_visibility.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BBDD60(_QWORD *a1, __int64 a2)
{
  unsigned __int64 *v3; // r12
  __int64 v4; // r13
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  unsigned __int64 v8; // r15
  unsigned __int64 v9; // rax
  unsigned __int8 (__fastcall *v10)(unsigned __int64); // rax
  unsigned __int64 *v11; // rbx
  __int64 v12; // r12
  _BYTE v14[8200]; // [rsp+28h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+2030h] [rbp+1FB0h] BYREF
  _QWORD v16[2]; // [rsp+2038h] [rbp+1FB8h] BYREF
  __int64 v17; // [rsp+2048h] [rbp+1FC8h]
  char v18; // [rsp+2050h] [rbp+1FD0h]
  __int64 v19; // [rsp+2058h] [rbp+1FD8h]
  unsigned __int64 v20; // [rsp+2060h] [rbp+1FE0h]
  char v21; // [rsp+206Fh] [rbp+1FEFh]
  __int64 v22; // [rsp+2070h] [rbp+1FF0h]

  v22 = -2;
  v19 = a2;
  v16[0] = v14;
  v16[1] = 0x2000;
  v17 = 0;
  v18 = 0;
  v3 = &v15;
  v4 = 0;
  while ( 1 )
  {
    v5 = sub_140286720(a1, (__int64)v16);
    v20 = v5;
    if ( v5 )
    {
      v8 = v5;
      do
      {
        switch ( v8 & 3 )
        {
          case 0uLL:
            if ( *(_BYTE *)(v8 + 16) != 35 )
              return 1;
            break;
          case 1uLL:
            if ( *(_BYTE *)(v8 + 31) != 35 )
              return 1;
            v15 = v8 - 1;
            v14[0x2000] = 3;
            v21 = 0;
            sub_1416BCB00(v3);
            break;
          case 2uLL:
            v21 = 1;
            v10 = *(unsigned __int8 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v7, v6) + 16);
            v21 = 1;
            if ( !v10(HIDWORD(v8)) )
              return 1;
            break;
          case 3uLL:
            v9 = HIDWORD(v8);
            if ( HIDWORD(v8) >= 0x2B )
              LOBYTE(v9) = -1;
            if ( (_BYTE)v9 != 35 )
              return 1;
            break;
        }
        v8 = sub_140286720(a1, (__int64)v16);
        v20 = v8;
      }
      while ( v8 );
    }
    v11 = v3;
    v12 = v17;
    if ( !v17 )
      return 0;
    if ( sub_140C9FF80(v19, v16[0], v17) )
      break;
    v4 += v12;
    v17 = 0;
    v3 = v11;
  }
  return 1;
}
