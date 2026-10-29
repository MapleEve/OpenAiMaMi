// win 1.2.7 | module src/core/relay/legacy_virtual_auth.rs | ea 0x140f6d270 | name sub_140F6D270
// win 1.2.7 | module src/core/relay/legacy_virtual_auth.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F6D270(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(unsigned __int64); // rax
  char v10; // al
  __int128 v11; // [rsp+28h] [rbp-58h] BYREF
  __int64 v12; // [rsp+38h] [rbp-48h]
  _QWORD v13[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v14; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v15[3]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v17; // [rsp+78h] [rbp-8h]
  char v18; // [rsp+87h] [rbp+7h]
  __int64 v19; // [rsp+88h] [rbp+8h]

  v19 = -2;
  v13[0] = a4;
  v13[1] = 26;
  result = sub_141695140(a2, a3);
  if ( result )
  {
    v7 = result;
    v8 = result & 3;
    v17 = result;
    switch ( result & 3 )
    {
      case 0LL:
        if ( *(_BYTE *)(result + 16) )
          goto LABEL_9;
        goto LABEL_13;
      case 1LL:
        if ( !*(_BYTE *)(result + 31) )
          goto LABEL_13;
        goto LABEL_9;
      case 2LL:
        v18 = 1;
        v9 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v6, result) + 8);
        v18 = 1;
        v10 = v9(HIDWORD(v17));
        v7 = v17;
        if ( !v10 )
          goto LABEL_13;
        goto LABEL_9;
      case 3LL:
        if ( BYTE4(result) )
        {
LABEL_9:
          v16 = v7;
          v14 = v13;
          v15[0] = sub_140186EE0;
          v15[1] = &v16;
          v15[2] = sub_1416BB0B0;
          sub_1416ABFD0(&v11, &unk_141A629D9, &v14);
          *(_QWORD *)(a1 + 24) = v12;
          *(_OWORD *)(a1 + 8) = v11;
          *(_QWORD *)a1 = 10;
          result = v16;
          if ( (unsigned int)(v16 & 3) - 2 >= 2 && (v16 & 3) != 0 )
          {
            v15[0] = v16 - 1;
            LOBYTE(v14) = 3;
            v18 = 0;
            result = sub_1416BCB00(v15);
          }
        }
        else
        {
LABEL_13:
          *(_QWORD *)a1 = -1;
          result = (unsigned int)(v8 - 2);
          if ( (unsigned int)result >= 2 )
          {
            if ( v8 )
            {
              v15[0] = v17 - 1;
              v18 = 0;
              result = sub_1416BCB00(v15);
            }
          }
        }
        break;
    }
  }
  else
  {
    *(_QWORD *)a1 = -1;
  }
  return result;
}
