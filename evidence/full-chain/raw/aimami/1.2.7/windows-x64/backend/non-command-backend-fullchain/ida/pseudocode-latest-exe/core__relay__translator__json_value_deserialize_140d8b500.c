_OWORD *__fastcall sub_140D8B500(_OWORD *a1, __int128 *a2)
{
  _OWORD *v2; // rsi
  __int128 v3; // xmm0
  __int128 v4; // xmm1
  __int128 v5; // xmm0
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned __int64 v8; // r9
  __int64 v9; // r9
  __int64 v10; // rax
  __int64 v12[3]; // [rsp+28h] [rbp-58h] BYREF
  _OWORD v13[2]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v14; // [rsp+68h] [rbp-18h] BYREF
  __int64 v15; // [rsp+70h] [rbp-10h]
  __int64 v16; // [rsp+78h] [rbp-8h]
  __int128 v17; // [rsp+80h] [rbp+0h]
  __int128 v18; // [rsp+90h] [rbp+10h]
  __int128 v19; // [rsp+A0h] [rbp+20h]
  char v20; // [rsp+B0h] [rbp+30h]
  _OWORD *v21; // [rsp+B8h] [rbp+38h]
  __int64 v22; // [rsp+C0h] [rbp+40h]

  v22 = -2;
  v2 = a1;
  v3 = *a2;
  v4 = a2[1];
  v19 = a2[2];
  v18 = v4;
  v17 = v3;
  v14 = 0;
  v15 = 1;
  v16 = 0;
  v20 = 0x80;
  sub_140DE53D0(a1, &v14);
  if ( *(_BYTE *)v2 != 0xFF )
  {
    v5 = *v2;
    v13[1] = v2[1];
    v13[0] = v5;
    if ( (unsigned __int64)v18 < *((_QWORD *)&v17 + 1) )
    {
      v6 = v18 + 1;
      v7 = 0x100002600LL;
      while ( 1 )
      {
        v8 = *(unsigned __int8 *)(v17 + v6 - 1);
        if ( v8 > 0x20 || !_bittest64(&v7, v8) )
          break;
        *(_QWORD *)&v18 = v6;
        v9 = v6 - *((_QWORD *)&v17 + 1) + 1;
        ++v6;
        if ( v9 == 1 )
          goto LABEL_9;
      }
      v21 = v2;
      v12[0] = 22;
      v10 = sub_141942360(&v14, v12, 0x100002600LL);
      v2 = v21;
      *((_QWORD *)v21 + 1) = v10;
      *(_BYTE *)v2 = -1;
      sub_140032FF0(v13);
    }
  }
LABEL_9:
  if ( v14 )
    sub_140001660(v15, v14, 1);
  return v2;
}
