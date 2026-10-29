// win 1.2.7 | module src/core/codex_config.rs | ea 0x140ec7390 | name sub_140EC7390
// win 1.2.7 | module src/core/codex_config.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_QWORD *__fastcall sub_140EC7390(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(unsigned __int64); // rax
  char v8; // al
  unsigned __int64 v10; // [rsp+28h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-30h] BYREF
  __int64 v12; // [rsp+40h] [rbp-20h]
  unsigned __int64 v13; // [rsp+48h] [rbp-18h]
  char v14; // [rsp+57h] [rbp-9h]
  __int64 v15; // [rsp+58h] [rbp-8h]

  v15 = -2;
  sub_14169D1D0(&v11, a2, a3);
  if ( (_QWORD)v11 == -1 )
  {
    v5 = *((_QWORD *)&v11 + 1);
    v6 = BYTE8(v11) & 3;
    switch ( BYTE8(v11) & 3 )
    {
      case 0:
        if ( *(_BYTE *)(*((_QWORD *)&v11 + 1) + 16LL) )
          goto LABEL_9;
        goto LABEL_11;
      case 1:
        if ( !*(_BYTE *)(*((_QWORD *)&v11 + 1) + 31LL) )
          goto LABEL_11;
        goto LABEL_9;
      case 2:
        v13 = *((_QWORD *)&v11 + 1);
        v14 = 1;
        v7 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v4, *((_QWORD *)&v11 + 1)) + 8);
        v14 = 1;
        v8 = v7(HIDWORD(v13));
        v5 = v13;
        if ( !v8 )
          goto LABEL_11;
        goto LABEL_9;
      case 3:
        if ( BYTE12(v11) )
        {
LABEL_9:
          *a1 = 2;
          a1[1] = v5;
        }
        else
        {
LABEL_11:
          v13 = v5;
          a1[1] = 0;
          a1[2] = 1;
          a1[3] = 0;
          *a1 = -1;
          if ( (unsigned int)(v6 - 2) >= 2 && v6 )
          {
            v10 = v13 - 1;
            v14 = 0;
            sub_1416BCB00(&v10);
          }
        }
        break;
    }
  }
  else
  {
    a1[3] = v12;
    *(_OWORD *)(a1 + 1) = v11;
    *a1 = -1;
  }
  return a1;
}
