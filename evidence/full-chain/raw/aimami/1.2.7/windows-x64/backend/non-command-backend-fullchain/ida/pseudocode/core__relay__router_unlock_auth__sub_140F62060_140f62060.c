// win 1.2.7 | module src/core/relay/router_unlock_auth.rs | ea 0x140f62060 | name sub_140F62060
// win 1.2.7 | module src/core/relay/router_unlock_auth.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140F62060(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 (__fastcall *v10)(unsigned __int64); // rax
  char v11; // al
  __int128 v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h]
  _QWORD v14[2]; // [rsp+40h] [rbp-40h] BYREF
  _QWORD *v15; // [rsp+50h] [rbp-30h] BYREF
  _QWORD v16[3]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v17; // [rsp+70h] [rbp-10h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp-8h]
  char v19; // [rsp+87h] [rbp+7h]
  __int64 v20; // [rsp+88h] [rbp+8h]

  v20 = -2;
  v14[0] = a4;
  v14[1] = a5;
  result = sub_141695140(a2, a3);
  if ( result )
  {
    v8 = result;
    v9 = result & 3;
    v18 = result;
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
        v19 = 1;
        v10 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v7, result) + 8);
        v19 = 1;
        v11 = v10(HIDWORD(v18));
        v8 = v18;
        if ( !v11 )
          goto LABEL_13;
        goto LABEL_9;
      case 3LL:
        if ( BYTE4(result) )
        {
LABEL_9:
          v17 = v8;
          v15 = v14;
          v16[0] = sub_140186EE0;
          v16[1] = &v17;
          v16[2] = sub_1416BB0B0;
          sub_1416ABFD0(&v12, &unk_141A629D9, &v15);
          *(_QWORD *)(a1 + 24) = v13;
          *(_OWORD *)(a1 + 8) = v12;
          *(_QWORD *)a1 = 10;
          result = v17;
          if ( (unsigned int)(v17 & 3) - 2 >= 2 && (v17 & 3) != 0 )
          {
            v16[0] = v17 - 1;
            LOBYTE(v15) = 3;
            v19 = 0;
            result = sub_1416BCB00(v16);
          }
        }
        else
        {
LABEL_13:
          *(_QWORD *)a1 = -1;
          result = (unsigned int)(v9 - 2);
          if ( (unsigned int)result >= 2 )
          {
            if ( v9 )
            {
              v16[0] = v18 - 1;
              v19 = 0;
              result = sub_1416BCB00(v16);
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
