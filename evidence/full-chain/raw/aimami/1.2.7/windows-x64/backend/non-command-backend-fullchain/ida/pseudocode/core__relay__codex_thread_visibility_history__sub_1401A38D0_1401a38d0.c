// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | ea 0x1401a38d0 | name sub_1401A38D0
// win 1.2.7 | module src/core/relay/codex_thread_visibility_history.rs | attributed via panic-Location xref (win-native)
char *__fastcall sub_1401A38D0(__int64 a1, const char *a2, __int64 a3, __int64 a4)
{
  char *result; // rax
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m128 v14; // xmm1
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // r15
  __int64 v18; // r12
  __int64 v19; // rdx
  __int128 v20; // xmm0
  const char *v21; // rdi
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  __int128 v24; // xmm2
  __int64 v25; // [rsp+28h] [rbp-58h] BYREF
  __int128 v26; // [rsp+30h] [rbp-50h]
  __int128 v27; // [rsp+40h] [rbp-40h]
  unsigned __int128 v28; // [rsp+50h] [rbp-30h]
  __int64 v29; // [rsp+60h] [rbp-20h]
  __int128 v30; // [rsp+68h] [rbp-18h]
  __int64 v31; // [rsp+78h] [rbp-8h]
  __int128 v32; // [rsp+80h] [rbp+0h]
  __int128 v33; // [rsp+90h] [rbp+10h]
  unsigned __int64 v34; // [rsp+A0h] [rbp+20h]
  __int128 v35; // [rsp+B0h] [rbp+30h]
  __int64 v36; // [rsp+C0h] [rbp+40h]
  __int128 v37; // [rsp+D0h] [rbp+50h]
  __int64 v38; // [rsp+E0h] [rbp+60h]
  _QWORD v39[2]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v40; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v41; // [rsp+100h] [rbp+80h]
  __int64 v42; // [rsp+108h] [rbp+88h]
  int v43; // [rsp+114h] [rbp+94h] BYREF
  __int64 v44; // [rsp+11Ch] [rbp+9Ch]
  int v45; // [rsp+124h] [rbp+A4h]
  _BYTE v46[13]; // [rsp+128h] [rbp+A8h]
  char *v47; // [rsp+138h] [rbp+B8h]
  _OWORD v48[2]; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v49; // [rsp+160h] [rbp+E0h]
  __int64 v50; // [rsp+168h] [rbp+E8h] BYREF
  int v51; // [rsp+170h] [rbp+F0h]
  double v52; // [rsp+174h] [rbp+F4h] BYREF
  const char *v53; // [rsp+180h] [rbp+100h] BYREF
  __int64 v54; // [rsp+188h] [rbp+108h] BYREF
  const char *v55; // [rsp+190h] [rbp+110h]
  __int64 v56; // [rsp+198h] [rbp+118h]
  char **v57; // [rsp+1A0h] [rbp+120h]
  __int64 *v58; // [rsp+1A8h] [rbp+128h]
  _OWORD *v59; // [rsp+1B0h] [rbp+130h]
  __int64 v60; // [rsp+1B8h] [rbp+138h]
  __int64 v61; // [rsp+1C0h] [rbp+140h]
  __int64 v62; // [rsp+1C8h] [rbp+148h]
  __int64 v63; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v64; // [rsp+1D8h] [rbp+158h]
  __int64 v65; // [rsp+1E0h] [rbp+160h]
  _BYTE v66[96]; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v67; // [rsp+250h] [rbp+1D0h]
  __int64 v68; // [rsp+260h] [rbp+1E0h]
  __int64 v69; // [rsp+268h] [rbp+1E8h]
  __int64 v70; // [rsp+270h] [rbp+1F0h] BYREF
  __int128 v71; // [rsp+278h] [rbp+1F8h]
  __int64 v72; // [rsp+288h] [rbp+208h]
  const char *v73; // [rsp+290h] [rbp+210h] BYREF
  char v74; // [rsp+29Fh] [rbp+21Fh]
  __int64 v75; // [rsp+2A0h] [rbp+220h]

  v75 = -2;
  sub_140282430(v66);
  result = *(char **)v66;
  if ( *(_QWORD *)&v66[32] == -1 )
    goto LABEL_4;
  v36 = *(_QWORD *)&v66[24];
  v35 = *(_OWORD *)&v66[8];
  v32 = *(_OWORD *)&v66[40];
  v33 = *(_OWORD *)&v66[56];
  v9 = *(_QWORD *)&v66[80];
  v34 = *(_QWORD *)&v66[72];
  v10 = *(_QWORD *)&v66[88];
  v37 = v67;
  v38 = v68;
  if ( *(_DWORD *)&v66[32] == 2 )
  {
    result = (char *)sub_1416793A0(0, aRolloutIsMissi, 18);
LABEL_4:
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = result;
    return result;
  }
  v72 = v36;
  v71 = v35;
  v28 = __PAIR128__(*(unsigned __int64 *)&v66[80], v34);
  v27 = v33;
  v26 = v32;
  v30 = v37;
  v31 = v38;
  v70 = *(_QWORD *)v66;
  v25 = *(_QWORD *)&v66[32];
  v29 = *(_QWORD *)&v66[88];
  sub_140282430(v66);
  if ( *(_QWORD *)&v66[32] == -1 )
  {
    v11 = v66[0] & 3;
    if ( (unsigned int)(v11 - 2) >= 2 && (v66[0] & 3) != 0 )
    {
      v54 = *(_QWORD *)v66 - 1LL;
      LOBYTE(v53) = 3;
      sub_1416BCB00(&v54);
    }
    goto LABEL_18;
  }
  if ( *(_DWORD *)&v66[32] == 2 || *(_QWORD *)v66 == -1 )
  {
LABEL_18:
    nullsub_1(v11);
    result = (char *)sub_140001650(38, 1);
    if ( !result )
      sub_141938D2B(1, 38);
    qmemcpy(result, "cannot snapshot rollout before writing", 38);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 38;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 38;
    goto LABEL_35;
  }
  v12 = *(_QWORD *)&v66[8];
  v13 = *(_QWORD *)&v66[16];
  v14 = (__m128)*(unsigned __int64 *)&v66[64];
  v48[0] = *(_OWORD *)v66;
  v48[1] = *(_OWORD *)&v66[16];
  v49 = *(_QWORD *)&v66[88];
  _mm_storel_ps((double *)&v50, (__m128)*(unsigned __int64 *)&v66[80]);
  v51 = 1;
  _mm_storel_ps(&v52, v14);
  if ( ((v49 == v10) & (unsigned __int8)sub_1402899E0(v12, v13, v71, *((_QWORD *)&v71 + 1))) == 1 && v50 == v9 )
  {
    v17 = sub_141682A00(v71, *((_QWORD *)&v71 + 1));
    if ( v17 )
    {
      v18 = v16;
      sub_141568C20(&v53);
      *(_QWORD *)v66 = &v53;
      *(_QWORD *)&v66[8] = sub_141569D80;
      sub_1416ABFD0(&v40, &unk_1419D590A, v66);
      v69 = v41;
      sub_1416828D0((unsigned int)&v63, v17, v18, v41, v42);
      if ( v40 )
        sub_140001660(v69, v40, 1);
      v43 = 0;
      v44 = 0;
      v45 = 7;
      *(_QWORD *)v46 = 0;
      *(_QWORD *)&v46[5] = 0x100000001LL;
      result = (char *)sub_141690E40(&v43);
      if ( result == (char *)1 )
      {
        *(_QWORD *)a1 = 2;
        *(_QWORD *)(a1 + 8) = v19;
      }
      else
      {
        v53 = a2;
        v54 = a3;
        v55 = (const char *)&v70;
        v62 = v19;
        v56 = a4;
        v57 = (char **)&v63;
        v58 = &v25;
        v59 = v48;
        v60 = v17;
        v61 = v18;
        result = (char *)sub_1401B05A0(v66, &v53);
        if ( *(_DWORD *)v66 != -1 )
        {
          result = (char *)sub_141695140(v64, v65);
          v21 = result;
          v47 = result;
          if ( result )
          {
            v74 = 1;
            if ( (unsigned __int8)sub_1401C6A70(result) )
            {
              v73 = v21;
              if ( *(_QWORD *)off_1421E6EC0 >= 2u )
              {
                v39[0] = &v73;
                v39[1] = sub_1416BB0B0;
                v53 = aCodexmateLibCo_19;
                v54 = 68;
                v55 = aCodexmateLibCo_19;
                v56 = 68;
                v57 = &off_1419D5990;
                sub_140BAD520(&unk_1419D5922, v39, 2, &v53);
              }
              v74 = 0;
              result = (char *)sub_140032B80(&v73);
            }
            else
            {
              v53 = v21;
              v74 = 0;
              result = (char *)sub_140032B80(&v53);
            }
          }
        }
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v66[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v66[64];
        v22 = *(_OWORD *)v66;
        v23 = *(_OWORD *)&v66[16];
        v24 = *(_OWORD *)&v66[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v66[48];
        *(_OWORD *)(a1 + 32) = v24;
        *(_OWORD *)(a1 + 16) = v23;
        *(_OWORD *)a1 = v22;
      }
      if ( v63 )
        result = (char *)sub_140001660(v64, v63, 1);
    }
    else
    {
      sub_1401AEE90(v66);
      v20 = *(_OWORD *)v66;
      result = *(char **)&v66[16];
      *(_OWORD *)(a1 + 24) = *(_OWORD *)&v66[24];
      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v66[40];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v66[56];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v66[72];
      *(_QWORD *)(a1 + 88) = *(_QWORD *)&v66[88];
      *(_OWORD *)a1 = v20;
      *(_QWORD *)(a1 + 16) = result;
    }
  }
  else
  {
    LOBYTE(v15) = v49 == v10;
    nullsub_1(v15);
    result = (char *)sub_140001650(61, 1);
    if ( !result )
      sub_141938D2B(1, 61);
    qmemcpy(result, "rollout representation changed before writing; retry required", 61);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 61;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 61;
  }
  if ( *(_QWORD *)&v48[0] )
    result = (char *)sub_140001660(*((_QWORD *)&v48[0] + 1), *(_QWORD *)&v48[0], 1);
LABEL_35:
  if ( v70 )
    return (char *)sub_140001660(v71, v70, 1);
  return result;
}
