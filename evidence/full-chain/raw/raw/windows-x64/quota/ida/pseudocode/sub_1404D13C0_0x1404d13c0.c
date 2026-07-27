// module: codexmate_lib/core/relay/quota
// addr: 0x1404d13c0
// name: sub_1404D13C0
// win 1.2.1 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1404D13C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r12
  __int64 v11; // rax
  __int64 v12; // r15
  __int64 v13; // rdi
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 (__fastcall *v16)(); // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+38h] [rbp-48h]
  __int64 v18; // [rsp+40h] [rbp-40h]
  __int64 v19; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall **v20)(); // [rsp+50h] [rbp-30h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+58h] [rbp-28h]
  __int128 *v22; // [rsp+60h] [rbp-20h]
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // [rsp+68h] [rbp-18h]
  __int128 v24; // [rsp+70h] [rbp-10h] BYREF
  __int64 v25; // [rsp+80h] [rbp+0h]
  __int64 v26; // [rsp+88h] [rbp+8h]

  v26 = -2;
  sub_1414AA750(&v20, a2, a3);
  if ( (_BYTE)v20 == 1 )
  {
    if ( a3 < 0 )
    {
      v10 = 0;
      goto LABEL_4;
    }
    if ( a3 )
    {
      nullsub_1(v9);
      v10 = 1;
      v11 = sub_140001650(a3, 1);
      if ( !v11 )
LABEL_4:
        sub_1416C2D4B(v10, a3);
      v12 = v11;
      sub_141684120(v11, a2, a3);
    }
    else
    {
      v12 = 1;
    }
    *(_QWORD *)&v24 = a3;
    *((_QWORD *)&v24 + 1) = v12;
    v25 = a3;
  }
  else
  {
    v16 = v21;
    v20 = &v16;
    v21 = sub_1414AB4C0;
    sub_14149C0F0(&v24, &unk_1417580F0, &v20);
  }
  sub_14149AF60(&v16, a4, a5);
  v13 = v17;
  if ( !v18 )
  {
    *(_QWORD *)(a1 + 16) = v25;
    *(_OWORD *)a1 = v24;
    goto LABEL_21;
  }
  v19 = v17;
  if ( v18 != 3 )
    goto LABEL_16;
  if ( *(_WORD *)v17 ^ 0x4E43 | *(unsigned __int8 *)(v17 + 2) ^ 0x59
    && *(_WORD *)v17 ^ 0x4D52 | *(unsigned __int8 *)(v17 + 2) ^ 0x42 )
  {
    if ( *(_WORD *)v17 ^ 0x5355 | *(unsigned __int8 *)(v17 + 2) ^ 0x44 )
    {
LABEL_16:
      v15[0] = v17;
      v15[1] = v18;
      v20 = (__int64 (__fastcall **)())v15;
      v21 = sub_14041F680;
      v22 = &v24;
      v23 = sub_1400015F0;
      sub_14149C0F0(a1, &unk_14175D4B8, &v20);
      goto LABEL_19;
    }
    v20 = (__int64 (__fastcall **)())&v24;
    v21 = (__int64 (__fastcall *)())sub_1400015F0;
    sub_14149C0F0(a1, &unk_14175D4BD, &v20);
  }
  else
  {
    v20 = (__int64 (__fastcall **)())&v24;
    v21 = (__int64 (__fastcall *)())sub_1400015F0;
    sub_14149C0F0(a1, &unk_14175D4C1, &v20);
  }
LABEL_19:
  v13 = v19;
  if ( (_QWORD)v24 )
    sub_140001660(*((_QWORD *)&v24 + 1), v24, 1);
LABEL_21:
  if ( v16 )
    sub_140001660(v13, v16, 1);
  return a1;
}