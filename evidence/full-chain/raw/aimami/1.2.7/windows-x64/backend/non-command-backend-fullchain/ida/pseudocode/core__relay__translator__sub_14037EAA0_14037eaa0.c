// win 1.2.7 | module src/core/relay/translator.rs | ea 0x14037eaa0 | name sub_14037EAA0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14037EAA0(_QWORD *a1, __int128 *a2)
{
  unsigned __int64 v2; // r8
  __int64 v3; // r10
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int128 v6; // xmm0
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  _OWORD *i; // rbx
  char v10; // cl
  __int64 v11; // rax
  __int64 result; // rax
  _QWORD *v13; // rsi
  _BYTE v14[31]; // [rsp+30h] [rbp-50h]
  _OWORD v15[4]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v16; // [rsp+90h] [rbp+10h]
  _QWORD v17[2]; // [rsp+98h] [rbp+18h] BYREF
  __int64 v18; // [rsp+A8h] [rbp+28h]
  _QWORD *v19; // [rsp+B0h] [rbp+30h]
  __int128 *v20; // [rsp+B8h] [rbp+38h]
  __int64 v21; // [rsp+C0h] [rbp+40h]
  char v22; // [rsp+CFh] [rbp+4Fh]
  __int64 v23; // [rsp+D0h] [rbp+50h]

  v23 = -2;
  v2 = *((_QWORD *)a2 + 8);
  v3 = a1[2];
  v4 = *a1 - v3;
  v20 = a2;
  if ( v2 > v4 )
  {
    v22 = 1;
    v13 = a1;
    sub_14190D590((_DWORD)a1, v3, v2, 8, 32);
    a1 = v13;
    v3 = v13[2];
    a2 = v20;
  }
  v19 = a1;
  v5 = a1[1];
  v16 = *((_QWORD *)a2 + 8);
  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  v15[3] = a2[3];
  v15[2] = v8;
  v15[1] = v7;
  v15[0] = v6;
  v21 = v3;
  for ( i = (_OWORD *)(32 * v3 + v5 + 1); ; i += 2 )
  {
    sub_140E84F20(v17, v15);
    if ( !v17[0] )
      break;
    v10 = *(_BYTE *)(v17[0] + 32 * v18);
    if ( v10 == -1 )
      break;
    v11 = 32 * v18 + v17[0];
    *(_OWORD *)&v14[15] = *(_OWORD *)(v11 + 16);
    *(_OWORD *)v14 = *(_OWORD *)(v11 + 1);
    *((_BYTE *)i - 1) = v10;
    *i = *(_OWORD *)v14;
    *(_OWORD *)((char *)i + 15) = *(_OWORD *)&v14[15];
    ++v21;
  }
  v19[2] = v21;
  v22 = 0;
  sub_140E84F20(v17, v15);
  for ( result = v17[0]; v17[0]; result = v17[0] )
  {
    sub_140DF44E0(result + 32 * v18);
    v22 = 0;
    sub_140E84F20(v17, v15);
  }
  return result;
}
