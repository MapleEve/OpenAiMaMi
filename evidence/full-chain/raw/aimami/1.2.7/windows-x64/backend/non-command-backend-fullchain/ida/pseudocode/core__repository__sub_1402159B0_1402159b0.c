// win 1.2.7 | module src/core/repository.rs | ea 0x1402159b0 | name sub_1402159B0
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__m128i *__fastcall sub_1402159B0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  __int32 v6; // edx
  int v7; // ecx
  unsigned __int32 v8; // ecx
  signed __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rax
  void *v15; // rcx
  char v16; // al
  bool v17; // zf
  __m128i v19; // [rsp+20h] [rbp-60h] BYREF
  __int64 v20; // [rsp+30h] [rbp-50h]
  signed __int64 v21; // [rsp+38h] [rbp-48h]
  __int64 v22; // [rsp+40h] [rbp-40h]
  signed __int64 v23; // [rsp+48h] [rbp-38h]
  __int64 v24; // [rsp+50h] [rbp-30h]
  __int128 v25; // [rsp+58h] [rbp-28h]
  __int64 v26; // [rsp+68h] [rbp-18h]
  __m128i v27[10]; // [rsp+70h] [rbp-10h] BYREF
  char v28; // [rsp+118h] [rbp+98h]
  _OWORD v29[6]; // [rsp+120h] [rbp+A0h] BYREF
  __m128i v30; // [rsp+188h] [rbp+108h] BYREF
  __int64 v31; // [rsp+198h] [rbp+118h]
  __int64 v32; // [rsp+1A0h] [rbp+120h]
  const char *v33; // [rsp+1A8h] [rbp+128h]
  __int64 v34; // [rsp+1B0h] [rbp+130h]
  __int64 v35; // [rsp+1B8h] [rbp+138h]
  const char *v36; // [rsp+1C0h] [rbp+140h]
  __int64 v37; // [rsp+1C8h] [rbp+148h]
  __int64 v38; // [rsp+1D0h] [rbp+150h]
  void *v39; // [rsp+1D8h] [rbp+158h]
  _QWORD *v40; // [rsp+1E0h] [rbp+160h]
  __int128 v41; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v42; // [rsp+240h] [rbp+1C0h]
  __int128 v43; // [rsp+250h] [rbp+1D0h]
  __int128 v44; // [rsp+260h] [rbp+1E0h]
  __int128 v45; // [rsp+270h] [rbp+1F0h]
  __int128 v46; // [rsp+280h] [rbp+200h]
  _QWORD v47[2]; // [rsp+290h] [rbp+210h] BYREF
  _QWORD v48[3]; // [rsp+2A0h] [rbp+220h] BYREF
  char v49; // [rsp+2BFh] [rbp+23Fh] BYREF
  __int64 v50; // [rsp+2C0h] [rbp+240h]

  v50 = -2;
  sub_140ED5630(&v19, a2, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
  v5 = v19.m128i_i64[0];
  if ( v19.m128i_i64[0] == 2 )
    sub_1401954F0(&v19.m128i_u64[1]);
  else
    sub_1418F44E0(&v30, (const __m128i *)&v19.m128i_u64[1], 0xA8u);
  v24 = 2;
  v19.m128i_i64[0] = 0;
  v20 = 0;
  v22 = 0;
  v48[2] = v5;
  v26 = v5;
  sub_1418F44E0(v27, &v30, 0xA8u);
  v28 = 0;
  sub_141406CE0(&v30);
  v6 = (v30.m128i_i32[0] >> 13) - 1;
  v7 = 0;
  if ( v30.m128i_i32[0] >> 13 <= 0 )
  {
    v8 = (1 - (v30.m128i_i32[0] >> 13)) / 0x190u + 1;
    v6 += 400 * v8;
    v7 = -146097 * v8;
  }
  v9 = 1000
     * (v30.m128i_u32[1]
      + 86400LL
      * (((v6 / 100) >> 2)
       + ((1461 * v6) >> 2)
       + v7
       + (((unsigned __int32)v30.m128i_i32[0] >> 4) & 0x1FF)
       - v6 / 100
       - 719163))
     + v30.m128i_u32[2] / 0xF4240uLL;
  v10 = *(_QWORD *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 16) != 1 )
    goto LABEL_35;
  v11 = *(_QWORD *)(a3 + 24);
  v12 = 1000 * v11;
  if ( (unsigned __int64)(v11 - 1) >= 0x2540BE3FFLL )
    v12 = *(_QWORD *)(a3 + 24);
  if ( v9 < v12 || v9 - v12 >= 21600000 )
  {
LABEL_35:
    if ( !*(_QWORD *)a3 )
      goto LABEL_16;
    v13 = 1000 * v10;
    if ( (unsigned __int64)(v10 - 1) >= 0x2540BE3FFLL )
      v13 = *(_QWORD *)(a3 + 8);
    if ( v9 < v13 || v9 - v13 >= 300000 )
      goto LABEL_16;
  }
  if ( *(_BYTE *)(a3 + 64) )
  {
LABEL_16:
    v19.m128i_i64[0] = 1;
    v19.m128i_i64[1] = v9;
    sub_140FF4560(&v41, *(_QWORD *)(a3 + 48), *(_QWORD *)(a3 + 56));
    if ( (_DWORD)v41 == -1 )
    {
      v20 = 1;
      v21 = v9;
      if ( *((_QWORD *)&v41 + 1) != 2 && (BYTE10(v42) == 0 || BYTE9(v42) != 2) | BYTE8(v41) & 1 )
      {
        v22 = 1;
        v23 = v9;
      }
      v24 = *((_QWORD *)&v41 + 1);
      v25 = v42;
    }
    else
    {
      v29[5] = v46;
      v29[4] = v45;
      v29[3] = v44;
      v29[2] = v43;
      v29[1] = v42;
      v29[0] = v41;
      v28 = 1;
      if ( (_QWORD)v41 == 6 )
      {
        if ( (unsigned __int8)sub_14122E510((char *)v29 + 8) )
        {
          v14 = 7;
          v15 = &unk_1419DC4D4;
        }
        else
        {
          v16 = sub_14122E5A0((char *)v29 + 8);
          v15 = &unk_1419DC4C3;
          v17 = v16 == 0;
          if ( v16 )
            v15 = &unk_1419DC4D4;
          v14 = 17;
          if ( !v17 )
            v14 = 7;
        }
      }
      else
      {
        v14 = 17;
        v15 = &unk_1419DC4C3;
      }
      v48[0] = v15;
      v48[1] = v14;
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        v47[0] = v48;
        v47[1] = sub_140186EE0;
        v35 = 2;
        v36 = aCodexmateLibCo_21;
        v37 = 31;
        v39 = &unk_1419DC4DB;
        v40 = v47;
        v30.m128i_i64[0] = 0;
        v30.m128i_i64[1] = (__int64)aCodexmateLibCo_21;
        v31 = 31;
        v32 = 0;
        v33 = aSrcCoreReposit;
        v34 = 22;
        v38 = 0xF9200000001LL;
        sub_1414D53A0(&v49, &v30);
      }
      sub_1401954F0(v29);
    }
  }
  sub_1418F44E0(a1, &v19, 0x100u);
  return a1;
}
