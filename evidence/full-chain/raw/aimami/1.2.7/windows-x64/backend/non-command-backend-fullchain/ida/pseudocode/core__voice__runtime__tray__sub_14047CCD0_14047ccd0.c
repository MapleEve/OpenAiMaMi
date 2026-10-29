// win 1.2.7 | module src/core/voice/runtime/tray.rs | ea 0x14047ccd0 | name sub_14047CCD0
// win 1.2.7 | module src/core/voice/runtime/tray.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14047CCD0(__int64 a1, char a2)
{
  __int64 result; // rax
  __m512i *v4; // rsi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rsi
  int v12; // eax
  float v13; // xmm0_4
  int v14; // edx
  int v15; // edi
  int v16; // r9d
  unsigned __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // r11
  int v20; // edx
  __int64 v21; // r15
  __int64 v22; // r14
  __int64 v23; // rbx
  int v24; // r12d
  int v25; // r12d
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  bool v32; // zf
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rax
  __int64 *v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r8
  __int64 v38; // rcx
  __m128i v39[9]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v40; // [rsp+C8h] [rbp+48h]
  __int64 v41; // [rsp+D0h] [rbp+50h]
  __int64 v42; // [rsp+E0h] [rbp+60h]
  __int64 v43; // [rsp+E8h] [rbp+68h]
  _QWORD *v44; // [rsp+F8h] [rbp+78h] BYREF
  _OWORD v45[3]; // [rsp+100h] [rbp+80h] BYREF
  __m512i v46; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v47; // [rsp+170h] [rbp+F0h]
  __int64 v48; // [rsp+180h] [rbp+100h]
  __int128 v49; // [rsp+200h] [rbp+180h] BYREF
  __int64 v50; // [rsp+210h] [rbp+190h]
  int v51; // [rsp+218h] [rbp+198h]
  int v52; // [rsp+21Ch] [rbp+19Ch]
  __m512i v53; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v54; // [rsp+260h] [rbp+1E0h]
  __int64 v55; // [rsp+270h] [rbp+1F0h]
  __int64 v56; // [rsp+278h] [rbp+1F8h]
  __int64 v57; // [rsp+280h] [rbp+200h]
  char v58; // [rsp+28Fh] [rbp+20Fh]
  __int64 v59; // [rsp+290h] [rbp+210h]

  v59 = -2;
  result = sub_14001B970((unsigned int)&v46, *(_DWORD *)(a1 + 136) + 4744, a1, (unsigned int)&unk_141A035E8, 4);
  if ( v46.m512i_i32[0] != -1 )
  {
    sub_1418F44E0(v39, (const __m128i *)&v46, 0xD0u);
    *(_QWORD *)&v47 = &unk_141A035EC;
    *((_QWORD *)&v47 + 1) = 4612;
    v48 = 0;
    v46.m512i_i64[4] = -2;
    v46.m512i_i64[0] = 1;
    v46.m512i_i64[1] = 0x20000000;
    v46.m512i_i32[4] = 0;
    v46.m512i_i32[6] = 0;
    sub_140FE2660(&v53, &v46);
    if ( v53.m512i_i32[0] == 2 )
    {
      if ( (v53.m512i_i8[8] & 3u) - 2 >= 2 && (v53.m512i_i8[8] & 3) != 0 )
      {
LABEL_5:
        v46.m512i_i64[1] = v53.m512i_i64[1] - 1;
        v46.m512i_i8[0] = 3;
        sub_1416BCB00(&v46.m512i_u64[1]);
      }
      goto LABEL_85;
    }
    v48 = v55;
    v47 = v54;
    v46 = v53;
    v4 = &v53;
    sub_140FE2BE0(&v53, &v46);
    v5 = v53.m512i_i64[0];
    if ( v53.m512i_i64[0] == -1 )
    {
      v45[2] = *(_OWORD *)&v53.m512i_u64[5];
      v45[1] = *(_OWORD *)&v53.m512i_u64[3];
      v45[0] = *(_OWORD *)&v53.m512i_u64[1];
      sub_141158520(&v53, v45);
      v10 = v53.m512i_u32[6];
      v11 = v53.m512i_u32[7];
      if ( a2 )
      {
        if ( v53.m512i_i32[7] )
        {
          v12 = v53.m512i_i32[6];
          if ( v53.m512i_i32[7] < (unsigned __int32)v53.m512i_i32[6] )
            v12 = v53.m512i_i32[7];
          v13 = roundf((float)v12 * 0.2);
          v14 = 0x7FFFFFFF;
          if ( v13 <= 2147483500.0 )
            v14 = (int)v13;
          if ( (_DWORD)v10 )
          {
            v15 = v14 - v11 + 1;
            v16 = v14 * v14;
            v17 = v53.m512i_u64[2];
            v18 = v53.m512i_i64[1];
            v19 = 4 * v10;
            v57 = v10;
            v20 = v14 - v10 + 1;
            v21 = 0;
            v22 = 0;
            v23 = 0;
            do
            {
              v24 = v21++;
              v25 = (v15 + v24) * (v15 + v24);
              v26 = v20;
              v27 = 0;
              do
              {
                if ( v25 + v26 * v26 <= v16 )
                {
                  if ( v22 + v27 + 3 >= v17 )
                  {
                    v58 = 1;
                    sub_1419392D0(v27 - v23, v27 - v23 + 4, v17, &off_141A04810);
                  }
                  *(_DWORD *)(v18 + v27) = -14276900;
                }
                v27 += 4;
                ++v26;
              }
              while ( v19 != v27 );
              v23 -= v19;
              v18 += v19;
              v22 += v19;
            }
            while ( v21 != v11 );
            LODWORD(v10) = v57;
          }
          else
          {
            LODWORD(v10) = 0;
          }
        }
        else
        {
          LODWORD(v11) = 0;
        }
      }
      v50 = v53.m512i_i64[2];
      v49 = *(_OWORD *)v53.m512i_i8;
      v51 = v10;
      v52 = v11;
      v58 = 0;
      sub_14072C7D0(&v46, v39, &v49);
      if ( v46.m512i_i64[0] != -1 )
      {
        v58 = 0;
        sub_140407970(&v46);
      }
      sub_14040DA90(v45);
      if ( v40 )
        sub_140001660(v41, v40, 1);
      if ( v42 )
        sub_140001660(v43, v42, 1);
      v32 = (*v44)-- == 1;
      if ( !v32 )
        return sub_14029B270(v39);
LABEL_90:
      sub_140607880(&v44);
      return sub_14029B270(v39);
    }
    v6 = 4;
    if ( v53.m512i_i64[0] > 0x8000000000000003uLL )
      v6 = v53.m512i_i64[0] + 0x7FFFFFFFFFFFFFFCLL;
    switch ( v6 )
    {
      case 0LL:
        v7 = v53.m512i_i64[1];
        v8 = 2;
        if ( v53.m512i_i64[1] < 0 )
          v8 = v53.m512i_i64[1] ^ 0x8000000000000000uLL;
        if ( v8 == 1 )
        {
          v9 = 2;
          v7 = v53.m512i_i64[2];
        }
        else
        {
          v9 = 1;
          if ( v8 != 2 )
            goto LABEL_79;
        }
        if ( v7 )
          sub_140001660(v53.m512i_i64[v9 + 1], v7, 1);
LABEL_79:
        v57 = v53.m512i_i64[5];
        if ( v53.m512i_i64[5] )
        {
          v56 = v53.m512i_i64[6];
          if ( !*(_QWORD *)v53.m512i_i64[6] )
            goto LABEL_82;
          goto LABEL_81;
        }
        goto LABEL_85;
      case 1LL:
        v29 = v53.m512i_i64[1];
        v30 = 2;
        if ( v53.m512i_i64[1] < 0 )
          v30 = v53.m512i_i64[1] ^ 0x8000000000000000uLL;
        if ( v30 == 1 )
        {
          v31 = 2;
          v29 = v53.m512i_i64[2];
        }
        else
        {
          v31 = 1;
          if ( v30 != 2 )
            goto LABEL_73;
        }
        if ( v29 )
          sub_140001660(v53.m512i_i64[v31 + 1], v29, 1);
LABEL_73:
        v57 = v53.m512i_i64[5];
        if ( v53.m512i_i64[5] )
        {
          v56 = v53.m512i_i64[6];
          if ( *(_QWORD *)v53.m512i_i64[6] )
LABEL_81:
            (*(void (__fastcall **)(__int64))v53.m512i_i64[6])(v57);
          goto LABEL_82;
        }
        goto LABEL_85;
      case 2LL:
        if ( v53.m512i_i64[1] > 0 )
          sub_140001660(v53.m512i_i64[2], v53.m512i_i64[1], 1);
        v57 = v53.m512i_i64[4];
        if ( v53.m512i_i64[4] )
        {
          v56 = v53.m512i_i64[5];
          if ( *(_QWORD *)v53.m512i_i64[5] )
            (*(void (__fastcall **)(__int64))v53.m512i_i64[5])(v57);
LABEL_82:
          v36 = *(_QWORD *)(v56 + 8);
          if ( v36 )
          {
            v37 = *(_QWORD *)(v56 + 16);
            v38 = v57;
            goto LABEL_84;
          }
        }
        goto LABEL_85;
      case 3LL:
        goto LABEL_85;
      case 4LL:
        v28 = 2;
        if ( v53.m512i_i64[0] < 0 )
          v28 = v53.m512i_i64[0] ^ 0x8000000000000000uLL;
        if ( v28 == 1 )
        {
          v5 = v53.m512i_i64[1];
          v4 = (__m512i *)&v53.m512i_u64[1];
        }
        else if ( v28 != 2 )
        {
          goto LABEL_61;
        }
        if ( v5 )
          sub_140001660(v4->m512i_i64[1], v5, 1);
LABEL_61:
        v33 = 3;
        if ( v53.m512i_i64[4] > 0x8000000000000003uLL )
          v33 = v53.m512i_i64[4] + 0x7FFFFFFFFFFFFFFCLL;
        if ( v33 < 3 )
          goto LABEL_85;
        if ( v33 == 3 )
        {
          v34 = 2;
          if ( v53.m512i_i64[4] < 0 )
            v34 = v53.m512i_i64[4] ^ 0x8000000000000000uLL;
          if ( v34 == 2 )
          {
            v35 = &v53.m512i_i64[4];
LABEL_95:
            v36 = *v35;
            if ( *v35 )
            {
              v38 = v35[1];
              v37 = 1;
LABEL_84:
              sub_140001660(v38, v36, v37);
            }
LABEL_85:
            if ( v40 )
              sub_140001660(v41, v40, 1);
            if ( v42 )
              sub_140001660(v43, v42, 1);
            v32 = (*v44)-- == 1;
            if ( !v32 )
              return sub_14029B270(v39);
            goto LABEL_90;
          }
          if ( v34 != 1 )
            goto LABEL_85;
        }
        v35 = &v53.m512i_i64[5];
        goto LABEL_95;
      default:
        if ( (v53.m512i_i8[8] & 3u) - 2 >= 2 && (v53.m512i_i8[8] & 3) != 0 )
          goto LABEL_5;
        goto LABEL_85;
    }
  }
  return result;
}
