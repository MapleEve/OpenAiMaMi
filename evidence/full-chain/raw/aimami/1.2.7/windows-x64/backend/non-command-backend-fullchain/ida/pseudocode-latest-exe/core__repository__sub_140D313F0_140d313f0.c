// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d313f0 | successor of pre-update 0x1402159b0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.887, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140D313F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  int v6; // edx
  int v7; // ecx
  unsigned int v8; // ecx
  signed __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rbx
  const char *v15; // r14
  __int64 v17; // [rsp+20h] [rbp-60h] BYREF
  signed __int64 v18; // [rsp+28h] [rbp-58h] BYREF
  __int64 v19; // [rsp+30h] [rbp-50h]
  signed __int64 v20; // [rsp+38h] [rbp-48h]
  __int64 v21; // [rsp+40h] [rbp-40h]
  signed __int64 v22; // [rsp+48h] [rbp-38h]
  __int64 v23; // [rsp+50h] [rbp-30h]
  __int128 v24; // [rsp+58h] [rbp-28h]
  __int64 v25; // [rsp+68h] [rbp-18h]
  char v26[168]; // [rsp+70h] [rbp-10h] BYREF
  char v27; // [rsp+118h] [rbp+98h]
  _OWORD v28[6]; // [rsp+120h] [rbp+A0h] BYREF
  __int64 v29; // [rsp+180h] [rbp+100h] BYREF
  const char *v30; // [rsp+188h] [rbp+108h]
  __int64 v31; // [rsp+190h] [rbp+110h]
  __int64 v32; // [rsp+198h] [rbp+118h]
  const char *v33; // [rsp+1A0h] [rbp+120h]
  __int64 v34; // [rsp+1A8h] [rbp+128h]
  __int64 v35; // [rsp+1B0h] [rbp+130h]
  const char *v36; // [rsp+1B8h] [rbp+138h]
  __int64 v37; // [rsp+1C0h] [rbp+140h]
  __int64 v38; // [rsp+1C8h] [rbp+148h]
  void *v39; // [rsp+1D0h] [rbp+150h]
  _QWORD *v40; // [rsp+1D8h] [rbp+158h]
  __int128 v41; // [rsp+228h] [rbp+1A8h] BYREF
  __int128 v42; // [rsp+238h] [rbp+1B8h]
  __int128 v43; // [rsp+248h] [rbp+1C8h]
  __int128 v44; // [rsp+258h] [rbp+1D8h]
  __int128 v45; // [rsp+268h] [rbp+1E8h]
  __int128 v46; // [rsp+278h] [rbp+1F8h]
  _QWORD v47[2]; // [rsp+288h] [rbp+208h] BYREF
  _QWORD v48[3]; // [rsp+298h] [rbp+218h] BYREF
  char v49; // [rsp+2B7h] [rbp+237h] BYREF
  __int64 v50; // [rsp+2B8h] [rbp+238h]

  v50 = -2;
  sub_140719C90(&v17, a2, *(_QWORD *)(a3 + 32), *(_QWORD *)(a3 + 40));
  v5 = v17;
  if ( v17 == 2 )
    sub_140CB96B0(&v18);
  else
    sub_1419234B0(&v29, &v18, 168);
  v23 = 2;
  v17 = 0;
  v19 = 0;
  v21 = 0;
  v48[2] = v5;
  v25 = v5;
  sub_1419234B0(v26, &v29, 168);
  v27 = 0;
  sub_1414331D0(&v29);
  v6 = ((int)v29 >> 13) - 1;
  v7 = 0;
  if ( (int)v29 >> 13 <= 0 )
  {
    v8 = (1 - ((int)v29 >> 13)) / 0x190u + 1;
    v6 += 400 * v8;
    v7 = -146097 * v8;
  }
  v9 = 1000
     * (HIDWORD(v29)
      + 86400LL
      * (int)(((v6 / 100) >> 2) + ((1461 * v6) >> 2) + v7 + (((unsigned int)v29 >> 4) & 0x1FF) - v6 / 100 - 719163))
     + (unsigned int)v30 / 0xF4240uLL;
  v10 = *(_QWORD *)(a3 + 8);
  if ( *(_DWORD *)(a3 + 16) != 1 )
    goto LABEL_31;
  v11 = *(_QWORD *)(a3 + 24);
  v12 = 1000 * v11;
  if ( (unsigned __int64)(v11 - 1) >= 0x2540BE3FFLL )
    v12 = *(_QWORD *)(a3 + 24);
  if ( v9 < v12 || v9 - v12 >= 21600000 )
  {
LABEL_31:
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
    v17 = 1;
    v18 = v9;
    sub_140716360(&v41, *(_QWORD *)(a3 + 48), *(_QWORD *)(a3 + 56));
    if ( (_DWORD)v41 == -1 )
    {
      v19 = 1;
      v20 = v9;
      if ( *((_QWORD *)&v41 + 1) != 2 && (BYTE10(v42) == 0 || BYTE9(v42) != 2) | BYTE8(v41) & 1 )
      {
        v21 = 1;
        v22 = v9;
      }
      v23 = *((_QWORD *)&v41 + 1);
      v24 = v42;
    }
    else
    {
      v28[5] = v46;
      v28[4] = v45;
      v28[3] = v44;
      v28[2] = v43;
      v28[1] = v42;
      v28[0] = v41;
      v27 = 1;
      v14 = 17;
      v15 = (const char *)&unk_141A9639B;
      if ( (_QWORD)v41 == 6
        && ((unsigned __int8)sub_1412467D0((char *)v28 + 8) || (unsigned __int8)sub_141246860((char *)v28 + 8)) )
      {
        v14 = 7;
        v15 = aNetwork_5;
      }
      v48[0] = v15;
      v48[1] = v14;
      if ( *(_QWORD *)off_14223FF10 >= 2u )
      {
        v47[0] = v48;
        v47[1] = sub_140191200;
        v35 = 2;
        v36 = aCodexmateLibCo_44;
        v37 = 31;
        v39 = &unk_141A963AC;
        v40 = v47;
        v29 = 0;
        v30 = aCodexmateLibCo_44;
        v31 = 31;
        v32 = 0;
        v33 = aSrcCoreReposit;
        v34 = 22;
        v38 = 0xF9200000001LL;
        sub_141503E20(&v49, &v29);
      }
      sub_140CB96B0(v28);
    }
  }
  sub_1419234B0(a1, &v17, 256);
  return a1;
}
