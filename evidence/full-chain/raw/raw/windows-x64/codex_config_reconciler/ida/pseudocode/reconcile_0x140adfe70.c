// win 1.2.1 | module src/core/relay/codex_config_reconciler.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_config_reconciler::reconcile | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall reconcile(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdi
  __int64 v6; // r14
  __int64 v7; // r13
  char v8; // al
  __int64 v9; // r12
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r11
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // r10
  char v17; // r15
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  __int64 v24; // rcx
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int64 v27; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int128 v32; // xmm0
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rcx
  __int128 v38; // xmm0
  __int128 v39; // xmm1
  __int128 v40; // xmm2
  __int64 v41; // rcx
  _QWORD *v42; // r12
  __int64 v43; // rdx
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 *v46; // r12
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // [rsp+40h] [rbp-40h]
  __int64 v50; // [rsp+48h] [rbp-38h]
  __int64 v51; // [rsp+50h] [rbp-30h]
  __int64 v52; // [rsp+58h] [rbp-28h]
  __int128 v53; // [rsp+60h] [rbp-20h] BYREF
  __int128 v54; // [rsp+70h] [rbp-10h] BYREF
  __int128 v55; // [rsp+80h] [rbp+0h]
  __int128 v56; // [rsp+90h] [rbp+10h] BYREF
  __int128 v57; // [rsp+A0h] [rbp+20h]
  __int128 v58; // [rsp+B0h] [rbp+30h]
  __int128 v59; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v60; // [rsp+D0h] [rbp+50h] BYREF
  __int128 v61; // [rsp+E0h] [rbp+60h]
  __int64 v62; // [rsp+F0h] [rbp+70h]
  __int128 v63; // [rsp+100h] [rbp+80h] BYREF
  __int128 v64; // [rsp+110h] [rbp+90h]
  __int128 v65; // [rsp+120h] [rbp+A0h]
  __int128 v66; // [rsp+130h] [rbp+B0h]
  __int128 v67; // [rsp+140h] [rbp+C0h]
  __int128 v68; // [rsp+150h] [rbp+D0h]
  __int64 v69; // [rsp+168h] [rbp+E8h] BYREF
  _BYTE v70[88]; // [rsp+170h] [rbp+F0h]
  __int64 v71; // [rsp+1C8h] [rbp+148h]
  __int64 v72; // [rsp+1D0h] [rbp+150h]
  __int64 *v73; // [rsp+1D8h] [rbp+158h]
  __int64 *v74; // [rsp+1E0h] [rbp+160h]
  __int64 v75; // [rsp+1E8h] [rbp+168h]
  __int64 v76; // [rsp+1F0h] [rbp+170h]
  char v77; // [rsp+1FFh] [rbp+17Fh] BYREF
  __int64 v78; // [rsp+200h] [rbp+180h]

  v78 = -2; /*0x140adfe8b*/
  v3 = a3; /*0x140adfe96*/
  v4 = a2; /*0x140adfe99*/
  v6 = a3[1]; /*0x140adfe9f*/
  v7 = a3[3]; /*0x140adfea3*/
  if ( ((_BYTE)a3[6] & (v6 != 0)) != 1 ) /*0x140adfeb3*/
  {
    v11 = a2; /*0x140ae0045*/
LABEL_9:
    v13 = a3[4]; /*0x140ae0050*/
    v14 = *a3; /*0x140ae0054*/
    v16 = a3[2]; /*0x140ae0057*/
    v15 = -1; /*0x140ae005b*/
    LODWORD(v75) = 0; /*0x140ae0062*/
    v17 = 0; /*0x140ae006c*/
    goto LABEL_10; /*0x140ae006c*/
  }
  if ( !v7 ) /*0x140adfebc*/
  {
    v11 = a2; /*0x140ae004a*/
    v7 = 0; /*0x140ae004d*/
    goto LABEL_9; /*0x140ae004d*/
  }
  v8 = sub_14048ED60(a2); /*0x140adfec5*/
  v9 = *v3; /*0x140adfeca*/
  v10 = v3[2]; /*0x140adfecd*/
  write_catalog((unsigned int)&v53, v4, *v3, v6, v10, v7, v8 != 1); /*0x140adfeef*/
  if ( (_DWORD)v53 == -1 ) /*0x140adfef8*/
  {
    v15 = *((_QWORD *)&v53 + 1); /*0x140ae0330*/
    v52 = *((_QWORD *)&v54 + 1); /*0x140ae033c*/
    a3 = (__int64 *)v54; /*0x140ae033c*/
    v30 = v3[4]; /*0x140ae0340*/
    v51 = v30; /*0x140ae0344*/
    if ( *((_QWORD *)&v53 + 1) != -1 && v30 != 0 ) /*0x140ae034b*/
    {
      v74 = (__int64 *)v54; /*0x140ae035d*/
      v73 = (__int64 *)v54; /*0x140ae0364*/
      v76 = *((_QWORD *)&v53 + 1); /*0x140ae036b*/
      v72 = *((_QWORD *)&v53 + 1); /*0x140ae0372*/
      sub_1404187F0(&v69, v4); /*0x140ae0383*/
      v31 = v69; /*0x140ae0389*/
      v63 = *(_OWORD *)v70; /*0x140ae0397*/
      v64 = *(_OWORD *)&v70[16]; /*0x140ae03a5*/
      v65 = *(_OWORD *)&v70[32]; /*0x140ae03b3*/
      *(_QWORD *)&v66 = *(_QWORD *)&v70[48]; /*0x140ae03c1*/
      if ( v69 != -1 ) /*0x140ae03cc*/
      {
        v32 = *(_OWORD *)&v70[56]; /*0x140ae03ce*/
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v70[72]; /*0x140ae03dc*/
        *(_OWORD *)(a1 + 64) = v32; /*0x140ae03e0*/
        *(_QWORD *)(a1 + 56) = v66; /*0x140ae03eb*/
        v33 = v63; /*0x140ae03ef*/
        v34 = v64; /*0x140ae03f6*/
        *(_OWORD *)(a1 + 40) = v65; /*0x140ae0404*/
        *(_OWORD *)(a1 + 24) = v34; /*0x140ae0408*/
        *(_OWORD *)(a1 + 8) = v33; /*0x140ae040c*/
        *(_QWORD *)a1 = v31; /*0x140ae0410*/
        goto LABEL_29; /*0x140ae0410*/
      }
      v49 = v10; /*0x140ae0441*/
      v61 = v65; /*0x140ae045a*/
      v60 = v64; /*0x140ae045e*/
      v59 = v63; /*0x140ae0462*/
      v62 = v66; /*0x140ae046d*/
      v35 = *((_QWORD *)&v65 + 1); /*0x140ae0475*/
      v75 = v64; /*0x140ae0479*/
      if ( *((_QWORD *)&v65 + 1) | (unsigned __int64)v64 ) /*0x140ae0480*/
      {
        sub_140419AA0(&v69, v4); /*0x140ae0493*/
        v36 = v69; /*0x140ae0499*/
        v63 = *(_OWORD *)v70; /*0x140ae04a7*/
        v64 = *(_OWORD *)&v70[16]; /*0x140ae04b5*/
        v65 = *(_OWORD *)&v70[32]; /*0x140ae04c3*/
        v66 = *(_OWORD *)&v70[48]; /*0x140ae04d1*/
        v67 = *(_OWORD *)&v70[64]; /*0x140ae04df*/
        if ( v69 != -1 ) /*0x140ae04ea*/
        {
          v37 = *(_QWORD *)&v70[80]; /*0x140ae04f0*/
          *(_OWORD *)(a1 + 72) = v67; /*0x140ae04fe*/
          v38 = v63; /*0x140ae0502*/
          v39 = v64; /*0x140ae0509*/
          v40 = v65; /*0x140ae0510*/
          *(_OWORD *)(a1 + 56) = v66; /*0x140ae051e*/
          *(_OWORD *)(a1 + 40) = v40; /*0x140ae0522*/
          *(_OWORD *)(a1 + 24) = v39; /*0x140ae0526*/
          *(_OWORD *)(a1 + 8) = v38; /*0x140ae052a*/
          *(_QWORD *)a1 = v36; /*0x140ae052e*/
          *(_QWORD *)(a1 + 88) = v37; /*0x140ae0531*/
          sub_140334760(&v59); /*0x140ae0539*/
          if ( (_QWORD)v59 ) /*0x140ae0546*/
            sub_140001660(*((_QWORD *)&v59 + 1), 24 * v59, 8); /*0x140ae055a*/
          sub_140334760((char *)&v60 + 8); /*0x140ae0563*/
          if ( *((_QWORD *)&v60 + 1) ) /*0x140ae0570*/
            sub_140001660(v61, 24LL * *((_QWORD *)&v60 + 1), 8); /*0x140ae0588*/
LABEL_29:
          v27 = v76; /*0x140ae0413*/
          if ( !v76 ) /*0x140ae041d*/
            return a1; /*0x140ae041d*/
          goto LABEL_17; /*0x140ae041d*/
        }
        v53 = v63; /*0x140ae0677*/
        v54 = v64; /*0x140ae067b*/
        v55 = v65; /*0x140ae067f*/
        v56 = v66; /*0x140ae0683*/
        v57 = v67; /*0x140ae068e*/
        sub_140334760(&v63); /*0x140ae0699*/
        if ( (_QWORD)v53 ) /*0x140ae06a6*/
          sub_140001660(*((_QWORD *)&v53 + 1), 24 * v53, 8); /*0x140ae06ba*/
        sub_140334760((char *)&v54 + 8); /*0x140ae06c3*/
        if ( *((_QWORD *)&v54 + 1) ) /*0x140ae06d0*/
          sub_140001660(v55, 24LL * *((_QWORD *)&v54 + 1), 8); /*0x140ae06e4*/
        sub_140334760(&v56); /*0x140ae06ed*/
        if ( (_QWORD)v56 ) /*0x140ae06fa*/
          sub_140001660(*((_QWORD *)&v56 + 1), 24 * v56, 8); /*0x140ae070e*/
        v41 = *((_QWORD *)&v59 + 1); /*0x140ae0713*/
        v45 = v75; /*0x140ae0717*/
        if ( v75 ) /*0x140ae0721*/
        {
          v71 = v9; /*0x140ae0727*/
          v50 = *((_QWORD *)&v59 + 1); /*0x140ae072e*/
          v46 = (__int64 *)(*((_QWORD *)&v59 + 1) + 8LL); /*0x140ae0732*/
          do /*0x140ae073f*/
          {
            v47 = *(v46 - 1); /*0x140ae0741*/
            if ( v47 ) /*0x140ae0749*/
            {
              v48 = *v46; /*0x140ae074b*/
              v75 = v45; /*0x140ae0755*/
              sub_140001660(v48, v47, 1); /*0x140ae075c*/
              v45 = v75; /*0x140ae0761*/
            }
            v46 += 3; /*0x140ae0738*/
            --v45; /*0x140ae073c*/
          }
          while ( v45 ); /*0x140ae073f*/
          v9 = v71; /*0x140ae076a*/
          v41 = v50; /*0x140ae0771*/
        }
      }
      else
      {
        v41 = *((_QWORD *)&v59 + 1); /*0x140ae0592*/
      }
      v71 = v9; /*0x140ae0596*/
      if ( (_QWORD)v59 ) /*0x140ae05a4*/
        sub_140001660(v41, 24 * v59, 8); /*0x140ae05b4*/
      v75 = v61; /*0x140ae05bd*/
      if ( v35 ) /*0x140ae05c7*/
      {
        v42 = (_QWORD *)(v75 + 8); /*0x140ae05d0*/
        do /*0x140ae05e7*/
        {
          v43 = *(v42 - 1); /*0x140ae05e9*/
          if ( v43 ) /*0x140ae05f1*/
            sub_140001660(*v42, v43, 1); /*0x140ae05fd*/
          v42 += 3; /*0x140ae05e0*/
          --v35; /*0x140ae05e4*/
        }
        while ( v35 ); /*0x140ae05e7*/
      }
      v11 = v4; /*0x140ae0604*/
      LODWORD(v44) = DWORD2(v60); /*0x140ae0607*/
      if ( *((_QWORD *)&v60 + 1) ) /*0x140ae060e*/
        v44 = sub_140001660(v75, 24LL * *((_QWORD *)&v60 + 1), 8); /*0x140ae0625*/
      LOBYTE(v44) = 1; /*0x140ae062a*/
      LODWORD(v75) = v44; /*0x140ae062c*/
      v17 = 1; /*0x140ae0632*/
      v15 = v76; /*0x140ae0635*/
      a3 = v74; /*0x140ae063c*/
      v14 = v71; /*0x140ae0643*/
      v16 = v49; /*0x140ae064a*/
    }
    else
    {
      v14 = v9; /*0x140ae0428*/
      v11 = v4; /*0x140ae042b*/
      LOBYTE(v30) = 1; /*0x140ae042e*/
      LODWORD(v75) = v30; /*0x140ae0430*/
      v16 = v10; /*0x140ae0436*/
      v17 = 0; /*0x140ae0439*/
    }
    v13 = v51; /*0x140ae064e*/
    v4 = v52; /*0x140ae0652*/
    goto LABEL_10; /*0x140ae0656*/
  }
  v71 = v9; /*0x140adfefe*/
  v68 = v58; /*0x140adff09*/
  v67 = v57; /*0x140adff14*/
  v66 = v56; /*0x140adff2b*/
  v65 = v55; /*0x140adff32*/
  v64 = v54; /*0x140adff39*/
  v63 = v53; /*0x140adff40*/
  if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140adff55*/
  {
    *(_QWORD *)&v59 = &v63; /*0x140adff62*/
    *((_QWORD *)&v59 + 1) = sub_140B036A0; /*0x140adff6d*/
    v69 = 0; /*0x140adff71*/
    *(_QWORD *)v70 = aCodexmateLibCo_36; /*0x140adff83*/
    *(_QWORD *)&v70[8] = 51; /*0x140adff8a*/
    *(_QWORD *)&v70[16] = 0; /*0x140adff95*/
    *(_QWORD *)&v70[24] = aSrcCoreRelayCo_2; /*0x140adffa7*/
    *(_QWORD *)&v70[32] = 41; /*0x140adffae*/
    *(_QWORD *)&v70[40] = 2; /*0x140adffb9*/
    *(_QWORD *)&v70[48] = aCodexmateLibCo_36; /*0x140adffc4*/
    *(_QWORD *)&v70[56] = 51; /*0x140adffcb*/
    *(_QWORD *)&v70[64] = 0x2500000001LL; /*0x140adffe0*/
    *(_QWORD *)&v70[72] = &unk_1417AF901; /*0x140adffee*/
    *(_QWORD *)&v70[80] = &v59; /*0x140adfff9*/
    sub_1412C36A0(&v77, &v69); /*0x140ae000e*/
  }
  v11 = v4; /*0x140ae0014*/
  v12 = sub_140A8FF60(&v63); /*0x140ae001e*/
  v13 = v3[4]; /*0x140ae0023*/
  v14 = v71; /*0x140ae0027*/
  LOBYTE(v12) = 1; /*0x140ae002e*/
  LODWORD(v75) = v12; /*0x140ae0030*/
  v15 = -1; /*0x140ae0036*/
  v16 = v10; /*0x140ae003d*/
  v17 = 0; /*0x140ae0040*/
LABEL_10:
  v18 = nullptr; /*0x140ae006f*/
  if ( v15 != -1 ) /*0x140ae0075*/
    v18 = a3; /*0x140ae0075*/
  v19 = v3[5]; /*0x140ae0079*/
  *(_QWORD *)&v63 = v14; /*0x140ae007d*/
  *((_QWORD *)&v63 + 1) = v6; /*0x140ae0084*/
  *(_QWORD *)&v64 = v16; /*0x140ae008b*/
  *((_QWORD *)&v64 + 1) = v7; /*0x140ae0092*/
  *(_QWORD *)&v65 = v13; /*0x140ae0099*/
  *((_QWORD *)&v65 + 1) = v19; /*0x140ae00a0*/
  LOBYTE(v67) = v17; /*0x140ae00a7*/
  *(_QWORD *)&v66 = v18; /*0x140ae00ae*/
  *((_QWORD *)&v66 + 1) = v4; /*0x140ae00b5*/
  v74 = a3; /*0x140ae00bc*/
  v73 = a3; /*0x140ae00c3*/
  v76 = v15; /*0x140ae00ca*/
  v72 = v15; /*0x140ae00d1*/
  v20 = sub_140712590(v11); /*0x140ae00db*/
  if ( v20 ) /*0x140ae00e4*/
  {
    v69 = 2; /*0x140ae00e6*/
    *(_QWORD *)v70 = v20; /*0x140ae00f1*/
  }
  else
  {
    v21 = *(_QWORD *)(v11 + 72); /*0x140ae00fa*/
    v22 = *(_QWORD *)(v11 + 80); /*0x140ae00ff*/
    v73 = v74; /*0x140ae010b*/
    v72 = v76; /*0x140ae0119*/
    sub_140613050((unsigned int)&v69, v21, v22, (unsigned int)&unk_141752F44, 23, (__int64)&v63); /*0x140ae0143*/
    if ( v69 == -1 ) /*0x140ae0151*/
    {
      if ( !(_BYTE)v75 ) /*0x140ae01e5*/
      {
        v73 = v74; /*0x140ae01f2*/
        v72 = v76; /*0x140ae0200*/
        v29 = sub_140A4A500(v11); /*0x140ae020a*/
        if ( v29 ) /*0x140ae0213*/
        {
          *(_QWORD *)&v53 = v29; /*0x140ae0219*/
          if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x140ae022b*/
          {
            *(_QWORD *)&v63 = &v53; /*0x140ae0235*/
            *((_QWORD *)&v63 + 1) = sub_141490720; /*0x140ae0243*/
            v69 = 0; /*0x140ae024a*/
            *(_QWORD *)v70 = aCodexmateLibCo_36; /*0x140ae025c*/
            *(_QWORD *)&v70[8] = 51; /*0x140ae0263*/
            *(_QWORD *)&v70[16] = 0; /*0x140ae026e*/
            *(_QWORD *)&v70[24] = aSrcCoreRelayCo_2; /*0x140ae0280*/
            *(_QWORD *)&v70[32] = 41; /*0x140ae0287*/
            *(_QWORD *)&v70[40] = 2; /*0x140ae0292*/
            *(_QWORD *)&v70[48] = aCodexmateLibCo_36; /*0x140ae029d*/
            *(_QWORD *)&v70[56] = 51; /*0x140ae02a4*/
            *(_QWORD *)&v70[64] = 0x4800000001LL; /*0x140ae02b9*/
            *(_QWORD *)&v70[72] = &unk_1417AF9B5; /*0x140ae02c7*/
            *(_QWORD *)&v70[80] = &v63; /*0x140ae02ce*/
            sub_1412C36A0(&v77, &v69); /*0x140ae02e3*/
          }
          v73 = v74; /*0x140ae02f0*/
          v72 = v76; /*0x140ae02fe*/
          sub_140018650(&v53); /*0x140ae0309*/
        }
      }
      *(_BYTE *)(a1 + 8) = v17; /*0x140ae030f*/
      *(_QWORD *)a1 = -1; /*0x140ae0313*/
      v27 = v76; /*0x140ae031a*/
      if ( v76 == -1 ) /*0x140ae0325*/
        return a1; /*0x140ae0325*/
      goto LABEL_16; /*0x140ae0325*/
    }
  }
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v70[72]; /*0x140ae015e*/
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v70[56]; /*0x140ae0169*/
  v23 = v69; /*0x140ae016d*/
  v24 = *(_QWORD *)v70; /*0x140ae0174*/
  v25 = *(_OWORD *)&v70[8]; /*0x140ae017b*/
  v26 = *(_OWORD *)&v70[24]; /*0x140ae0182*/
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v70[40]; /*0x140ae0190*/
  *(_OWORD *)(a1 + 32) = v26; /*0x140ae0194*/
  *(_OWORD *)(a1 + 16) = v25; /*0x140ae0198*/
  *(_QWORD *)a1 = v23; /*0x140ae019c*/
  *(_QWORD *)(a1 + 8) = v24; /*0x140ae019f*/
  v27 = v76; /*0x140ae01a3*/
  if ( v76 == -1 ) /*0x140ae01ae*/
    return a1; /*0x140ae01ae*/
LABEL_16:
  if ( v27 ) /*0x140ae01b3*/
LABEL_17:
    sub_140001660(v74, v27, 1); /*0x140ae01b5*/
  return a1; /*0x140ae01ca*/
}