// win 1.2.7 | module src/core/relay/codex_catalog.rs | ea 0x14101e920 | name sub_14101E920
// win 1.2.7 | module src/core/relay/codex_catalog.rs | attributed via panic-Location xref (win-native)
_QWORD *__fastcall sub_14101E920(_QWORD *a1)
{
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int128 v4; // xmm6
  __int64 v5; // r9
  int v6; // r15d
  __int64 v7; // r12
  int v8; // r14d
  __int64 *v9; // rdi
  __int64 v10; // rcx
  char v11; // al
  char v12; // al
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r13
  char v16; // al
  char v17; // al
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // r13
  unsigned int v21; // eax
  unsigned int v22; // eax
  char v23; // al
  __int64 v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  __m128i *v28; // rax
  __m128i *v29; // rdi
  __int64 v31; // rax
  char v32; // al
  __m256i v33; // [rsp+30h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+50h] [rbp-30h]
  __int64 v35; // [rsp+58h] [rbp-28h]
  __m256i v36; // [rsp+60h] [rbp-20h] BYREF
  __int128 v37; // [rsp+80h] [rbp+0h]
  int v38; // [rsp+90h] [rbp+10h]
  __int64 v39; // [rsp+94h] [rbp+14h]
  int v40; // [rsp+9Ch] [rbp+1Ch]
  __int128 v41; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v42; // [rsp+B0h] [rbp+30h]
  __m256i v43; // [rsp+C0h] [rbp+40h] BYREF
  unsigned __int64 v44; // [rsp+E0h] [rbp+60h]
  __int128 v45; // [rsp+F0h] [rbp+70h]
  unsigned int v46; // [rsp+100h] [rbp+80h]
  char v47; // [rsp+104h] [rbp+84h]
  char v48; // [rsp+105h] [rbp+85h]
  char v49; // [rsp+106h] [rbp+86h]
  char v50; // [rsp+107h] [rbp+87h]
  __int64 v51; // [rsp+108h] [rbp+88h]

  v51 = -2;
  sub_14101F5F0(&v36);
  v3 = v36.m256i_i64[0];
  if ( v36.m256i_i64[0] == 2 )
  {
    sub_14101DEE0((__int64 *)&v41);
    goto LABEL_52;
  }
  v35 = v36.m256i_i64[1];
  *(_QWORD *)&v45 = v36.m256i_i64[3];
  *((_QWORD *)&v45 + 1) = v36.m256i_i64[2];
  v4 = v37;
  v5 = v37;
  v6 = v38;
  v7 = v39;
  v8 = v40;
  if ( dword_1421E06C0 )
  {
    v47 = 0;
    v18 = v37;
    sub_1419115CD(&byte_1421E0660);
    v5 = v18;
  }
  LOBYTE(v2) = 1;
  if ( _InterlockedCompareExchange8(&byte_1421E0660, 1, 0) )
  {
    v50 = 1;
    v19 = v5;
    sub_141937480(&byte_1421E0660);
    v5 = v19;
  }
  v9 = off_1421E7210;
  if ( !(2 * *off_1421E7210) )
  {
    v10 = 0;
    if ( (_DWORD)qword_1421E0668 == 2 )
      goto LABEL_18;
LABEL_9:
    v46 = v10;
    v11 = sub_1402899E0(qword_1421E0680, xmmword_1421E0688, v45, v5);
    v10 = v46;
    if ( !v11 )
      goto LABEL_18;
    if ( dword_1421E0698 == 1 )
    {
      if ( ((qword_1421E069C == v7) & (unsigned __int8)v6) == 0 )
        goto LABEL_18;
    }
    else if ( (v6 & 1) != 0 )
    {
      goto LABEL_18;
    }
    if ( (_DWORD)qword_1421E0668 == 1 )
    {
      if ( ((qword_1421E0670 == v35) & (unsigned __int8)v3) == 0 )
        goto LABEL_18;
    }
    else if ( (v3 & 1) != 0 )
    {
      goto LABEL_18;
    }
    if ( qword_1421E06A8 == -1 )
    {
      *(_QWORD *)&v41 = -1;
    }
    else
    {
      sub_1416AC440(&v36, &qword_1421E06A8);
      v42 = v36.m256i_i64[2];
      v41 = *(_OWORD *)v36.m256i_i8;
      v10 = v46;
    }
    if ( !(_BYTE)v10 )
    {
      if ( 2 * *v9 )
      {
        v50 = 1;
        if ( !(unsigned __int8)sub_141938160(v10) )
          byte_1421E0661 = 1;
      }
    }
    v17 = byte_1421E0660;
    byte_1421E0660 = 0;
    if ( v17 == 2 )
    {
      v50 = 1;
      WakeByAddressSingle(&byte_1421E0660);
    }
    goto LABEL_50;
  }
  v50 = 1;
  v20 = v5;
  v21 = sub_141938160(v2);
  v5 = v20;
  v10 = v21;
  LOBYTE(v10) = v21 ^ 1;
  if ( (_DWORD)qword_1421E0668 != 2 )
    goto LABEL_9;
LABEL_18:
  if ( !(_BYTE)v10 )
  {
    if ( 2 * *v9 )
    {
      v50 = 1;
      if ( !(unsigned __int8)sub_141938160(v10) )
        byte_1421E0661 = 1;
    }
  }
  v12 = byte_1421E0660;
  byte_1421E0660 = 0;
  if ( v12 == 2 )
  {
    v50 = 1;
    WakeByAddressSingle(&byte_1421E0660);
  }
  v50 = 1;
  sub_14101DEE0(v43.m256i_i64);
  LOBYTE(v13) = 1;
  if ( _InterlockedCompareExchange8(&byte_1421E0660, 1, 0) )
  {
    v49 = 1;
    v48 = 1;
    sub_141937480(&byte_1421E0660);
  }
  if ( 2 * *v9 )
  {
    v49 = 1;
    v48 = 1;
    v22 = sub_141938160(v13);
    LOBYTE(v22) = v22 ^ 1;
    v46 = v22;
    if ( v43.m256i_i64[0] != -1 )
    {
LABEL_26:
      sub_1416AC440(&v36, &v43);
      v15 = v36.m256i_i64[0];
      *(_OWORD *)v33.m256i_i8 = *(_OWORD *)&v36.m256i_u64[1];
      if ( (_DWORD)qword_1421E0668 != 2 && qword_1421E0678 )
        sub_140001660(qword_1421E0680, qword_1421E0678, 1);
      if ( qword_1421E06A8 != -1 && qword_1421E06A8 )
        sub_140001660(xmmword_1421E06B0, qword_1421E06A8, 1);
      qword_1421E0668 = v3;
      qword_1421E0670 = v35;
      qword_1421E0678 = *((_QWORD *)&v45 + 1);
      qword_1421E0680 = v45;
      xmmword_1421E0688 = v4;
      dword_1421E0698 = v6;
      qword_1421E069C = v7;
      dword_1421E06A4 = v8;
      qword_1421E06A8 = v15;
      xmmword_1421E06B0 = *(_OWORD *)v33.m256i_i8;
      v41 = *(_OWORD *)v43.m256i_i8;
      v42 = v43.m256i_i64[2];
      if ( !(_BYTE)v46 )
      {
        if ( 2 * *v9 )
        {
          v49 = 0;
          v48 = 0;
          if ( !(unsigned __int8)sub_141938160(v14) )
            byte_1421E0661 = 1;
        }
      }
      v16 = byte_1421E0660;
      byte_1421E0660 = 0;
      if ( v16 == 2 )
      {
        v49 = 0;
        v48 = 0;
        WakeByAddressSingle(&byte_1421E0660);
      }
      goto LABEL_52;
    }
  }
  else
  {
    v46 = 0;
    if ( v43.m256i_i64[0] != -1 )
      goto LABEL_26;
  }
  v42 = v43.m256i_i64[2];
  v41 = *(_OWORD *)v43.m256i_i8;
  if ( !(_BYTE)v46 )
  {
    if ( 2 * *v9 )
    {
      v49 = 0;
      v48 = 1;
      if ( !(unsigned __int8)sub_141938160(v13) )
        byte_1421E0661 = 1;
    }
  }
  v23 = byte_1421E0660;
  byte_1421E0660 = 0;
  if ( v23 == 2 )
  {
    v49 = 0;
    v48 = 1;
    WakeByAddressSingle(&byte_1421E0660);
  }
LABEL_50:
  if ( *((_QWORD *)&v45 + 1) )
    sub_140001660(v45, *((_QWORD *)&v45 + 1), 1);
LABEL_52:
  v45 = v41;
  v24 = v42;
  sub_141677CB0(&v36, a01550Alpha92);
  if ( !v36.m256i_i64[0] )
  {
    v43.m256i_i64[0] = v36.m256i_i64[1];
    sub_141939040(
      (unsigned int)aValidMinimumVe,
      21,
      (unsigned int)&v43,
      (unsigned int)&unk_141A6D5D8,
      (__int64)&off_141A6FC80);
  }
  v34 = v37;
  v33 = v36;
  if ( (_QWORD)v45 == -1
    || (v26 = sub_140E91160(*((_QWORD *)&v45 + 1), v24), v27 < 0xA)
    || (v25 = *(_QWORD *)v26 ^ 0x6C632D7865646F63LL, v25 | *(unsigned __int16 *)(v26 + 8) ^ 0x2069LL)
    || (v31 = sub_140E91160(v26 + 10, v27 - 10), sub_141677CB0(&v36, v31), !v36.m256i_i64[0]) )
  {
    v43.m256i_i64[0] = 0;
  }
  else
  {
    v43 = v36;
    v44 = v37;
    v25 = v36.m256i_i64[2];
    v32 = (v43.m256i_i64[2] > (unsigned __int64)v33.m256i_i64[2])
        - (v43.m256i_i64[2] < (unsigned __int64)v33.m256i_i64[2]);
    if ( v36.m256i_i64[2] == v33.m256i_i64[2] )
    {
      v25 = v43.m256i_i64[3];
      v32 = (v43.m256i_i64[3] > (unsigned __int64)v33.m256i_i64[3])
          - (v43.m256i_i64[3] < (unsigned __int64)v33.m256i_i64[3]);
      if ( v43.m256i_i64[3] == v33.m256i_i64[3] )
      {
        v25 = v44;
        v32 = (v44 > v34) - (v44 < v34);
        if ( v44 == v34 )
        {
          v32 = sub_1416784D0(&v43, &v33);
          if ( !v32 )
            v32 = sub_1416787C0(&v43.m256i_u64[1], &v33.m256i_u64[1]);
        }
      }
    }
    if ( v32 >= 0 )
    {
      *a1 = -1;
      if ( !v43.m256i_i64[0] )
        goto LABEL_60;
LABEL_59:
      sub_1416776D0(&v43);
      sub_1416776D0(&v43.m256i_u64[1]);
      goto LABEL_60;
    }
  }
  nullsub_1(v25);
  v28 = (__m128i *)sub_140001650(281, 1);
  if ( !v28 )
    sub_141938D2B(1, 281);
  v29 = v28;
  sub_1418F44E0(v28, (const __m128i *)aChatgptCodex01, 0x119u);
  *a1 = 10;
  a1[1] = 281;
  a1[2] = v29;
  a1[3] = 281;
  if ( v43.m256i_i64[0] )
    goto LABEL_59;
LABEL_60:
  sub_1416776D0(&v33);
  sub_1416776D0(&v33.m256i_u64[1]);
  if ( (__int64)v45 > 0 )
    sub_140001660(*((_QWORD *)&v45 + 1), v45, 1);
  return a1;
}
