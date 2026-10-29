// win 1.2.7 | module src/core/relay/translator.rs | ea 0x14102d650 | name sub_14102D650
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14102D650(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rdx
  const __m128i *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  const __m128i *v8; // rbx
  __int64 v9; // r15
  __int64 v10; // r14
  __m128i *v11; // rax
  __int128 *v12; // rax
  __int64 (__fastcall *v13)(); // rdx
  const __m128i *v14; // rdx
  __int64 v15; // rcx
  __int64 v17; // [rsp+20h] [rbp-60h]
  __int128 *v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall *v19)(); // [rsp+30h] [rbp-50h]
  const __m128i *v20; // [rsp+38h] [rbp-48h] BYREF
  __int64 (__fastcall *v21)(); // [rsp+40h] [rbp-40h]
  __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall *v23)(); // [rsp+50h] [rbp-30h]
  __int64 v24; // [rsp+58h] [rbp-28h]
  const __m128i *v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF
  __int64 v27; // [rsp+78h] [rbp-8h]
  __int64 v28; // [rsp+80h] [rbp+0h]

  v28 = -2;
  v5 = (const __m128i *)sub_140E91160(a2, a3);
  v6 = v4;
  if ( v4 < 0x20 )
  {
    if ( (unsigned __int64)sub_1416B3A20(v5, v4) >= 0x101 )
      goto LABEL_3;
LABEL_6:
    if ( v6 >= 0 )
    {
      if ( !v6 )
      {
        v9 = 1;
        v6 = 0;
        v8 = nullptr;
        goto LABEL_13;
      }
      nullsub_1(v7);
      v10 = 1;
      v11 = (__m128i *)sub_140001650(v6, 1);
      if ( v11 )
      {
        v9 = (__int64)v11;
        sub_1418F44E0(v11, v5, v6);
        v8 = (const __m128i *)v6;
        goto LABEL_13;
      }
    }
    else
    {
      v10 = 0;
    }
    sub_141938D2B(v10, v6);
  }
  if ( (unsigned __int64)sub_1416B3400(v5, v4) < 0x101 )
    goto LABEL_6;
LABEL_3:
  v20 = v5;
  v21 = (__int64 (__fastcall *)())&v5->m128i_i8[v6];
  v22 = 256;
  sub_1407171D0(&v26, &v20);
  v18 = &v26;
  v19 = sub_1400015F0;
  sub_1416ABFD0(&v20, &unk_141A710B8, &v18);
  v8 = v20;
  v9 = (__int64)v21;
  v6 = v22;
  if ( (_QWORD)v26 )
    sub_140001660(*((_QWORD *)&v26 + 1), v26, 1);
LABEL_13:
  v25 = v8;
  v24 = v9;
  if ( dword_1421E0058 )
    sub_14021D340((__int64)&v26, (const __m128i *)v9, v6, 0, v17);
  else
    sub_14021D340((__int64)&v26, (const __m128i *)v9, v6, qword_1421E0040, qword_1421E0048);
  v12 = (__int128 *)sub_14102B720(v24, v6);
  if ( !v12 )
  {
    *(_QWORD *)(a1 + 16) = v27;
    *(_OWORD *)a1 = v26;
    v14 = v25;
    v15 = v24;
    if ( !v25 )
      return a1;
    goto LABEL_20;
  }
  v18 = v12;
  v19 = v13;
  v20 = (const __m128i *)&v26;
  v21 = sub_1400015F0;
  v22 = (__int64)&v18;
  v23 = sub_140186EE0;
  sub_1416ABFD0(a1, &unk_141A710BE, &v20);
  if ( (_QWORD)v26 )
    sub_140001660(*((_QWORD *)&v26 + 1), v26, 1);
  v14 = v25;
  v15 = v24;
  if ( v25 )
LABEL_20:
    sub_140001660(v15, v14, 1);
  return a1;
}
