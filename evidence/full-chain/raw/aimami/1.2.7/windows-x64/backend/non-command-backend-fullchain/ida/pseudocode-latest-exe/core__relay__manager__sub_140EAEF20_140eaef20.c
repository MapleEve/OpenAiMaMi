// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140eaef20 | successor of pre-update 0x140d91890 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.843, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
_QWORD *__fastcall sub_140EAEF20(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r15
  _QWORD *v5; // rbx
  _BYTE *v6; // r14
  __int64 v7; // r12
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r12d
  _OWORD *v14; // rbx
  _OWORD *v15; // rax
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // rdx
  __int64 v20; // rcx
  bool v21; // zf
  __int64 v22; // r12
  void *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  _BYTE *v32; // rcx
  _OWORD *v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  _OWORD *v36; // rdi
  __int64 v37; // r15
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int64 v40; // rax
  __int64 v41; // r14
  char v42; // of
  __int64 v43; // rt0
  __int64 v44; // rax
  _BYTE v46[384]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v47[6]; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v48; // [rsp+200h] [rbp+180h]
  __int64 v49; // [rsp+210h] [rbp+190h]
  _BYTE v50[312]; // [rsp+320h] [rbp+2A0h] BYREF
  _BYTE v51[56]; // [rsp+4A8h] [rbp+428h] BYREF
  __m256i v52; // [rsp+4E0h] [rbp+460h]
  __int128 *v53; // [rsp+500h] [rbp+480h]
  __int128 v54; // [rsp+508h] [rbp+488h]
  __int64 v55; // [rsp+518h] [rbp+498h]
  __int16 v56; // [rsp+520h] [rbp+4A0h]
  char v57; // [rsp+522h] [rbp+4A2h]
  __int64 v58; // [rsp+528h] [rbp+4A8h]
  __int64 v59; // [rsp+530h] [rbp+4B0h]
  __int64 v60; // [rsp+538h] [rbp+4B8h]
  __int64 v61; // [rsp+540h] [rbp+4C0h]
  __int128 v62; // [rsp+5E0h] [rbp+560h]
  __int16 v63; // [rsp+608h] [rbp+588h]
  int v64; // [rsp+610h] [rbp+590h]
  __int16 v65; // [rsp+614h] [rbp+594h]
  __int16 v66; // [rsp+626h] [rbp+5A6h]
  __int128 v67; // [rsp+640h] [rbp+5C0h] BYREF
  __int128 v68; // [rsp+650h] [rbp+5D0h]
  __int128 v69; // [rsp+660h] [rbp+5E0h]
  __int128 v70; // [rsp+670h] [rbp+5F0h]
  __int128 v71; // [rsp+680h] [rbp+600h]
  __int64 v72; // [rsp+690h] [rbp+610h]
  _OWORD *v73; // [rsp+698h] [rbp+618h]
  _QWORD *v74; // [rsp+6B0h] [rbp+630h]
  __int64 v75; // [rsp+6B8h] [rbp+638h]
  _QWORD *v76; // [rsp+6C0h] [rbp+640h]
  _QWORD *v77; // [rsp+6C8h] [rbp+648h]
  _OWORD *v78; // [rsp+6D8h] [rbp+658h]
  __int128 v79; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v80; // [rsp+6F0h] [rbp+670h]
  __int64 v81; // [rsp+6F8h] [rbp+678h]
  _QWORD *v82; // [rsp+700h] [rbp+680h]
  _BYTE *v83; // [rsp+708h] [rbp+688h]
  __int64 v84; // [rsp+710h] [rbp+690h]
  _BYTE *v85; // [rsp+718h] [rbp+698h]
  bool v86; // [rsp+723h] [rbp+6A3h]
  char v87; // [rsp+724h] [rbp+6A4h]
  char v88; // [rsp+725h] [rbp+6A5h]
  char v89; // [rsp+729h] [rbp+6A9h] BYREF
  char v90; // [rsp+72Ah] [rbp+6AAh]
  char v91; // [rsp+72Bh] [rbp+6ABh]
  char v92; // [rsp+72Ch] [rbp+6ACh]
  char v93; // [rsp+72Dh] [rbp+6ADh]
  char v94; // [rsp+72Eh] [rbp+6AEh]
  char v95; // [rsp+72Fh] [rbp+6AFh]
  __int64 v96; // [rsp+730h] [rbp+6B0h]

  v96 = -2;
  v77 = a2;
  v5 = a2 + 2;
  v93 = 1;
  sub_14074A8D0((__int64)v50, a2 + 2);
  if ( *(_QWORD *)v50 != -1 )
  {
    v6 = v50;
    sub_1419234B0(v46, v50, 384);
    sub_1419234B0(v47, v50, 384);
LABEL_3:
    v85 = v6;
    v84 = -1;
    v95 = 1;
    v94 = 1;
    if ( (unsigned __int8)sub_140746EE0(v5, v47) )
    {
      v85 = v6;
      v84 = -1;
      v95 = 1;
      v94 = 1;
      sub_140747E70(v51, v5, v47);
      if ( *(_QWORD *)v51 == -1 )
      {
        v85 = v6;
        v84 = -1;
        v95 = 1;
        v94 = 1;
        sub_1407B9160(*(_QWORD *)&v51[8]);
      }
      else
      {
        *(_QWORD *)&v50[88] = v53;
        *(__m256i *)&v50[56] = v52;
        *(_OWORD *)&v50[40] = *(_OWORD *)&v51[40];
        *(_OWORD *)&v50[24] = *(_OWORD *)&v51[24];
        *(_OWORD *)&v50[8] = *(_OWORD *)&v51[8];
        *(_QWORD *)v50 = *(_QWORD *)v51;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v83 = v6;
          *(_QWORD *)&v67 = v50;
          *((_QWORD *)&v67 + 1) = sub_140D76130;
          *(_QWORD *)&v51[48] = 2;
          v52.m256i_i64[0] = (__int64)aCodexmateLibCo_50;
          v52.m256i_i64[1] = 35;
          v52.m256i_i64[3] = (__int64)&unk_141AA083E;
          v53 = &v67;
          *(_QWORD *)v51 = 0;
          *(_QWORD *)&v51[8] = aCodexmateLibCo_50;
          *(_OWORD *)&v51[16] = 0x23u;
          *(_QWORD *)&v51[32] = aSrcCoreRelayMa_4;
          *(_QWORD *)&v51[40] = 25;
          v52.m256i_i64[2] = 0xCE00000001LL;
          sub_141503E20(&v89, v51);
          v6 = v83;
        }
        v85 = v6;
        v84 = -1;
        v95 = 1;
        v94 = 1;
        sub_140D8A3A0(v50);
      }
    }
    v8 = a2[103];
    v9 = a2[104];
    v85 = v6;
    v84 = -1;
    v95 = 1;
    v94 = 1;
    v7 = -1;
    if ( (unsigned __int8)sub_1416B1B00(v8, v9) )
    {
      v85 = v6;
      v84 = -1;
      v95 = 1;
      v94 = 1;
      sub_140D6FA70(&v67, v5, v47);
      if ( (_QWORD)v67 != -1 )
      {
        *(_QWORD *)&v50[16] = v68;
        *(_OWORD *)v50 = v67;
        if ( *(_QWORD *)off_14223FF10 >= 2u )
        {
          v83 = v6;
          *(_QWORD *)&v79 = v50;
          *((_QWORD *)&v79 + 1) = sub_1400015F0;
          *(_QWORD *)&v51[48] = 2;
          v52.m256i_i64[0] = (__int64)aCodexmateLibCo_50;
          v52.m256i_i64[1] = 35;
          v52.m256i_i64[3] = (__int64)&unk_141AA086F;
          v53 = &v79;
          *(_QWORD *)v51 = 0;
          *(_QWORD *)&v51[8] = aCodexmateLibCo_50;
          *(_OWORD *)&v51[16] = 0x23u;
          *(_QWORD *)&v51[32] = aSrcCoreRelayMa_4;
          *(_QWORD *)&v51[40] = 25;
          v52.m256i_i64[2] = 0xD300000001LL;
          sub_141503E20(&v89, v51);
          v6 = v83;
        }
        if ( *(_QWORD *)v50 )
          sub_140001660(*(_QWORD *)&v50[8], *(_QWORD *)v50, 1);
      }
    }
    goto LABEL_19;
  }
  v47[5] = *(_OWORD *)&v50[88];
  v47[4] = *(_OWORD *)&v50[72];
  v47[3] = *(_OWORD *)&v50[56];
  v47[2] = *(_OWORD *)&v50[40];
  v47[1] = *(_OWORD *)&v50[24];
  v47[0] = *(_OWORD *)&v50[8];
  *(_QWORD *)&v67 = v47;
  *((_QWORD *)&v67 + 1) = sub_140D76130;
  sub_1416DAFA0(v51, &unk_141AA079E, &v67);
  v79 = *(_OWORD *)v51;
  v80 = *(_QWORD *)&v51[16];
  if ( *(_QWORD *)off_14223FF10 )
  {
    *(_QWORD *)&v67 = &v79;
    *((_QWORD *)&v67 + 1) = sub_1400015F0;
    *(_QWORD *)&v51[48] = 1;
    v52.m256i_i64[0] = (__int64)aCodexmateLibCo_50;
    v52.m256i_i64[1] = 35;
    v52.m256i_i64[3] = (__int64)&unk_141AA0825;
    v53 = &v67;
    *(_QWORD *)v51 = 0;
    *(_QWORD *)&v51[8] = aCodexmateLibCo_50;
    *(_OWORD *)&v51[16] = 0x23u;
    *(_QWORD *)&v51[32] = aSrcCoreRelayMa_4;
    *(_QWORD *)&v51[40] = 25;
    v52.m256i_i64[2] = 0xC200000001LL;
    sub_141503E20(&v89, v51);
  }
  v64 = 16;
  *(_QWORD *)v51 = 0;
  *(_QWORD *)&v51[8] = 8;
  *(_OWORD *)&v51[16] = 0;
  *(_QWORD *)&v51[32] = 8;
  *(_OWORD *)&v51[40] = 0;
  v52.m256i_i64[0] = 1;
  *(_OWORD *)&v52.m256i_u64[1] = 0;
  v52.m256i_i64[3] = 1;
  v53 = nullptr;
  *(_QWORD *)&v54 = -1;
  v56 = 0;
  v57 = 0;
  v65 = 0;
  v66 = 256;
  v58 = 0;
  v59 = 8;
  v60 = 0;
  v61 = -1;
  v62 = 0;
  v63 = -2;
  sub_1416DB410(&v67, &v79);
  v55 = v68;
  v54 = v67;
  sub_1419234B0(v46, v51, 384);
  v6 = *((_BYTE **)&v79 + 1);
  v7 = v79;
  v2 = v80;
  v93 = 1;
  sub_140D8A3A0(v47);
  sub_1419234B0(v47, v46, 384);
  if ( v7 == -1 )
    goto LABEL_3;
LABEL_19:
  v85 = v6;
  v84 = v7;
  v95 = 1;
  v94 = 1;
  sub_14152E2A0(v51);
  v81 = v7;
  v83 = v6;
  v10 = sub_14152E270(v51, 2, &off_141AA08A0);
  *(_WORD *)(v10 + 201) = 257;
  sub_14040E930(v10, aAimamiRelayRt, 15);
  sub_14152E490(&v67, v10);
  v13 = v67;
  if ( (_QWORD)v67 == 2 )
  {
    v78 = nullptr;
    if ( (BYTE8(v67) & 3u) - 2 >= 2 && (BYTE8(v67) & 3) != 0 )
    {
      *(_QWORD *)&v50[8] = *((_QWORD *)&v67 + 1) - 1LL;
      v50[0] = 3;
      sub_1416EBAD0(&v50[8]);
    }
    v14 = nullptr;
  }
  else
  {
    *(_OWORD *)&v50[80] = v71;
    *(_OWORD *)&v50[64] = v70;
    *(_OWORD *)&v50[48] = v69;
    *(_OWORD *)&v50[32] = v68;
    *(_OWORD *)&v50[16] = v67;
    *(_QWORD *)v50 = 1;
    *(_QWORD *)&v50[8] = 1;
    nullsub_1(v12, v11);
    v15 = (_OWORD *)sub_140001650(96, 8);
    if ( !v15 )
      sub_14196B2C1(8, 96);
    v14 = v15;
    v15[5] = *(_OWORD *)&v50[80];
    v15[4] = *(_OWORD *)&v50[64];
    v16 = *(_OWORD *)v50;
    v17 = *(_OWORD *)&v50[16];
    v18 = *(_OWORD *)&v50[32];
    v15[3] = *(_OWORD *)&v50[48];
    v15[2] = v18;
    v15[1] = v17;
    *v15 = v16;
    v78 = v15;
  }
  v92 = 1;
  v91 = 1;
  v90 = 1;
  sub_140036CE0(v51);
  v21 = v13 == 2;
  v22 = v81;
  if ( v21 )
  {
    nullsub_1(v20, v19);
    v23 = (void *)sub_140001650(47, 1);
    if ( !v23 )
    {
      v92 = 1;
      v91 = 1;
      v90 = 1;
      sub_14196B2DB(1, 47);
    }
    qmemcpy(v23, "relay tokio runtime init failed; proxy disabled", 47);
    *(_QWORD *)v50 = 47;
    *(_QWORD *)&v50[8] = v23;
    *(_QWORD *)&v50[16] = 47;
    if ( *(_QWORD *)off_14223FF10 )
    {
      *(_QWORD *)&v67 = v50;
      *((_QWORD *)&v67 + 1) = sub_1400015F0;
      *(_QWORD *)&v51[48] = 1;
      v52.m256i_i64[0] = (__int64)aCodexmateLibCo_50;
      v52.m256i_i64[1] = 35;
      v52.m256i_i64[3] = (__int64)&unk_141AA08F6;
      v53 = &v67;
      *(_QWORD *)v51 = 0;
      *(_QWORD *)&v51[8] = aCodexmateLibCo_50;
      *(_OWORD *)&v51[16] = 0x23u;
      *(_QWORD *)&v51[32] = aSrcCoreRelayMa_4;
      *(_QWORD *)&v51[40] = 25;
      v52.m256i_i64[2] = 0xE000000001LL;
      sub_141503E20(&v89, v51);
      v22 = v81;
    }
    if ( (_QWORD)v48 == -1 )
    {
      v49 = *(_QWORD *)&v50[16];
      v48 = *(_OWORD *)v50;
    }
    else if ( *(_QWORD *)v50 )
    {
      sub_140001660(*(_QWORD *)&v50[8], *(_QWORD *)v50, 1);
    }
  }
  v76 = a2;
  sub_1419234B0(&v50[6], v47, 384);
  *(_QWORD *)v51 = 1;
  *(_QWORD *)&v51[8] = 1;
  *(_WORD *)&v51[16] = 0;
  sub_1419234B0(&v51[18], v50, 390);
  nullsub_1(v25, v24);
  v26 = sub_140001650(408, 8);
  v86 = v26 == 0;
  if ( !v26 )
  {
    v82 = a2;
    sub_14196B2C1(8, 408);
  }
  v27 = v26;
  sub_1419234B0(v26, v51, 408);
  v75 = v27;
  nullsub_1(v29, v28);
  v30 = (_QWORD *)sub_140001650(40, 8);
  v32 = v83;
  if ( !v30 )
  {
    v82 = (_QWORD *)v27;
    sub_14196B2C1(8, 40);
  }
  *v30 = 1;
  v30[1] = 1;
  v30[2] = v22;
  v30[3] = v32;
  v30[4] = v2;
  v82 = v30;
  v74 = v30;
  *(_QWORD *)v51 = 1;
  *(_QWORD *)&v51[8] = 1;
  *(_WORD *)&v51[16] = 0;
  *(_QWORD *)&v51[24] = 0;
  nullsub_1(v32, v31);
  v33 = (_OWORD *)sub_140001650(48, 8);
  if ( !v33 )
    sub_14196B2C1(8, 48);
  v36 = v33;
  v37 = v27;
  v38 = *(_OWORD *)v51;
  v39 = *(_OWORD *)&v51[16];
  v33[2] = *(_OWORD *)&v51[32];
  v33[1] = v39;
  *v33 = v38;
  *(_QWORD *)&v79 = v33;
  nullsub_1(v35, v34);
  v40 = sub_140001650(24, 8);
  if ( !v40 )
  {
    v73 = v36;
    v88 = 1;
    sub_14196B2C1(8, 24);
  }
  v41 = v40;
  *(_QWORD *)v40 = 1;
  *(_QWORD *)(v40 + 8) = 1;
  *(_WORD *)(v40 + 16) = 0;
  *(_QWORD *)&v67 = v40;
  v42 = 0;
  if ( dword_1422392C8 )
  {
    v72 = v40;
    v87 = 1;
    sub_141940F01(&qword_1422392C0);
  }
  v43 = _InterlockedIncrement64((volatile signed __int64 *)qword_1422392C0);
  if ( (v43 < 0) ^ v42 | (v43 == 0) )
    BUG();
  *(_QWORD *)v50 = qword_1422392C0;
  *(_QWORD *)v51 = v14;
  v44 = sub_1408D8BD0();
  *a1 = a2;
  a1[1] = v37;
  a1[2] = v82;
  a1[3] = v36;
  a1[4] = v41;
  a1[5] = *(_QWORD *)v50;
  a1[7] = *(_QWORD *)v51;
  a1[6] = v44;
  return a1;
}
