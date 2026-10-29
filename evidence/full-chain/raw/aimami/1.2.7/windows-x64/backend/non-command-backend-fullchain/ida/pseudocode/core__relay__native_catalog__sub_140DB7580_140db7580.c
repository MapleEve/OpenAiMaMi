// win 1.2.7 | module src/core/relay/native_catalog.rs | ea 0x140db7580 | name sub_140DB7580
// win 1.2.7 | module src/core/relay/native_catalog.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140DB7580(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  const char *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 i; // rax
  unsigned __int8 v10; // cl
  __int128 v11; // xmm0
  _BYTE v13[32]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v14[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v15[2]; // [rsp+58h] [rbp-28h] BYREF
  __int128 v16; // [rsp+68h] [rbp-18h] BYREF
  __int128 v17; // [rsp+78h] [rbp-8h]
  __int64 v18; // [rsp+88h] [rbp+8h]
  __int64 v19; // [rsp+90h] [rbp+10h] BYREF
  __int64 v20; // [rsp+98h] [rbp+18h]
  __int64 v21; // [rsp+A0h] [rbp+20h]
  __int64 v22; // [rsp+A8h] [rbp+28h]
  char v23; // [rsp+B7h] [rbp+37h] BYREF
  __int64 v24; // [rsp+B8h] [rbp+38h]

  v24 = -2;
  v15[0] = a3;
  v15[1] = a4;
  v5 = 1;
  if ( !a2 )
  {
LABEL_7:
    v6 = asc_141A4DFCD;
    goto LABEL_9;
  }
  v6 = *(const char **)(a2 + 8);
  v7 = *(_QWORD *)(a2 + 16);
  if ( v7 )
  {
    v8 = 0;
    while ( (unsigned __int8)(v6[v8] - 32) < 0x5Fu || v6[v8] == 9 )
    {
      if ( v7 == ++v8 )
      {
        v5 = v7;
        goto LABEL_9;
      }
    }
    goto LABEL_7;
  }
  v5 = 0;
LABEL_9:
  v14[0] = v6;
  v14[1] = v5;
  *(_QWORD *)&v16 = v14;
  *((_QWORD *)&v16 + 1) = sub_140186EE0;
  *(_QWORD *)&v17 = v15;
  *((_QWORD *)&v17 + 1) = sub_140186EE0;
  sub_1416ABFD0(&v19, &unk_141A4DFCE, &v16);
  v22 = v20;
  sub_140D26050(v13, v20, v21);
  if ( v19 )
    sub_140001660(v22, v19, 1);
  *(_QWORD *)&v16 = v13;
  *((_QWORD *)&v16 + 1) = sub_140364610;
  sub_1416ABFD0(&v19, &unk_141A4DFD3, &v16);
  v22 = v20;
  if ( v21 )
  {
    for ( i = 0; i != v21; ++i )
    {
      v10 = *(_BYTE *)(v20 + i);
      if ( v10 > 0x1Fu )
      {
        if ( v10 == 127 )
          goto LABEL_17;
      }
      else if ( v10 != 9 )
      {
LABEL_17:
        sub_141939040(
          (unsigned int)aHexDigestIsAVa,
          34,
          (unsigned int)&v23,
          (unsigned int)&unk_141A49B08,
          (__int64)&off_141A4E008);
      }
    }
  }
  sub_141653430(&v16);
  LOBYTE(v18) = 0;
  v11 = v16;
  *(_OWORD *)(a1 + 16) = v17;
  *(_OWORD *)a1 = v11;
  *(_QWORD *)(a1 + 32) = v18;
  if ( v19 )
    sub_140001660(v22, v19, 1);
  return a1;
}
