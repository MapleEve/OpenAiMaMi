// module: codexmate_lib/platform/process
// addr: 0x1403fd1c0
// name: sub_1403FD1C0
// win 1.2.1 | module src/platform/process.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1403FD1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  __int128 *v8; // r15
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 result; // rax
  __int128 v12; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h]
  __int128 v14; // [rsp+40h] [rbp-40h] BYREF
  __int128 *v15; // [rsp+50h] [rbp-30h]
  __int128 v16; // [rsp+60h] [rbp-20h] BYREF
  __int128 *v17; // [rsp+70h] [rbp-10h]
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // [rsp+78h] [rbp-8h]
  __int128 v19; // [rsp+80h] [rbp+0h] BYREF
  __int128 *v20; // [rsp+90h] [rbp+10h]
  __int128 v21; // [rsp+A0h] [rbp+20h] BYREF
  __int128 *v22; // [rsp+B0h] [rbp+30h]
  __int64 v23; // [rsp+B8h] [rbp+38h]

  v23 = -2;
  sub_140328F40((unsigned __int64 *)&v21, a2, a2 + 32 * a3);
  v7 = *((_QWORD *)&v21 + 1);
  v8 = v22;
  sub_140440300((unsigned int)&v16, DWORD2(v21), (_DWORD)v22, (unsigned int)&aCodeSwitchRoll[35], 3);
  v15 = v17;
  v14 = v16;
  if ( v8 )
  {
    v9 = (_QWORD *)(v7 + 8);
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
        sub_140001660(*v9, v10, 1);
      v9 += 3;
      v8 = (__int128 *)((char *)v8 - 1);
    }
    while ( v8 );
  }
  if ( (_QWORD)v21 )
    sub_140001660(v7, 24 * v21, 8);
  if ( a4 )
  {
    *(_QWORD *)&v19 = a4;
    *((_QWORD *)&v19 + 1) = a5;
    *(_QWORD *)&v21 = &v19;
    *((_QWORD *)&v21 + 1) = sub_14041F680;
    sub_14149C0F0(&v16, &unk_14174D6B6, &v21);
    v19 = v16;
    v20 = v17;
    if ( v15 )
    {
LABEL_10:
      *(_QWORD *)&v21 = &v14;
      *((_QWORD *)&v21 + 1) = sub_1400015F0;
      sub_14149C0F0(&v16, &unk_1417524BB, &v21);
      v21 = v16;
      v22 = v17;
      goto LABEL_13;
    }
  }
  else
  {
    *(_QWORD *)&v19 = 0;
    *((_QWORD *)&v19 + 1) = 1;
    v20 = nullptr;
    if ( v15 )
      goto LABEL_10;
  }
  *(_QWORD *)&v21 = 0;
  *((_QWORD *)&v21 + 1) = 1;
  v22 = nullptr;
LABEL_13:
  *(_QWORD *)&v16 = &v21;
  *((_QWORD *)&v16 + 1) = sub_1400015F0;
  v17 = &v19;
  v18 = sub_1400015F0;
  sub_14149C0F0(&v12, &unk_1417524C1, &v16);
  if ( (_QWORD)v21 )
    sub_140001660(*((_QWORD *)&v21 + 1), v21, 1);
  result = v13;
  *(_QWORD *)(a1 + 24) = v13;
  *(_OWORD *)(a1 + 8) = v12;
  *(_QWORD *)a1 = 10;
  if ( (_QWORD)v19 )
    result = sub_140001660(*((_QWORD *)&v19 + 1), v19, 1);
  if ( (_QWORD)v14 )
    return sub_140001660(*((_QWORD *)&v14 + 1), v14, 1);
  return result;
}