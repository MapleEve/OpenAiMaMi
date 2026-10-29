// win 1.2.7 | module src/core/repository.rs | ea 0x1401c5130 | name sub_1401C5130
// win 1.2.7 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1401C5130(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 result; // rax
  __int128 v10; // xmm0
  unsigned __int64 v11; // rbx
  __int64 v12; // r14
  __int64 (__fastcall *v13)(unsigned __int64); // rax
  unsigned __int64 v14; // rax
  __int128 v15; // [rsp+20h] [rbp-60h]
  unsigned __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h] BYREF
  __int128 v18; // [rsp+50h] [rbp-30h]
  __int64 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]
  char v21; // [rsp+77h] [rbp-9h]
  __int64 v22; // [rsp+78h] [rbp-8h]

  v22 = -2;
  v4 = *(_QWORD *)(a2 + 8);
  v20 = a2;
  v5 = *(_QWORD *)(a2 + 16);
  v19 = v4;
  sub_14169D480(&v17, v4, v5);
  v8 = v17;
  if ( v17 == -1 )
  {
    v11 = v18;
    v12 = v18 & 3;
    switch ( v18 & 3 )
    {
      case 0LL:
        if ( *(_BYTE *)(v18 + 16) )
          goto LABEL_11;
        goto LABEL_14;
      case 1LL:
        if ( !*(_BYTE *)(v18 + 31) )
          goto LABEL_14;
        goto LABEL_11;
      case 2LL:
        v21 = 1;
        v13 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v7, v6) + 8);
        v21 = 1;
        LOBYTE(v14) = v13(HIDWORD(v11));
        goto LABEL_10;
      case 3LL:
        v14 = DWORD1(v18);
LABEL_10:
        if ( !(_BYTE)v14 )
        {
LABEL_14:
          if ( (unsigned int)(v12 - 2) >= 2 )
          {
            if ( v12 )
            {
              v16 = v11 - 1;
              v21 = 0;
              sub_1416BCB00(&v16);
            }
          }
          goto LABEL_3;
        }
LABEL_11:
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v11;
        result = v20;
        if ( *(_QWORD *)v20 )
          result = sub_140001660(v19, *(_QWORD *)v20, 1);
        break;
    }
  }
  else
  {
    v15 = v18;
LABEL_3:
    result = v20;
    v10 = *(_OWORD *)v20;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)(v20 + 16);
    *(_OWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 40) = v8;
    *(_OWORD *)(a1 + 48) = v15;
    *(_QWORD *)a1 = -1;
  }
  return result;
}
