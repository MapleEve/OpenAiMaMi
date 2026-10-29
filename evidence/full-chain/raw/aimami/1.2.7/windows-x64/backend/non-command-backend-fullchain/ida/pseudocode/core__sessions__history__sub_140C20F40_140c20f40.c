// win 1.2.7 | module src/core/sessions/history.rs | ea 0x140c20f40 | name sub_140C20F40
// win 1.2.7 | module src/core/sessions/history.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
unsigned __int64 __fastcall sub_140C20F40(__int64 a1)
{
  unsigned __int64 v2; // r14
  unsigned __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  _QWORD v11[3]; // [rsp+28h] [rbp-28h] BYREF
  __int64 v12; // [rsp+40h] [rbp-10h] BYREF
  unsigned __int64 v13; // [rsp+48h] [rbp-8h]
  __int64 v14; // [rsp+50h] [rbp+0h]

  v14 = -2;
  v12 = a1;
  v13 = 0;
  if ( *(_QWORD *)(a1 + 16) )
  {
    while ( 2 )
    {
      while ( 1 )
      {
        *(_BYTE *)(a1 + 24) = 1;
        v4 = sub_141680BB0(&v12);
        v6 = sub_1416A17C0(*(_QWORD *)(a1 + 32), v4, v5);
        v2 = v7;
        v11[1] = v6;
        v11[2] = v7;
        *(_BYTE *)(a1 + 24) = 0;
        if ( v6 == 1 )
          break;
        if ( !v7 )
        {
          v2 = (unsigned __int64)&off_141A3CAB8;
          goto LABEL_19;
        }
        v13 += v7;
        if ( v13 >= *(_QWORD *)(v12 + 16) )
          goto LABEL_2;
      }
      switch ( v7 & 3 )
      {
        case 0uLL:
          if ( *(_BYTE *)(v7 + 16) == 35 )
            goto LABEL_6;
          break;
        case 1uLL:
          if ( *(_BYTE *)(v7 + 31) == 35 )
          {
            v11[0] = v7 - 1;
            sub_1416BCB00(v11);
            goto LABEL_6;
          }
          break;
        case 2uLL:
          v9 = sub_1416B3F10(v8, v7);
          if ( (*(unsigned __int8 (__fastcall **)(unsigned __int64))(v9 + 16))(HIDWORD(v2)) )
            goto LABEL_6;
          break;
        case 3uLL:
          v3 = HIDWORD(v7);
          if ( HIDWORD(v7) >= 0x2B )
            LOBYTE(v3) = -1;
          if ( (_BYTE)v3 == 35 )
          {
LABEL_6:
            if ( v13 >= *(_QWORD *)(v12 + 16) )
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
    v2 = 0;
  }
LABEL_19:
  sub_1416A13A0(&v12);
  return v2;
}
