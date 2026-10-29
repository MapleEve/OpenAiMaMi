// win 1.2.7 latest-exe | module src/core/relay/native_catalog.rs | ea 0x1401f4ee0 | successor of pre-update 0x140db7580 | session <审计会话>
// match evidence: {"body_sim": 0.835, "str_ov": 0, "anchor": 0.43, "conf": 1.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_1401F4EE0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  _BYTE *v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rax
  unsigned __int8 v10; // cl
  __int128 v11; // xmm0
  __int64 v13; // [rsp+28h] [rbp-58h] BYREF
  __int64 v14; // [rsp+30h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-48h]
  _QWORD v16[2]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v17[2]; // [rsp+58h] [rbp-28h] BYREF
  _QWORD v18[2]; // [rsp+68h] [rbp-18h] BYREF
  __int128 v19; // [rsp+78h] [rbp-8h] BYREF
  __int128 v20; // [rsp+88h] [rbp+8h]
  __int64 v21; // [rsp+98h] [rbp+18h]
  __int64 v22; // [rsp+A0h] [rbp+20h]
  char v23; // [rsp+AFh] [rbp+2Fh] BYREF
  __int64 v24; // [rsp+B0h] [rbp+30h]
  __int64 v25; // [rsp+B8h] [rbp+38h]

  v25 = -2;
  v18[0] = a3;
  v18[1] = a4;
  v5 = 1;
  if ( !a2 )
  {
LABEL_7:
    v6 = &unk_141A09081;
    goto LABEL_9;
  }
  v6 = *(_BYTE **)(a2 + 8);
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
  v17[0] = v6;
  v17[1] = v5;
  *(_QWORD *)&v19 = v17;
  *((_QWORD *)&v19 + 1) = sub_140191200;
  *(_QWORD *)&v20 = v18;
  *((_QWORD *)&v20 + 1) = sub_140191200;
  sub_1416DAFA0(&v13, &unk_141A09082, &v19);
  v24 = v13;
  v22 = v14;
  sub_1401BE550(&v13, v14, v15);
  if ( v24 )
    sub_140001660(v22, v24, 1);
  v16[0] = &v13;
  v16[1] = sub_140759D50;
  sub_1416DAFA0(&v19, &unk_141A09087, v16);
  v22 = *((_QWORD *)&v19 + 1);
  v24 = v19;
  if ( (_QWORD)v20 )
  {
    v9 = 0;
    do
    {
      v10 = *(_BYTE *)(*((_QWORD *)&v19 + 1) + v9);
      if ( v10 > 0x1Fu )
      {
        if ( v10 == 127 )
          goto LABEL_17;
      }
      else if ( v10 != 9 )
      {
LABEL_17:
        sub_14196B5F0(
          (unsigned int)aHexDigestIsAVa,
          34,
          (unsigned int)&v23,
          (unsigned int)&unk_141A07F20,
          (__int64)&off_141A090B8);
      }
      ++v9;
    }
    while ( (_QWORD)v20 != v9 );
  }
  sub_141682400(&v19, *((_QWORD *)&v19 + 1));
  LOBYTE(v21) = 0;
  v11 = v19;
  *(_OWORD *)(a1 + 16) = v20;
  *(_OWORD *)a1 = v11;
  *(_QWORD *)(a1 + 32) = v21;
  if ( v24 )
    sub_140001660(v22, v24, 1);
  return a1;
}
