// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x140c20d70 | name sub_140C20D70
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_140C20D70(__int64 a1)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // r15
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v12[3]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v14; // [rsp+48h] [rbp-8h]
  __int64 v15; // [rsp+50h] [rbp+0h]

  v15 = -2;
  v13 = a1;
  v14 = 0;
  v2 = a1 + 32;
  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        *(_BYTE *)(a1 + 24) = 1;
        v5 = sub_141680BB0(&v13);
        v7 = sub_1416A17C0(v2, v5, v6);
        v3 = v8;
        v12[1] = v7;
        v12[2] = v8;
        *(_BYTE *)(a1 + 24) = 0;
        if ( v7 == 1 )
          break;
        if ( !v8 )
        {
          v3 = (unsigned __int64)&off_141A3CAB8;
          goto LABEL_19;
        }
        v14 += v8;
        if ( v14 >= *(_QWORD *)(v13 + 16) )
          goto LABEL_2;
      }
      switch ( v8 & 3 )
      {
        case 0uLL:
          if ( *(_BYTE *)(v8 + 16) == 35 )
            goto LABEL_6;
          break;
        case 1uLL:
          if ( *(_BYTE *)(v8 + 31) == 35 )
          {
            v12[0] = v8 - 1;
            sub_1416BCB00(v12);
            goto LABEL_6;
          }
          break;
        case 2uLL:
          v10 = sub_1416B3F10(v9, v8);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v10 + 16))(HIDWORD(v3)) )
            goto LABEL_6;
          break;
        case 3uLL:
          v4 = HIDWORD(v8);
          if ( HIDWORD(v8) >= 0x2B )
            LOBYTE(v4) = -1;
          if ( (_BYTE)v4 == 35 )
          {
LABEL_6:
            if ( v14 >= *(_QWORD *)(v13 + 16) )
              goto LABEL_2;
            continue;
          }
          break;
      }
      break;
    }
  }
  else
  {
LABEL_2:
    v3 = 0;
  }
LABEL_19:
  sub_1416A13A0(&v13);
  return v3;
}
