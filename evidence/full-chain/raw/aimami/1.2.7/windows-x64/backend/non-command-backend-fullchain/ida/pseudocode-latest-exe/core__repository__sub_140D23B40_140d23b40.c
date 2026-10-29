// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140d23b40 | successor of pre-update 0x1401ef2a0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.931, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
void __fastcall sub_140D23B40(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // r12
  __int64 v12; // rcx
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  unsigned __int128 v16; // kr00_16
  __int64 v17; // rdx
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rbx
  void *v24; // rax
  __int64 v25; // r14
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // kr10_16
  __int64 v30; // rdx
  __int64 v31; // [rsp+30h] [rbp-50h] BYREF
  __int128 v32; // [rsp+38h] [rbp-48h]
  __int128 v33; // [rsp+48h] [rbp-38h]
  __int128 v34; // [rsp+58h] [rbp-28h]
  __int128 v35; // [rsp+68h] [rbp-18h]
  __int128 v36; // [rsp+78h] [rbp-8h]
  __int128 v37; // [rsp+88h] [rbp+8h]
  __int128 v38; // [rsp+98h] [rbp+18h]
  __int128 v39; // [rsp+A8h] [rbp+28h]
  __int128 v40; // [rsp+B8h] [rbp+38h]
  __int128 v41; // [rsp+C8h] [rbp+48h]
  __int64 v42; // [rsp+D8h] [rbp+58h]
  _QWORD v43[2]; // [rsp+E0h] [rbp+60h] BYREF
  _BYTE v44[8]; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v45; // [rsp+F8h] [rbp+78h]
  __int64 v46; // [rsp+100h] [rbp+80h]
  __int64 v47; // [rsp+110h] [rbp+90h]
  __int64 v48; // [rsp+118h] [rbp+98h]
  __int64 v49; // [rsp+128h] [rbp+A8h]
  __int64 v50; // [rsp+130h] [rbp+B0h]
  __int64 v51; // [rsp+140h] [rbp+C0h]
  __int64 v52; // [rsp+148h] [rbp+C8h]
  __int64 v53; // [rsp+158h] [rbp+D8h]
  __int64 v54; // [rsp+160h] [rbp+E0h]
  __int64 v55; // [rsp+170h] [rbp+F0h]
  __int64 v56; // [rsp+178h] [rbp+F8h]
  __int128 v57; // [rsp+190h] [rbp+110h] BYREF
  __int128 v58; // [rsp+1A0h] [rbp+120h]
  __int128 v59; // [rsp+1B0h] [rbp+130h]
  __int128 v60; // [rsp+1C0h] [rbp+140h]
  __int128 v61; // [rsp+1D0h] [rbp+150h]
  __int128 v62; // [rsp+1E0h] [rbp+160h]
  _BYTE v63[104]; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v64; // [rsp+2A8h] [rbp+228h]
  __int128 v65; // [rsp+2B8h] [rbp+238h]
  __int128 v66; // [rsp+2C8h] [rbp+248h]
  __int128 v67; // [rsp+2D8h] [rbp+258h]
  __int64 v68; // [rsp+2E8h] [rbp+268h]
  __int64 v69; // [rsp+2F0h] [rbp+270h]
  __int64 v70; // [rsp+2F8h] [rbp+278h]
  __int64 v71; // [rsp+300h] [rbp+280h]
  __int64 v72; // [rsp+308h] [rbp+288h]
  __int64 v73; // [rsp+310h] [rbp+290h]
  __int64 v74; // [rsp+318h] [rbp+298h]
  __int64 v75; // [rsp+320h] [rbp+2A0h]

  v75 = -2;
  v10 = a2[5];
  v11 = a2[6];
  sub_1416C49D0(v63, v10, v11);
  if ( *(_DWORD *)v63 == 2 )
  {
    if ( (v63[8] & 3u) - 2 >= 2 && (v63[8] & 3) != 0 )
    {
      --*(_QWORD *)&v63[8];
      v63[0] = 3;
      sub_1416EBAD0(&v63[8]);
    }
    *(_QWORD *)a1 = -1;
    return;
  }
  sub_1416CC450(v63, v10, v11);
  v12 = *(_QWORD *)&v63[8];
  if ( *(_QWORD *)v63 == -1 )
  {
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v12;
    return;
  }
  v71 = *(_QWORD *)v63;
  v13 = *(_QWORD *)&v63[16];
  v73 = *(_QWORD *)&v63[8];
  v57 = *(_OWORD *)&v63[8];
  v58 = 0;
  sub_140D8EBC0(v63, &v57);
  v14 = *(_QWORD *)&v63[8];
  if ( *(_QWORD *)v63 == -2 )
  {
    *(_QWORD *)a1 = 3;
    *(_QWORD *)(a1 + 8) = v14;
    v15 = v71;
    if ( !v71 )
      return;
    goto LABEL_38;
  }
  v70 = v13;
  v72 = a4;
  v16 = *(_OWORD *)v63;
  sub_1419234B0(v44, &v63[16], 160);
  v74 = v16;
  v69 = v16 >> 64;
  v43[0] = v16;
  v43[1] = *((_QWORD *)&v16 + 1);
  if ( !(unsigned __int8)sub_14071CE40(v43)
    && !(unsigned __int8)sub_140719130(v43)
    && (unsigned __int8)sub_14071C530(v43) )
  {
    sub_140719C90(v63, v43, v10, v11);
    v57 = *(_OWORD *)&v63[8];
    v58 = *(_OWORD *)&v63[24];
    v59 = *(_OWORD *)&v63[40];
    v60 = *(_OWORD *)&v63[56];
    v61 = *(_OWORD *)&v63[72];
    v62 = *(_OWORD *)&v63[88];
    if ( *(_QWORD *)v63 == 2 )
    {
      *(_OWORD *)(a1 + 80) = v62;
      *(_OWORD *)(a1 + 64) = v61;
      v18 = v57;
      v19 = v58;
      v20 = v59;
      *(_OWORD *)(a1 + 48) = v60;
      *(_OWORD *)(a1 + 32) = v20;
      *(_OWORD *)(a1 + 16) = v19;
      *(_OWORD *)a1 = v18;
      v21 = v74;
      if ( v74 <= 0 )
        goto LABEL_19;
      goto LABEL_18;
    }
    v22 = v68;
    v42 = v68;
    v41 = v67;
    v40 = v66;
    v39 = v65;
    v38 = v64;
    v32 = v57;
    v33 = v58;
    v34 = v59;
    v35 = v60;
    v36 = v61;
    v37 = v62;
    v31 = *(_QWORD *)v63;
    v23 = v74;
    if ( (_QWORD)v60 != a6 || (unsigned int)sub_141923B40(*((_QWORD *)&v34 + 1), a5, a6) )
    {
      nullsub_1(v22, v17);
      v24 = (void *)sub_140001650(50, 1);
      if ( !v24 )
        sub_14196B2DB(1, 50);
      qmemcpy(v24, "Live account changed while handing off credentials", 50);
      *(_QWORD *)a1 = 10;
      *(_QWORD *)(a1 + 8) = 50;
      *(_QWORD *)(a1 + 16) = v24;
      *(_QWORD *)(a1 + 24) = 50;
      goto LABEL_44;
    }
    sub_14071E1C0((unsigned int)v63, a3, v72, a2[41], a2[42]);
    v25 = v70;
    if ( *(_DWORD *)v63 != -1 )
    {
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v63[80];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v63[64];
      v26 = *(_OWORD *)v63;
      v27 = *(_OWORD *)&v63[16];
      v28 = *(_OWORD *)&v63[32];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v63[48];
      *(_OWORD *)(a1 + 32) = v28;
      *(_OWORD *)(a1 + 16) = v27;
      *(_OWORD *)a1 = v26;
      goto LABEL_44;
    }
    sub_140718ED0(&v57, a3, v72);
    if ( (_QWORD)v57 == -2 )
    {
      sub_140CB3B10(&v57);
    }
    else
    {
      sub_1419234B0(v63, &v57, 176);
      if ( (unsigned __int8)sub_140EBCBC0(v63, v43) )
      {
        *(_QWORD *)a1 = -1;
        sub_1400378C0(&v57);
        goto LABEL_44;
      }
      sub_1400378C0(&v57);
    }
    sub_1416CC450(v63, a3, v72);
    v29 = *(_OWORD *)v63;
    if ( *(_QWORD *)v63 == -1 )
    {
      sub_140418430(-1, *(_QWORD *)&v63[8]);
    }
    else
    {
      if ( *(_QWORD *)&v63[16] == v25 && !(unsigned int)sub_141923B40(*(_QWORD *)&v63[8], v73, v25) )
      {
        if ( (_QWORD)v29 )
          sub_140001660(*((_QWORD *)&v29 + 1), v29, 1);
        *(_QWORD *)a1 = -1;
        v23 = v74;
        goto LABEL_44;
      }
      if ( (_QWORD)v29 )
        sub_140001660(*((_QWORD *)&v29 + 1), v29, 1);
    }
    if ( (sub_1407C8880(a3, v72, v73, v25) & 1) == 0 )
    {
      sub_1407B9160(v30);
      *(_QWORD *)a1 = -1;
      sub_140037800(&v31);
      sub_1400378C0(v43);
      v15 = v71;
      if ( !v71 )
        return;
LABEL_38:
      sub_140001660(v73, v15, 1);
      return;
    }
    *(_QWORD *)a1 = 2;
    *(_QWORD *)(a1 + 8) = v30;
LABEL_44:
    sub_140037800(&v31);
    v21 = v23;
    if ( v23 <= 0 )
      goto LABEL_19;
    goto LABEL_18;
  }
  *(_QWORD *)a1 = -1;
  v21 = v74;
  if ( v74 > 0 )
LABEL_18:
    sub_140001660(v69, v21, 1);
LABEL_19:
  if ( v45 != -1 && v45 )
    sub_140001660(v46, v45, 1);
  if ( v47 != -1 && v47 )
    sub_140001660(v48, v47, 1);
  if ( v49 != -1 && v49 )
    sub_140001660(v50, v49, 1);
  if ( v51 != -1 && v51 )
    sub_140001660(v52, v51, 1);
  if ( v53 != -1 && v53 )
    sub_140001660(v54, v53, 1);
  if ( v55 != -1 && v55 )
    sub_140001660(v56, v55, 1);
  v15 = v71;
  if ( v71 )
    goto LABEL_38;
}
