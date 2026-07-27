// module: codexmate_lib/core/voice/runtime/tray
// addr: 0x14025d570
// name: sub_14025D570
// win 1.2.1 | module src/core/voice/runtime/tray.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_14025D570(__int64 a1, char a2)
{
  __int64 result; // rax
  bool v4; // zf
  __m512i *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdi
  int v12; // eax
  float v13; // xmm0_4
  int v14; // ecx
  int v15; // esi
  int v16; // r9d
  unsigned __int64 v17; // r8
  __int64 v18; // r10
  __int64 v19; // r11
  int v20; // edx
  __int64 v21; // rbx
  __int64 v22; // r15
  __int64 v23; // r14
  int v24; // r12d
  int v25; // r12d
  int v26; // eax
  __int64 v27; // rcx
  unsigned __int64 v28; // rcx
  __int64 v29; // rdx
  unsigned __int64 v30; // rcx
  __int64 v31; // rax
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rax
  __int64 *v34; // rax
  __int64 v35; // rdx
  _BYTE v36[152]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v37; // [rsp+C8h] [rbp+48h]
  __int64 v38; // [rsp+D0h] [rbp+50h]
  __int64 v39; // [rsp+E0h] [rbp+60h]
  __int64 v40; // [rsp+E8h] [rbp+68h]
  _QWORD *v41; // [rsp+F8h] [rbp+78h] BYREF
  __m512i v42; // [rsp+100h] [rbp+80h] BYREF
  __int128 v43; // [rsp+140h] [rbp+C0h]
  __int64 v44; // [rsp+150h] [rbp+D0h]
  _OWORD v45[3]; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v46; // [rsp+200h] [rbp+180h] BYREF
  __int64 v47; // [rsp+210h] [rbp+190h]
  int v48; // [rsp+218h] [rbp+198h]
  int v49; // [rsp+21Ch] [rbp+19Ch]
  __m512i v50; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v51; // [rsp+260h] [rbp+1E0h]
  __int64 v52; // [rsp+270h] [rbp+1F0h]
  __int64 v53; // [rsp+278h] [rbp+1F8h]
  __int64 v54; // [rsp+280h] [rbp+200h]
  char v55; // [rsp+28Fh] [rbp+20Fh]
  __int64 v56; // [rsp+290h] [rbp+210h]

  v56 = -2;
  result = sub_1401CA180((unsigned int)&v42, *(_DWORD *)(a1 + 136) + 4744, a1, (unsigned int)&unk_14173F068, 4);
  if ( v42.m512i_i32[0] != -1 )
  {
    sub_141684120(v36, &v42, 208);
    *(_QWORD *)&v43 = &unk_14173F06C;
    *((_QWORD *)&v43 + 1) = 4612;
    v44 = 0;
    v42.m512i_i64[4] = -2;
    v42.m512i_i64[0] = 1;
    v42.m512i_i64[1] = 0x20000000;
    v42.m512i_i32[4] = 0;
    v42.m512i_i32[6] = 0;
    sub_140ABEA80(&v50, &v42);
    if ( v50.m512i_i32[0] == 2 )
    {
LABEL_3:
      sub_1401DD260(v50.m512i_i64[1]);
    }
    else
    {
      v44 = v52;
      v43 = v51;
      v42 = v50;
      v5 = &v50;
      sub_140ABF000(&v50, &v42);
      v6 = v50.m512i_i64[0];
      if ( v50.m512i_i64[0] == -1 )
      {
        v45[2] = *(_OWORD *)&v50.m512i_u64[5];
        v45[1] = *(_OWORD *)&v50.m512i_u64[3];
        v45[0] = *(_OWORD *)&v50.m512i_u64[1];
        sub_140F48A70(&v50, v45);
        v54 = v50.m512i_u32[6];
        v11 = v50.m512i_u32[7];
        if ( a2 )
        {
          v12 = v54;
          if ( v50.m512i_i32[7] < (unsigned int)v54 )
            v12 = v50.m512i_i32[7];
          v13 = roundf((float)v12 * 0.2);
          v14 = 0x7FFFFFFF;
          if ( v13 <= 2147483500.0 )
            v14 = (int)v13;
          if ( (_DWORD)v11 && (_DWORD)v54 )
          {
            v15 = v14 - v11 + 1;
            v16 = v14 * v14;
            v17 = v50.m512i_u64[2];
            v18 = v50.m512i_i64[1];
            v19 = 4 * v54;
            v20 = v14 - v54 + 1;
            v21 = 3;
            v22 = 0;
            v23 = 0;
            do
            {
              v24 = v22++;
              v25 = (v15 + v24) * (v15 + v24);
              v26 = v20;
              v27 = 0;
              do
              {
                if ( v25 + v26 * v26 <= v16 )
                {
                  if ( v21 + v27 >= v17 )
                  {
                    v55 = 1;
                    sub_1416C32F0(v27 - v23, v27 - v23 + 4, v17, &off_141740290);
                  }
                  *(_DWORD *)(v18 + v27) = -14276900;
                }
                v27 += 4;
                ++v26;
              }
              while ( v19 != v27 );
              v23 -= v19;
              v18 += v19;
              v21 += v19;
            }
            while ( v22 != v11 );
          }
        }
        v47 = v50.m512i_i64[2];
        v46 = *(_OWORD *)v50.m512i_i8;
        v48 = v54;
        v49 = v11;
        v55 = 0;
        sub_140719210(&v42, v36, &v46);
        if ( v42.m512i_i64[0] != -1 )
        {
          v55 = 0;
          sub_1401DC230(&v42);
        }
        sub_1401DD1F0(v45);
        if ( v37 )
          sub_140001660(v38, v37, 1);
        if ( v39 )
          sub_140001660(v40, v39, 1);
        v4 = (*v41)-- == 1;
        if ( !v4 )
          return sub_1401DB8B0(v36);
LABEL_40:
        sub_1407190E0(&v41);
        return sub_1401DB8B0(v36);
      }
      v7 = 4;
      if ( v50.m512i_i64[0] > 0x8000000000000003uLL )
        v7 = v50.m512i_i64[0] + 0x7FFFFFFFFFFFFFFCLL;
      switch ( v7 )
      {
        case 0LL:
          v8 = v50.m512i_i64[1];
          v9 = 2;
          if ( v50.m512i_i64[1] < 0 )
            v9 = v50.m512i_i64[1] ^ 0x8000000000000000uLL;
          if ( v9 == 1 )
          {
            v10 = 2;
            v8 = v50.m512i_i64[2];
          }
          else
          {
            v10 = 1;
            if ( v9 != 2 )
              goto LABEL_79;
          }
          if ( v8 )
            sub_140001660(v50.m512i_i64[v10 + 1], v8, 1);
LABEL_79:
          v54 = v50.m512i_i64[5];
          if ( !v50.m512i_i64[5] )
            break;
          v53 = v50.m512i_i64[6];
          if ( *(_QWORD *)v50.m512i_i64[6] )
            goto LABEL_81;
          goto LABEL_82;
        case 1LL:
          v29 = v50.m512i_i64[1];
          v30 = 2;
          if ( v50.m512i_i64[1] < 0 )
            v30 = v50.m512i_i64[1] ^ 0x8000000000000000uLL;
          if ( v30 == 1 )
          {
            v31 = 2;
            v29 = v50.m512i_i64[2];
          }
          else
          {
            v31 = 1;
            if ( v30 != 2 )
              goto LABEL_73;
          }
          if ( v29 )
            sub_140001660(v50.m512i_i64[v31 + 1], v29, 1);
LABEL_73:
          v54 = v50.m512i_i64[5];
          if ( v50.m512i_i64[5] )
          {
            v53 = v50.m512i_i64[6];
            if ( *(_QWORD *)v50.m512i_i64[6] )
LABEL_81:
              (*(void (__fastcall **)(__int64))v50.m512i_i64[6])(v54);
LABEL_82:
            v35 = *(_QWORD *)(v53 + 8);
            if ( v35 )
              sub_140001660(v54, v35, *(_QWORD *)(v53 + 16));
          }
          break;
        case 2LL:
          if ( v50.m512i_i64[1] > 0 )
            sub_140001660(v50.m512i_i64[2], v50.m512i_i64[1], 1);
          v54 = v50.m512i_i64[4];
          if ( !v50.m512i_i64[4] )
            break;
          v53 = v50.m512i_i64[5];
          if ( *(_QWORD *)v50.m512i_i64[5] )
            (*(void (__fastcall **)(__int64))v50.m512i_i64[5])(v54);
          goto LABEL_82;
        case 3LL:
          break;
        case 4LL:
          v28 = 2;
          if ( v50.m512i_i64[0] < 0 )
            v28 = v50.m512i_i64[0] ^ 0x8000000000000000uLL;
          if ( v28 == 1 )
          {
            v6 = v50.m512i_i64[1];
            v5 = (__m512i *)&v50.m512i_u64[1];
          }
          else if ( v28 != 2 )
          {
            goto LABEL_61;
          }
          if ( v6 )
            sub_140001660(v5->m512i_i64[1], v6, 1);
LABEL_61:
          v32 = 3;
          if ( v50.m512i_i64[4] > 0x8000000000000003uLL )
            v32 = v50.m512i_i64[4] + 0x7FFFFFFFFFFFFFFCLL;
          if ( v32 < 3 )
            break;
          if ( v32 != 3 )
            goto LABEL_69;
          v33 = 2;
          if ( v50.m512i_i64[4] < 0 )
            v33 = v50.m512i_i64[4] ^ 0x8000000000000000uLL;
          if ( v33 == 2 )
          {
            v34 = &v50.m512i_i64[4];
          }
          else
          {
            if ( v33 != 1 )
              break;
LABEL_69:
            v34 = &v50.m512i_i64[5];
          }
          if ( *v34 )
            sub_140001660(v34[1], *v34, 1);
          break;
        default:
          goto LABEL_3;
      }
    }
    if ( v37 )
      sub_140001660(v38, v37, 1);
    if ( v39 )
      sub_140001660(v40, v39, 1);
    v4 = (*v41)-- == 1;
    if ( !v4 )
      return sub_1401DB8B0(v36);
    goto LABEL_40;
  }
  return result;
}