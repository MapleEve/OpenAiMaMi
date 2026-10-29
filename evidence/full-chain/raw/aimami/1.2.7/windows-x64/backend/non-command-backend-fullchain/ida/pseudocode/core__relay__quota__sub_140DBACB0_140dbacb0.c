// win 1.2.7 | module src/core/relay/quota.rs | ea 0x140dbacb0 | name sub_140DBACB0
// win 1.2.7 | module src/core/relay/quota.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140DBACB0(__int64 a1, const __m128i *a2, signed __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // r12
  __m128i *v11; // rax
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
  __int64 (__fastcall *v23)(); // [rsp+68h] [rbp-18h]
  __int128 v24; // [rsp+70h] [rbp-10h] BYREF
  signed __int64 v25; // [rsp+80h] [rbp+0h]
  __int64 v26; // [rsp+88h] [rbp+8h]

  v26 = -2;
  sub_1416BAA10(&v20, a2, a3);
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
      v11 = (__m128i *)sub_140001650(a3, 1);
      if ( !v11 )
LABEL_4:
        sub_141938D2B(v10, a3);
      v12 = (__int64)v11;
      sub_1418F44E0(v11, a2, a3);
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
    v21 = (__int64 (__fastcall *)())sub_1416BB8F0;
    sub_1416ABFD0(&v24, &unk_141A494E4, &v20);
  }
  sub_1416AADA0(&v16, a4, a5);
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
      v21 = sub_140186EE0;
      v22 = &v24;
      v23 = sub_1400015F0;
      sub_1416ABFD0(a1, &unk_141A475C9, &v20);
      goto LABEL_19;
    }
    v20 = (__int64 (__fastcall **)())&v24;
    v21 = sub_1400015F0;
    sub_1416ABFD0(a1, &unk_141A4E10A, &v20);
  }
  else
  {
    v20 = (__int64 (__fastcall **)())&v24;
    v21 = sub_1400015F0;
    sub_1416ABFD0(a1, &unk_141A4E10E, &v20);
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
