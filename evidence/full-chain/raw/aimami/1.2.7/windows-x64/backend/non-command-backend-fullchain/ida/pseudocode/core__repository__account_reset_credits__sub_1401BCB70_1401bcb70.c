// win 1.2.7 | module src/core/repository/account_reset_credits.rs | ea 0x1401bcb70 | name sub_1401BCB70
// win 1.2.7 | module src/core/repository/account_reset_credits.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401BCB70(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // r13
  __int64 v13; // r12
  __int64 v14; // r15
  void *v15; // rax
  __int64 v17; // r15
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm2
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm2
  __int64 v24; // r14
  __int128 v25; // kr00_16
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm0
  __int128 v29; // xmm1
  __int128 v30; // xmm0
  __int128 v31; // xmm1
  __int128 v32; // xmm2
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  _QWORD v36[30]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v37; // [rsp+120h] [rbp+A0h] BYREF
  __int128 v38; // [rsp+128h] [rbp+A8h]
  __int128 v39; // [rsp+138h] [rbp+B8h]
  __int128 v40; // [rsp+148h] [rbp+C8h]
  __int128 v41; // [rsp+158h] [rbp+D8h]
  __int128 v42; // [rsp+168h] [rbp+E8h]
  __int128 v43; // [rsp+178h] [rbp+F8h]
  __int128 v44; // [rsp+188h] [rbp+108h]
  __int128 v45; // [rsp+198h] [rbp+118h]
  __int128 v46; // [rsp+1A8h] [rbp+128h]
  __int128 v47; // [rsp+1B8h] [rbp+138h]
  __int64 v48; // [rsp+1C8h] [rbp+148h]
  _OWORD v49[5]; // [rsp+1D0h] [rbp+150h] BYREF
  __int64 v50; // [rsp+220h] [rbp+1A0h]
  __int128 v51; // [rsp+230h] [rbp+1B0h]
  __int128 v52; // [rsp+240h] [rbp+1C0h]
  __int128 v53; // [rsp+250h] [rbp+1D0h]
  __int128 v54; // [rsp+260h] [rbp+1E0h]
  __int128 v55; // [rsp+270h] [rbp+1F0h]
  __int128 v56; // [rsp+280h] [rbp+200h]
  _BYTE v57[104]; // [rsp+290h] [rbp+210h] BYREF
  _BYTE v58[72]; // [rsp+2F8h] [rbp+278h] BYREF
  __int64 v59; // [rsp+340h] [rbp+2C0h]
  __int64 v60; // [rsp+348h] [rbp+2C8h]
  _BYTE v61[104]; // [rsp+380h] [rbp+300h] BYREF
  __int128 v62; // [rsp+3E8h] [rbp+368h] BYREF
  __int128 v63; // [rsp+3F8h] [rbp+378h]
  __int128 v64; // [rsp+408h] [rbp+388h]
  __int128 v65; // [rsp+418h] [rbp+398h]
  __int64 v66; // [rsp+428h] [rbp+3A8h]
  _BYTE v67[104]; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v68; // [rsp+4D8h] [rbp+458h]
  __int128 v69; // [rsp+4E8h] [rbp+468h]
  __int128 v70; // [rsp+4F8h] [rbp+478h]
  __int128 v71; // [rsp+508h] [rbp+488h]
  __int64 v72; // [rsp+518h] [rbp+498h]
  __int64 v73; // [rsp+520h] [rbp+4A0h]
  char v74; // [rsp+52Fh] [rbp+4AFh]
  __int64 v75; // [rsp+530h] [rbp+4B0h]

  v75 = -2;
  sub_1401C7E40(v61, a2[37], a2[38]);
  v8 = *(_QWORD *)v61;
  *(_OWORD *)v57 = *(_OWORD *)&v61[8];
  *(_OWORD *)&v57[16] = *(_OWORD *)&v61[24];
  *(_OWORD *)&v57[32] = *(_OWORD *)&v61[40];
  *(_OWORD *)&v57[48] = *(_OWORD *)&v61[56];
  *(_OWORD *)&v57[64] = *(_OWORD *)&v61[72];
  *(_QWORD *)&v57[80] = *(_QWORD *)&v61[88];
  if ( *(_QWORD *)v61 == -1 )
  {
    v50 = *(_QWORD *)&v57[80];
    v49[4] = *(_OWORD *)&v57[64];
    v49[3] = *(_OWORD *)&v57[48];
    v49[2] = *(_OWORD *)&v57[32];
    v49[1] = *(_OWORD *)&v57[16];
    v49[0] = *(_OWORD *)v57;
    if ( !*(_QWORD *)&v57[16] )
    {
LABEL_11:
      nullsub_1();
      v15 = (void *)sub_140001650(30, 1);
      if ( !v15 )
        sub_141938D2B(1, 30);
      qmemcpy(v15, "Account is no longer available", 30);
      *(_QWORD *)a1 = 9;
      *(_QWORD *)(a1 + 8) = 30;
      *(_QWORD *)(a1 + 16) = v15;
      *(_QWORD *)(a1 + 24) = 30;
      goto LABEL_13;
    }
    v12 = 0;
    while ( *(_QWORD *)(*((_QWORD *)&v49[0] + 1) + v12 + 208) != a4
         || (unsigned int)sub_1418F4B70(*(_QWORD *)(*((_QWORD *)&v49[0] + 1) + v12 + 200), a3) )
    {
      v12 += 424;
      if ( 424LL * *(_QWORD *)&v57[16] == v12 )
        goto LABEL_11;
    }
    v13 = *(_QWORD *)(*((_QWORD *)&v49[0] + 1) + v12 + 224);
    v14 = *(_QWORD *)(*((_QWORD *)&v49[0] + 1) + v12 + 232);
    sub_140ED9AE0((unsigned int)v61, v13, v14, a2[41], a2[42]);
    if ( *(_DWORD *)v61 == -1 )
    {
      sub_141695550(v61, v13, v14);
      if ( *(_DWORD *)v61 == 2 )
      {
        *(_QWORD *)v57 = 2;
        *(_QWORD *)&v57[8] = *(_QWORD *)&v61[8];
      }
      else
      {
        if ( (v61[76] & 0x10) == 0 && ((*(_DWORD *)&v61[80] & 0x20000000) == 0 || (*(_WORD *)&v61[76] & 0x400) == 0) )
          goto LABEL_19;
        *(_QWORD *)v67 = v13;
        *(_QWORD *)&v67[8] = v14;
        *(_QWORD *)v61 = v67;
        *(_QWORD *)&v61[8] = sub_14169F630;
        sub_1416ABFD0(&v57[8], &unk_141A5A094, v61);
        *(_QWORD *)v57 = 9;
      }
    }
    else
    {
      *(_OWORD *)&v57[80] = *(_OWORD *)&v61[80];
      *(_OWORD *)&v57[64] = *(_OWORD *)&v61[64];
      *(_OWORD *)&v57[48] = *(_OWORD *)&v61[48];
      *(_OWORD *)&v57[32] = *(_OWORD *)&v61[32];
      *(_OWORD *)&v57[16] = *(_OWORD *)&v61[16];
      *(_OWORD *)v57 = *(_OWORD *)v61;
      if ( *(_QWORD *)v61 == -1 )
      {
LABEL_19:
        sub_1401F4E80(v61, v13, v14);
        v17 = *(_QWORD *)v61;
        *(_OWORD *)v67 = *(_OWORD *)&v61[8];
        *(_OWORD *)&v67[16] = *(_OWORD *)&v61[24];
        *(_OWORD *)&v67[32] = *(_OWORD *)&v61[40];
        *(_OWORD *)&v67[48] = *(_OWORD *)&v61[56];
        *(_OWORD *)&v67[64] = *(_OWORD *)&v61[72];
        *(_OWORD *)&v67[80] = *(_OWORD *)&v61[88];
        if ( *(_QWORD *)v61 != -1 )
        {
          sub_1418F44E0(v58, &v62, 136);
          *(_OWORD *)&v57[8] = *(_OWORD *)v67;
          *(_OWORD *)&v57[24] = *(_OWORD *)&v67[16];
          *(_OWORD *)&v57[40] = *(_OWORD *)&v67[32];
          *(_OWORD *)&v57[56] = *(_OWORD *)&v67[48];
          *(_OWORD *)&v57[72] = *(_OWORD *)&v67[64];
          *(_OWORD *)&v57[88] = *(_OWORD *)&v67[80];
          *(_QWORD *)v57 = v17;
          sub_140222A30(v61, v57, a3, a4);
          *(_OWORD *)v67 = *(_OWORD *)&v61[8];
          *(_OWORD *)&v67[16] = *(_OWORD *)&v61[24];
          *(_OWORD *)&v67[32] = *(_OWORD *)&v61[40];
          *(_OWORD *)&v67[48] = *(_OWORD *)&v61[56];
          *(_OWORD *)&v67[64] = *(_OWORD *)&v61[72];
          *(_OWORD *)&v67[80] = *(_OWORD *)&v61[88];
          if ( *(_QWORD *)v61 == -2 )
          {
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v67[80];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v67[64];
            v18 = *(_OWORD *)v67;
            v19 = *(_OWORD *)&v67[16];
            v20 = *(_OWORD *)&v67[32];
            *(_OWORD *)(a1 + 48) = *(_OWORD *)&v67[48];
            *(_OWORD *)(a1 + 32) = v20;
            *(_OWORD *)(a1 + 16) = v19;
            *(_OWORD *)a1 = v18;
            goto LABEL_37;
          }
          v48 = v66;
          v47 = v65;
          v46 = v64;
          v45 = v63;
          v44 = v62;
          v38 = *(_OWORD *)v67;
          v39 = *(_OWORD *)&v67[16];
          v40 = *(_OWORD *)&v67[32];
          v41 = *(_OWORD *)&v67[48];
          v42 = *(_OWORD *)&v67[64];
          v43 = *(_OWORD *)&v67[80];
          v37 = *(_QWORD *)v61;
          sub_1401F4E80(v36, a2[5], a2[6]);
          v24 = v36[0];
          if ( v36[0] == -1 )
          {
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v73 = v36[0];
              *(_QWORD *)v61 = aCodexmateLibCo_22;
              *(_QWORD *)&v61[8] = 54;
              *(_QWORD *)&v61[16] = aCodexmateLibCo_22;
              *(_QWORD *)&v61[24] = 54;
              *(_QWORD *)&v61[32] = &off_1419D8B08;
              v74 = 1;
              sub_140BAD520(aAimamiAccounts_2, 203, 2, v61);
            }
            sub_14018FD30(v36);
          }
          else
          {
            if ( LODWORD(v36[0]) != 2 && v36[7] == a4 && !(unsigned int)sub_1418F4B70(v36[6], a3) )
            {
              v73 = v24;
              sub_140222A30(v61, v36, a3, a4);
              v51 = *(_OWORD *)&v61[8];
              v52 = *(_OWORD *)&v61[24];
              v53 = *(_OWORD *)&v61[40];
              v54 = *(_OWORD *)&v61[56];
              v55 = *(_OWORD *)&v61[72];
              v56 = *(_OWORD *)&v61[88];
              if ( *(_QWORD *)v61 == -2 )
              {
                *(_OWORD *)(a1 + 80) = v56;
                *(_OWORD *)(a1 + 64) = v55;
                v33 = v51;
                v34 = v52;
                v35 = v53;
                *(_OWORD *)(a1 + 48) = v54;
                *(_OWORD *)(a1 + 32) = v35;
                *(_OWORD *)(a1 + 16) = v34;
                *(_OWORD *)a1 = v33;
                sub_140195330(v36);
LABEL_36:
                sub_140195410(&v37);
LABEL_37:
                if ( v59 != -1 && v59 )
                  sub_140001660(v60, v59, 1);
                if ( (_DWORD)v17 != 2 )
                  sub_140034220(v57);
                goto LABEL_13;
              }
              v72 = v66;
              v71 = v65;
              v70 = v64;
              v69 = v63;
              v68 = v62;
              *(_OWORD *)&v67[8] = v51;
              *(_OWORD *)&v67[24] = v52;
              *(_OWORD *)&v67[40] = v53;
              *(_OWORD *)&v67[56] = v54;
              *(_OWORD *)&v67[72] = v55;
              *(_OWORD *)&v67[88] = v56;
              *(_QWORD *)v67 = *(_QWORD *)v61;
              if ( (unsigned __int8)sub_1402C22D0(&v37, v67) )
              {
                sub_140195410(v67);
              }
              else
              {
                sub_140195410(&v37);
                sub_1418F44E0(&v37, v67, 176);
              }
            }
            sub_140195330(v36);
          }
          sub_140ED7FA0(v67, &v37);
          if ( *(_QWORD *)v67 == -1 )
          {
            sub_1401B1160(v61);
            *(_OWORD *)(a1 + 80) = *(_OWORD *)&v61[80];
            *(_OWORD *)(a1 + 64) = *(_OWORD *)&v61[64];
            v30 = *(_OWORD *)v61;
            v31 = *(_OWORD *)&v61[16];
            v32 = *(_OWORD *)&v61[32];
            *(_OWORD *)(a1 + 48) = *(_OWORD *)&v61[48];
            *(_OWORD *)(a1 + 32) = v32;
            *(_OWORD *)(a1 + 16) = v31;
            *(_OWORD *)a1 = v30;
          }
          else
          {
            v28 = *(_OWORD *)v67;
            v29 = *(_OWORD *)&v67[16];
            *(_OWORD *)(a1 + 40) = *(_OWORD *)&v67[32];
            *(_OWORD *)(a1 + 24) = v29;
            *(_OWORD *)(a1 + 8) = v28;
            *(_QWORD *)a1 = -1;
          }
          goto LABEL_36;
        }
        *(_OWORD *)(a1 + 80) = *(_OWORD *)&v67[80];
        *(_OWORD *)(a1 + 64) = *(_OWORD *)&v67[64];
        v21 = *(_OWORD *)v67;
        v22 = *(_OWORD *)&v67[16];
        v23 = *(_OWORD *)&v67[32];
        *(_OWORD *)(a1 + 48) = *(_OWORD *)&v67[48];
        *(_OWORD *)(a1 + 32) = v23;
        *(_OWORD *)(a1 + 16) = v22;
        *(_OWORD *)a1 = v21;
LABEL_13:
        sub_140033D80(v49);
        return a1;
      }
    }
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v57[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v57[64];
    v25 = *(_OWORD *)v57;
    v26 = *(_OWORD *)&v57[16];
    v27 = *(_OWORD *)&v57[32];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v57[48];
    *(_OWORD *)(a1 + 32) = v27;
    *(_OWORD *)(a1 + 16) = v26;
    *(_OWORD *)a1 = v25;
    goto LABEL_13;
  }
  *(_QWORD *)(a1 + 88) = *(_QWORD *)&v57[80];
  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v57[64];
  v9 = *(_OWORD *)v57;
  v10 = *(_OWORD *)&v57[16];
  v11 = *(_OWORD *)&v57[32];
  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v57[48];
  *(_OWORD *)(a1 + 40) = v11;
  *(_OWORD *)(a1 + 24) = v10;
  *(_OWORD *)(a1 + 8) = v9;
  *(_QWORD *)a1 = v8;
  return a1;
}
