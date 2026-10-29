// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e1f630 | name sub_140E1F630
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E1F630(__int64 a1, const __m128i *a2, signed __int64 a3)
{
  __int64 v4; // rbx
  __m128i *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rdx
  signed __int64 v18; // rcx
  __int128 v20; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v21[2]; // [rsp+40h] [rbp-40h] BYREF
  signed __int64 v22; // [rsp+50h] [rbp-30h]
  __int128 v23; // [rsp+58h] [rbp-28h] BYREF
  __int64 v24; // [rsp+68h] [rbp-18h]
  _QWORD *v25; // [rsp+70h] [rbp-10h] BYREF
  __int64 v26; // [rsp+78h] [rbp-8h]
  unsigned __int64 v27; // [rsp+80h] [rbp+0h]
  __int64 v28; // [rsp+88h] [rbp+8h]
  __int64 v29; // [rsp+90h] [rbp+10h]
  _QWORD *v30; // [rsp+98h] [rbp+18h]
  char v31; // [rsp+A7h] [rbp+27h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+28h]

  v32 = -2;
  if ( a3 < 0 )
  {
    v4 = 0;
    goto LABEL_3;
  }
  v22 = a3;
  if ( a3 )
  {
    nullsub_1(a1);
    v4 = 1;
    v7 = (__m128i *)sub_140001650(a3, 1);
    if ( !v7 )
LABEL_3:
      sub_141938D2B(v4, a3);
    v28 = (__int64)v7;
    sub_1418F44E0(v7, a2, a3);
  }
  else
  {
    v28 = 1;
  }
  sub_141568C20(&v23);
  v20 = v23;
  v25 = nullptr;
  v26 = 1;
  v27 = 0;
  v24 = 1610612768;
  *(_QWORD *)&v23 = &v25;
  *((_QWORD *)&v23 + 1) = &off_141A54A20;
  if ( (unsigned __int8)sub_141569DC0(&v20, &v23) )
    sub_141939040(
      (unsigned int)aADisplayImplem_9,
      55,
      (unsigned int)&v31,
      (unsigned int)&unk_141A53038,
      (__int64)&off_141A54AD8);
  v30 = v25;
  v29 = v26;
  if ( v27 <= 0x10 )
  {
    if ( v27 != 16 )
LABEL_11:
      sub_141938F40(v26, v27, 0, 16, (__int64)&off_141A533B8);
  }
  else if ( *(char *)(v26 + 16) < -64 )
  {
    goto LABEL_11;
  }
  v21[0] = v26;
  v21[1] = 16;
  v25 = v21;
  v26 = (__int64)sub_140186EE0;
  sub_1416ABFD0(&v23, &unk_141A533D0, &v25);
  if ( v30 )
    sub_140001660(v29, v30, 1);
  v29 = *((_QWORD *)&v23 + 1);
  v30 = (_QWORD *)v23;
  v9 = v24;
  v10 = sub_14167F170(v8);
  v15 = v10;
  if ( *(_BYTE *)(v10 + 16) == 1 )
  {
    v16 = *(_QWORD *)v10;
    v17 = *(_QWORD *)(v15 + 8);
  }
  else
  {
    v16 = sub_141696260(v12, v11, v13, v14);
    *(_QWORD *)v15 = v16;
    *(_QWORD *)(v15 + 8) = v17;
    *(_BYTE *)(v15 + 16) = 1;
  }
  *(_QWORD *)v15 = v16 + 1;
  v18 = v22;
  *(_QWORD *)a1 = v22;
  *(_QWORD *)(a1 + 8) = v28;
  *(_QWORD *)(a1 + 16) = v18;
  *(_QWORD *)(a1 + 24) = v30;
  *(_QWORD *)(a1 + 32) = v29;
  *(_QWORD *)(a1 + 40) = v9;
  *(_WORD *)(a1 + 108) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&off_141A52780;
  *(_OWORD *)(a1 + 72) = xmmword_141A52790;
  *(_QWORD *)(a1 + 88) = v16;
  *(_QWORD *)(a1 + 96) = v17;
  *(_DWORD *)(a1 + 104) = 0;
  return a1;
}
