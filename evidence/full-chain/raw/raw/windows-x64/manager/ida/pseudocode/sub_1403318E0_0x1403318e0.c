// module: codexmate_lib/core/relay/manager
// addr: 0x1403318e0
// name: sub_1403318E0
_OWORD *__fastcall sub_1403318E0(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  unsigned __int64 v3; // r8
  __int64 v4; // rbx
  __int128 *v5; // r13
  unsigned __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  unsigned __int64 v9; // r12
  __int128 *v10; // rsi
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rbx
  char v13; // r15
  __int128 v14; // xmm6
  __int64 v15; // rax
  _OWORD *result; // rax
  __int128 v18; // [rsp+20h] [rbp-60h]
  __int64 v19; // [rsp+30h] [rbp-50h]
  __int128 v20; // [rsp+40h] [rbp-40h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  __int128 v22; // [rsp+58h] [rbp-28h] BYREF
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int128 v24; // [rsp+70h] [rbp-10h]
  unsigned __int64 v25; // [rsp+80h] [rbp+0h]
  __int64 v26; // [rsp+88h] [rbp+8h]
  unsigned __int64 v27; // [rsp+90h] [rbp+10h]
  __int128 v28; // [rsp+98h] [rbp+18h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+28h]
  __int64 v30; // [rsp+B0h] [rbp+30h]
  unsigned __int64 v31; // [rsp+B8h] [rbp+38h]
  __int64 v32; // [rsp+C0h] [rbp+40h]
  __int64 v33; // [rsp+C8h] [rbp+48h]

  v33 = -2;
  v3 = *(_QWORD *)(a2 + 16);
  v4 = 96 * v3;
  if ( v3 > 0x155555555555555LL )
  {
    v2 = 0;
    goto LABEL_3;
  }
  v5 = *(__int128 **)(a2 + 8);
  v26 = a1;
  if ( v4 )
  {
    v6 = v3;
    nullsub_1(a1);
    v2 = 8;
    v7 = sub_140001650(v4, 8);
    if ( !v7 )
LABEL_3:
      sub_1416C2D4B(v2, v4);
    v8 = v7;
    v3 = v6;
    v9 = v6;
  }
  else
  {
    v8 = 8;
    v9 = 0;
  }
  *(_QWORD *)&v24 = v9;
  *((_QWORD *)&v24 + 1) = v8;
  v27 = v3;
  v10 = &v5[6 * v3];
  v11 = 0;
  v12 = v9 - 1;
  if ( v9 )
  {
    do
    {
      if ( v5 == v10 )
        break;
      v31 = v11;
      if ( v11 >= v9 )
        sub_1416C30E3(v31, v9, &off_1417440C0);
      sub_14149C500(&v22, v5 + 1);
      v13 = *((_BYTE *)v5 + 88);
      v14 = *v5;
      if ( *((_QWORD *)v5 + 8) == -1 )
      {
        v32 = -1;
      }
      else
      {
        sub_14149C500(&v28, v5 + 4);
        v30 = *((_QWORD *)&v28 + 1);
        v32 = v28;
        v2 = v29;
      }
      sub_14149C500(&v28, (char *)v5 + 40);
      v5 += 6;
      v19 = v23;
      v18 = v22;
      v21 = v29;
      v20 = v28;
      v11 = v31 + 1;
      v15 = 96 * v31;
      *(_OWORD *)(v8 + v15) = v14;
      *(_OWORD *)(v8 + v15 + 16) = v18;
      *(_QWORD *)(v8 + v15 + 32) = v19;
      *(_OWORD *)(v8 + v15 + 40) = v20;
      *(_QWORD *)(v8 + v15 + 56) = v21;
      *(_QWORD *)(v8 + v15 + 64) = v32;
      *(_QWORD *)(v8 + v15 + 72) = v30;
      *(_QWORD *)(v8 + v15 + 80) = v2;
      *(_BYTE *)(v8 + v15 + 88) = v13;
    }
    while ( v12-- != 0 );
  }
  v25 = v27;
  result = (_OWORD *)v26;
  *(_QWORD *)(v26 + 16) = v27;
  *result = v24;
  return result;
}