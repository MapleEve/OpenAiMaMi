// win 1.2.7 | module src/core/sessions/health.rs | ea 0x140355b50 | name sub_140355B50
// win 1.2.7 | module src/core/sessions/health.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140355B50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  _QWORD *v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  unsigned __int64 v13; // r15
  int v14; // esi
  __int64 v15; // r14
  _QWORD *v16; // r13
  __int64 v17; // r15
  unsigned int v18; // esi
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rsi
  __int64 v22; // rdx
  _QWORD v23[2]; // [rsp+28h] [rbp-58h] BYREF
  _QWORD v24[2]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v25; // [rsp+48h] [rbp-38h]
  __int64 v26; // [rsp+50h] [rbp-30h]
  __int64 v27; // [rsp+58h] [rbp-28h]
  _BYTE v28[72]; // [rsp+60h] [rbp-20h] BYREF
  __int64 v29; // [rsp+A8h] [rbp+28h]
  void *v30; // [rsp+B0h] [rbp+30h]
  __int128 *v31; // [rsp+B8h] [rbp+38h]
  __int128 v32; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v33; // [rsp+D0h] [rbp+50h]
  __int128 v34; // [rsp+E0h] [rbp+60h]
  __int128 v35; // [rsp+F0h] [rbp+70h]
  __int128 v36; // [rsp+100h] [rbp+80h] BYREF
  __int128 v37; // [rsp+110h] [rbp+90h]
  __int64 v38; // [rsp+120h] [rbp+A0h]
  unsigned __int64 v39; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v40; // [rsp+138h] [rbp+B8h]
  _QWORD *v41; // [rsp+140h] [rbp+C0h]
  __int128 v42; // [rsp+148h] [rbp+C8h]
  __int128 v43; // [rsp+158h] [rbp+D8h]
  __int64 v44; // [rsp+168h] [rbp+E8h]
  __int128 v45; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v46; // [rsp+180h] [rbp+100h]
  __int64 v47; // [rsp+188h] [rbp+108h]
  __int128 v48; // [rsp+190h] [rbp+110h]
  __int128 v49; // [rsp+1A0h] [rbp+120h]
  __int64 v50; // [rsp+1B0h] [rbp+130h]
  __int128 v51; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v52; // [rsp+1D0h] [rbp+150h]
  __int64 v53; // [rsp+1D8h] [rbp+158h] BYREF
  _QWORD *v54; // [rsp+1E0h] [rbp+160h]
  char v55; // [rsp+1EFh] [rbp+16Fh] BYREF
  __int64 v56; // [rsp+1F0h] [rbp+170h]

  v56 = -2;
  v6 = a3;
  v26 = a2;
  v27 = a1;
  *(_QWORD *)&v51 = 0;
  *((_QWORD *)&v51 + 1) = 8;
  v52 = 0;
  v25 = a3 + 24 * a4;
  v47 = 0;
  if ( a3 != v25 )
  {
    while ( 1 )
    {
      v53 = v6;
      v23[0] = &v53;
      v23[1] = &unk_1419EA2D8;
      v24[0] = &off_1419EA298;
      v24[1] = &unk_1419EA2A8;
      sub_1402BA1E0(v28, v26, aUpdateLocalThr, 91);
      if ( *(_DWORD *)v28 != 1 )
        break;
      v13 = *(_QWORD *)&v28[8];
      v5 = *(_QWORD **)&v28[24];
      v4 = *(_QWORD *)&v28[16];
      v48 = *(_OWORD *)&v28[32];
      v49 = *(_OWORD *)&v28[48];
      v50 = *(_QWORD *)&v28[64];
LABEL_22:
      v6 += 24;
      if ( v13 == -1 )
      {
        v47 += v4;
        if ( v6 == v25 )
          goto LABEL_2;
      }
      else
      {
        v39 = v13;
        v40 = v4;
        v41 = v5;
        v44 = v50;
        v43 = v49;
        v42 = v48;
        if ( *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)&v32 = &v53;
          *((_QWORD *)&v32 + 1) = sub_140369D80;
          *(_QWORD *)&v33 = &v39;
          *((_QWORD *)&v33 + 1) = sub_141404740;
          *(_QWORD *)&v28[48] = 2;
          *(_QWORD *)&v28[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v28[64] = 37;
          v30 = &unk_1419EA353;
          v31 = &v32;
          *(_QWORD *)v28 = 0;
          *(_QWORD *)&v28[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v28[16] = 0x25u;
          *(_QWORD *)&v28[32] = aSrcCoreSession;
          *(_QWORD *)&v28[40] = 27;
          v29 = 0x6400000001LL;
          sub_1414D53A0(&v55, v28);
        }
        sub_1416AC440(&v45, v53);
        *(_QWORD *)&v36 = 0;
        *((_QWORD *)&v36 + 1) = 1;
        *(_QWORD *)&v37 = 0;
        *(_QWORD *)&v33 = 1610612768;
        *(_QWORD *)&v32 = &v36;
        *((_QWORD *)&v32 + 1) = &off_1419E98E0;
        if ( (unsigned __int8)sub_141404740(&v39, &v32) )
          sub_141939040(
            (unsigned int)aADisplayImplem_0,
            55,
            (unsigned int)&v55,
            (unsigned int)&unk_1419E6AE0,
            (__int64)&off_1419EB798);
        *(_QWORD *)&v28[40] = v37;
        *(_OWORD *)&v28[24] = v36;
        *(_OWORD *)v28 = v45;
        *(_QWORD *)&v28[16] = v46;
        v21 = v52;
        if ( v52 == (_QWORD)v51 )
          sub_14190F490(&v51);
        v9 = *((_QWORD *)&v51 + 1);
        v10 = 48 * v21;
        v11 = *(_OWORD *)v28;
        v12 = *(_OWORD *)&v28[16];
        *(_OWORD *)(*((_QWORD *)&v51 + 1) + v10 + 32) = *(_OWORD *)&v28[32];
        *(_OWORD *)(v9 + v10 + 16) = v12;
        *(_OWORD *)(v9 + v10) = v11;
        v52 = v21 + 1;
        sub_14029C280(&v39);
        if ( v6 == v25 )
          goto LABEL_2;
      }
    }
    v35 = *(_OWORD *)&v28[56];
    v34 = *(_OWORD *)&v28[40];
    v33 = *(_OWORD *)&v28[24];
    v32 = *(_OWORD *)&v28[8];
    v14 = sub_1417A9630(*(_QWORD *)&v28[64]);
    *(_QWORD *)&v45 = v23;
    if ( v14 )
    {
      sub_140E91D00(&v39, &v32, &v45, 1);
      v13 = v39;
      if ( v39 != -1
        || (*(_QWORD *)&v45 = v24, v15 = 2, v14 != 1) && (sub_140E91D00(&v39, &v32, &v45, 2), v13 = v39, v39 != -1) )
      {
        v15 = v40;
        v5 = v41;
        v36 = v42;
        v37 = v43;
        v38 = v44;
        goto LABEL_20;
      }
    }
    else
    {
      v15 = 1;
    }
    if ( (_DWORD)v15 == v14 )
    {
      v54 = v5;
      v16 = (_QWORD *)v32;
      v17 = *((_QWORD *)&v35 + 1);
      v18 = sub_1417AA120(*((_QWORD *)&v35 + 1));
      v19 = sub_1417AB3F0(v17);
      if ( v18 == 100 )
      {
        v13 = 0x8000000000000008uLL;
        v5 = v54;
      }
      else
      {
        if ( v18 == 101 )
        {
          if ( !v19 )
          {
            if ( *v16 >= 0x7FFFFFFFFFFFFFFFuLL )
              sub_141938FA0(&off_1419E6C60);
            ++*v16;
            v4 = sub_1417A3A00(v16[2]);
            --*v16;
            v13 = -1;
            v5 = v54;
            goto LABEL_21;
          }
          if ( *v16 >= 0x7FFFFFFFFFFFFFFFuLL )
            sub_141938FA0(&off_1419E6F28);
          ++*v16;
          v20 = v16[2];
          v54 = v16;
          sub_141404710(&v39, v20, v19);
          --*v54;
          v13 = v39;
          if ( v39 == -1 )
            sub_141939040(
              (unsigned int)aCalledResultUn_3,
              46,
              (unsigned int)&v55,
              (unsigned int)&unk_1419E6B00,
              (__int64)&off_1419E6C78);
        }
        else
        {
          if ( *v16 >= 0x7FFFFFFFFFFFFFFFuLL )
            sub_141938FA0(&off_1419E6F28);
          ++*v16;
          v22 = v16[2];
          v54 = v16;
          sub_141404710(&v39, v22, v18);
          --*v54;
          v13 = v39;
          if ( v39 == -1 )
            sub_141939040(
              (unsigned int)aCalledResultUn_3,
              46,
              (unsigned int)&v55,
              (unsigned int)&unk_1419E6B00,
              (__int64)&off_1419E6C90);
        }
        v4 = v40;
        v5 = v41;
        v48 = v42;
        v49 = v43;
        v50 = v44;
      }
LABEL_21:
      sub_14029C410(&v32);
      goto LABEL_22;
    }
    v5 = (_QWORD *)v14;
    v13 = 0x8000000000000013uLL;
LABEL_20:
    v50 = v38;
    v49 = v37;
    v48 = v36;
    v4 = v15;
    goto LABEL_21;
  }
LABEL_2:
  v7 = v27;
  *(_QWORD *)(v27 + 16) = v52;
  *(_OWORD *)v7 = v51;
  result = v47;
  *(_QWORD *)(v7 + 24) = v47;
  return result;
}
