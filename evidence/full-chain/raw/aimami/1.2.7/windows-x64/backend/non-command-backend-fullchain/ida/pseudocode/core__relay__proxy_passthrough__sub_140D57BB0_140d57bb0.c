// win 1.2.7 | module src/core/relay/proxy_passthrough.rs | ea 0x140d57bb0 | name sub_140D57BB0
// win 1.2.7 | module src/core/relay/proxy_passthrough.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140D57BB0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 *v5; // r12
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r13
  char *v13; // r15
  _BYTE *v14; // r8
  _BYTE *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // r13
  unsigned __int64 v26; // r12
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int16 v29; // r14
  __int16 v30; // r15
  const __m128i *v31; // rdi
  __m128i *v32; // rax
  __int64 v33; // r8
  __int64 v34; // r9
  void (__fastcall *v35)(_BYTE *, _QWORD, _QWORD); // rax
  __int16 v36; // cx
  __int128 v37; // rax
  __int128 v38; // kr10_16
  __int64 v39; // rcx
  _OWORD *v40; // rax
  char v41; // di
  char v42; // bl
  __int64 v43; // rdx
  __int128 v44; // xmm1
  __int128 v45; // xmm2
  __int128 v46; // xmm3
  __int64 v47; // rcx
  char result; // al
  bool v49; // zf
  _OWORD v50[6]; // [rsp+30h] [rbp-50h] BYREF
  __int128 v51; // [rsp+90h] [rbp+10h]
  __int128 v52; // [rsp+A0h] [rbp+20h]
  __int128 v53; // [rsp+B0h] [rbp+30h]
  __int128 v54; // [rsp+C0h] [rbp+40h]
  __int128 v55; // [rsp+D0h] [rbp+50h]
  __int128 v56; // [rsp+E0h] [rbp+60h]
  __int128 v57; // [rsp+F0h] [rbp+70h]
  __int64 v58; // [rsp+100h] [rbp+80h]
  __m128i v59; // [rsp+108h] [rbp+88h] BYREF
  _OWORD v60[2]; // [rsp+118h] [rbp+98h] BYREF
  __int128 v61; // [rsp+138h] [rbp+B8h] BYREF
  __int128 v62; // [rsp+148h] [rbp+C8h]
  __int128 v63; // [rsp+158h] [rbp+D8h]
  __int128 v64; // [rsp+168h] [rbp+E8h]
  __int128 v65; // [rsp+178h] [rbp+F8h]
  __int64 v66; // [rsp+188h] [rbp+108h]
  __m128i v67; // [rsp+190h] [rbp+110h] BYREF
  __int64 v68; // [rsp+1A0h] [rbp+120h]
  __int128 v69; // [rsp+1A8h] [rbp+128h]
  unsigned __int64 v70; // [rsp+1B8h] [rbp+138h]
  __int128 v71; // [rsp+1C0h] [rbp+140h]
  __int64 v72; // [rsp+1D0h] [rbp+150h]
  __int64 v73; // [rsp+1D8h] [rbp+158h]
  __int64 v74; // [rsp+1E0h] [rbp+160h]
  __int16 v75; // [rsp+1E8h] [rbp+168h]
  _BYTE v76[112]; // [rsp+1F0h] [rbp+170h] BYREF
  __int128 v77; // [rsp+260h] [rbp+1E0h]
  _BYTE v78[224]; // [rsp+270h] [rbp+1F0h] BYREF
  _BYTE v79[112]; // [rsp+380h] [rbp+300h] BYREF
  __int128 v80; // [rsp+3F0h] [rbp+370h]
  __int64 v81; // [rsp+400h] [rbp+380h]
  __int128 v82; // [rsp+490h] [rbp+410h] BYREF
  __int128 v83; // [rsp+4A0h] [rbp+420h]
  __int128 v84; // [rsp+4B0h] [rbp+430h]
  __int128 v85; // [rsp+4C0h] [rbp+440h]
  __int128 v86; // [rsp+4D0h] [rbp+450h]
  __int128 v87; // [rsp+4E0h] [rbp+460h]
  _BYTE *v88; // [rsp+4F8h] [rbp+478h]
  _BYTE *v89; // [rsp+500h] [rbp+480h]
  __int64 v90; // [rsp+508h] [rbp+488h]
  char v91; // [rsp+517h] [rbp+497h] BYREF
  _BYTE *v92; // [rsp+518h] [rbp+498h]
  __int64 v93; // [rsp+520h] [rbp+4A0h]
  int v94; // [rsp+528h] [rbp+4A8h] BYREF
  __int16 v95; // [rsp+52Ch] [rbp+4ACh]
  _BYTE *v96; // [rsp+530h] [rbp+4B0h]
  __int64 v97; // [rsp+538h] [rbp+4B8h]
  __int64 v98; // [rsp+540h] [rbp+4C0h]
  char v99; // [rsp+54Ch] [rbp+4CCh]
  char v100; // [rsp+54Dh] [rbp+4CDh]
  char v101; // [rsp+54Eh] [rbp+4CEh]
  char v102; // [rsp+54Fh] [rbp+4CFh]
  __int64 v103; // [rsp+550h] [rbp+4D0h]

  v103 = -2;
  v4 = *(unsigned __int8 *)(a2 + 136);
  v97 = a2;
  switch ( v4 )
  {
    case 0LL:
      v98 = a3;
      v5 = *(__int64 **)(a2 + 112);
      v6 = a2;
      v7 = *(_QWORD *)(a2 + 120);
      v8 = *(_QWORD *)(a2 + 128);
      v9 = *(unsigned __int8 *)(a2 + 137);
      v10 = *(_QWORD *)(v6 + 96);
      v11 = *(_QWORD *)(v6 + 104);
      v12 = 8 * v9 + 47;
      v13 = aHttpsChatgptCo;
      if ( (_DWORD)v9 )
        v13 = &aHttpsChatgptCo[47];
      *(_QWORD *)(v6 + 32) = v13;
      *(_QWORD *)(v6 + 40) = v12;
      *(_QWORD *)(v6 + 48) = v10;
      *(_QWORD *)(v6 + 56) = v11;
      *(_QWORD *)(v6 + 64) = v5;
      *(_QWORD *)(v6 + 72) = v7;
      *(_QWORD *)(v6 + 80) = v8;
      v14 = (_BYTE *)(v6 + 89);
      *(_BYTE *)(v6 + 89) = 0;
LABEL_7:
      *(_BYTE *)(v6 + 88) = 0;
      *(_QWORD *)v6 = v10;
      *(_QWORD *)(v6 + 8) = v11;
      v96 = v14;
      v88 = v14;
      if ( (unsigned __int8)sub_140DB8BD0(v7) )
      {
        v88 = v96;
        sub_140DB8220((__int128 *)v76);
        goto LABEL_45;
      }
      v15 = v96;
      v89 = v96;
      sub_140DBA0B0(v50, v7);
      *(_BYTE *)(v97 + 88) = 1;
      v16 = *v5;
      v92 = v15;
      sub_140CAF8C0((unsigned int)v79, v16, (unsigned int)&unk_141A433A0, (_DWORD)v13, v12);
      *(_BYTE *)(v97 + 88) = 0;
      v87 = v50[5];
      v86 = v50[4];
      v85 = v50[3];
      v84 = v50[2];
      v83 = v50[1];
      v82 = v50[0];
      v92 = v15;
      sub_141259870(v78, v79, &v82);
      v92 = v15;
      sub_140CB5130(v79, v78, v8);
      v92 = v15;
      v17 = sub_1412597A0(v79);
      v18 = v97;
      *(_QWORD *)(v97 + 16) = v17;
      *(_QWORD *)(v18 + 24) = v19;
      a2 = v18;
      a3 = v98;
LABEL_11:
      sub_14126C5E0(v79, a2 + 16, a3);
      v20 = *(_QWORD *)v79;
      if ( *(_QWORD *)v79 == -2 )
      {
        *v96 = 3;
        v21 = v97;
LABEL_46:
        *a1 = -1;
        result = 3;
        goto LABEL_47;
      }
      v22 = *(_QWORD *)&v79[8];
      v51 = *(_OWORD *)&v79[16];
      v52 = *(_OWORD *)&v79[32];
      v53 = *(_OWORD *)&v79[48];
      v54 = *(_OWORD *)&v79[64];
      v55 = *(_OWORD *)&v79[80];
      v56 = *(_OWORD *)&v79[96];
      v57 = v80;
      v58 = v81;
      v23 = *(_QWORD *)(v97 + 16);
      v24 = *(_QWORD *)(v97 + 24);
      v92 = v96;
      sub_140D1A820(v23, v24);
      if ( (_DWORD)v20 == -1 )
      {
        *(_QWORD *)&v82 = v22;
        *(_QWORD *)v78 = &v82;
        *(_QWORD *)&v78[8] = sub_14122E940;
        sub_1416ABFD0(v79, &unk_141A494BF, v78);
        v93 = *(_QWORD *)&v79[8];
        v98 = *(_QWORD *)v79;
        sub_140DB8220((__int128 *)v76);
        if ( v98 )
          sub_140001660(v93, v98, 1);
        v92 = v96;
        sub_140D19140(v82);
      }
      else
      {
        v64 = v56;
        v66 = v58;
        v65 = v57;
        v63 = v55;
        v62 = v54;
        v61 = v53;
        v60[1] = v52;
        v60[0] = v51;
        v59.m128i_i64[0] = v20;
        v59.m128i_i64[1] = v22;
        v25 = v55;
        v26 = 4 * v55;
        v27 = 0x7FFFFFFFFFFFFFFELL;
        LOBYTE(v27) = (unsigned __int64)v55 >> 62 != 0 || (unsigned __int64)(4 * v55) > 0x7FFFFFFFFFFFFFFELL;
        if ( (_BYTE)v27 )
        {
          v28 = 0;
          goto LABEL_16;
        }
        v29 = WORD4(v64);
        v30 = WORD4(v63);
        v90 = 4 * v55;
        v98 = v55;
        if ( v26 )
        {
          v31 = *((const __m128i **)&v62 + 1);
          nullsub_1(v27);
          v28 = 2;
          v32 = (__m128i *)sub_140001650(v26, 2);
          if ( !v32 )
          {
LABEL_16:
            v99 = 1;
            sub_141938D2B(v28, v26);
          }
          v93 = (__int64)v32;
          if ( v25 )
            sub_1418F44E0(v32, v31, v26);
        }
        else
        {
          v93 = 2;
        }
        sub_1403F0BA0(v78, (char *)v60 + 8);
        sub_1403F09D0(v79, &v61);
        v75 = v30;
        v73 = v93;
        v74 = v98;
        v69 = *(_OWORD *)v78;
        v70 = *(_QWORD *)&v78[16];
        v71 = *(_OWORD *)v79;
        v72 = *(_QWORD *)&v79[16];
        v67 = v59;
        v68 = *(_QWORD *)&v60[0];
        v102 = 1;
        sub_140D29110(v79, aXModelsEtag, 13, &v67);
        if ( v79[0] )
        {
          if ( *(_QWORD *)&v79[16] >= v70 )
          {
            v102 = 1;
            sub_1419390C3(*(_QWORD *)&v79[16], v70, &off_141A426F8);
          }
          v33 = *(_QWORD *)v97;
          v34 = *(_QWORD *)(v97 + 8);
          v102 = 1;
          sub_140DB7580((__int64)&v82, *((_QWORD *)&v69 + 1) + 104LL * *(_QWORD *)&v79[16] + 24, v33, v34);
          *(_QWORD *)v79 = &v67;
          *(_OWORD *)&v79[8] = v82;
          *(_OWORD *)&v79[24] = v83;
          *(_QWORD *)&v79[40] = v84;
          v102 = 1;
          sub_140CB9F10(v78, aXModelsEtag, 13, v79);
          if ( v78[32] == 0xFF )
          {
            v102 = 1;
            sub_141939040(
              (unsigned int)aSizeOverflowsM,
              23,
              (unsigned int)&v91,
              (unsigned int)&unk_141A49818,
              (__int64)&off_141A42490);
          }
          *(_QWORD *)&v79[32] = *(_QWORD *)&v78[32];
          *(_OWORD *)&v79[16] = *(_OWORD *)&v78[16];
          *(_OWORD *)v79 = *(_OWORD *)v78;
          if ( v78[32] != 2 )
          {
            v35 = *(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v79 + 32LL);
            v102 = 1;
            v35(&v79[24], *(_QWORD *)&v79[8], *(_QWORD *)&v79[16]);
          }
        }
        v102 = 1;
        sub_14164BEA0(v79);
        v82 = *(_OWORD *)&v79[8];
        v83 = *(_OWORD *)&v79[24];
        v84 = *(_OWORD *)&v79[40];
        v85 = *(_OWORD *)&v79[56];
        v86 = *(_OWORD *)&v79[72];
        v87 = *(_OWORD *)&v79[88];
        v36 = *(_WORD *)&v79[104];
        v94 = *(_DWORD *)&v79[106];
        v95 = *(_WORD *)&v79[110];
        if ( *(_QWORD *)v79 != -1 )
        {
          v36 = 200;
          if ( (unsigned __int16)(v29 - 1000) >= 0xFC7Cu )
            v36 = v29;
          v87 = *(_OWORD *)&v79[88];
          v86 = *(_OWORD *)&v79[72];
          v85 = *(_OWORD *)&v79[56];
          v84 = *(_OWORD *)&v79[40];
          v83 = *(_OWORD *)&v79[24];
          v82 = *(_OWORD *)&v79[8];
          v94 = *(_DWORD *)&v79[106];
          v95 = *(_WORD *)&v79[110];
        }
        *(_QWORD *)v78 = *(_QWORD *)v79;
        *(_OWORD *)&v78[8] = v82;
        *(_OWORD *)&v78[24] = v83;
        *(_OWORD *)&v78[40] = v84;
        *(_OWORD *)&v78[56] = v85;
        *(_OWORD *)&v78[72] = v86;
        *(_OWORD *)&v78[88] = v87;
        *(_WORD *)&v78[104] = v36;
        *(_DWORD *)&v78[106] = v94;
        *(_WORD *)&v78[110] = v95;
        v101 = 0;
        v100 = 1;
        sub_140DB9B80(v79, &v67, v78);
        *(_OWORD *)&v78[96] = *(_OWORD *)&v79[96];
        *(_OWORD *)&v78[80] = *(_OWORD *)&v79[80];
        *(_OWORD *)&v78[64] = *(_OWORD *)&v79[64];
        *(_OWORD *)&v78[48] = *(_OWORD *)&v79[48];
        *(_OWORD *)&v78[32] = *(_OWORD *)&v79[32];
        *(_OWORD *)&v78[16] = *(_OWORD *)&v79[16];
        *(_OWORD *)v78 = *(_OWORD *)v79;
        *(_QWORD *)&v82 = aXAimamiRoute;
        *((_QWORD *)&v82 + 1) = 14;
        *(_QWORD *)&v83 = aOpenaiPassthro;
        *((_QWORD *)&v83 + 1) = 18;
        v101 = 0;
        v100 = 1;
        sub_140CAEC50(v79, v78, &v82);
        *(_OWORD *)v78 = *(_OWORD *)v79;
        *(_OWORD *)&v78[16] = *(_OWORD *)&v79[16];
        *(_OWORD *)&v78[32] = *(_OWORD *)&v79[32];
        *(_OWORD *)&v78[48] = *(_OWORD *)&v79[48];
        *(_OWORD *)&v78[64] = *(_OWORD *)&v79[64];
        *(_OWORD *)&v78[80] = *(_OWORD *)&v79[80];
        *(_OWORD *)&v78[96] = *(_OWORD *)&v79[96];
        sub_1418F44E0((__m128i *)v79, &v59, 0x88u);
        v101 = 1;
        v100 = 0;
        *(_QWORD *)&v37 = sub_1410D5D80(v79);
        v38 = v37;
        *(_OWORD *)v79 = v37;
        nullsub_1(v39);
        v40 = (_OWORD *)sub_140001650(16, 8);
        if ( !v40 )
          sub_141938D11(8, 16);
        *v40 = v38;
        v41 = v78[8];
        v42 = v78[9];
        if ( *(_QWORD *)v78 == -1 )
        {
          v98 = v38;
          v90 = (__int64)v40;
          v93 = *((_QWORD *)&v38 + 1);
          if ( **((_QWORD **)&v38 + 1) )
            (**((void (__fastcall ***)(__int64))&v38 + 1))(v98);
          v43 = *(_QWORD *)(v93 + 8);
          if ( v43 )
            sub_140001660(v98, v43, *(_QWORD *)(v93 + 16));
          sub_140001660(v90, 16, 8);
          LOBYTE(v94) = v41;
          BYTE1(v94) = v42;
          *(_QWORD *)&v82 = &v94;
          *((_QWORD *)&v82 + 1) = sub_14164C150;
          v101 = 0;
          v100 = 0;
          sub_1416ABFD0(v79, &unk_141A476C6, &v82);
          v98 = *(_QWORD *)&v79[8];
          sub_140DB8220((__int128 *)v76);
          if ( *(_QWORD *)v79 )
            sub_140001660(v98, *(_QWORD *)v79, 1);
        }
        else
        {
          *(_QWORD *)&v76[104] = *(_QWORD *)&v78[104];
          *(_OWORD *)&v76[90] = *(_OWORD *)&v78[90];
          *(_OWORD *)&v76[74] = *(_OWORD *)&v78[74];
          *(_OWORD *)&v76[58] = *(_OWORD *)&v78[58];
          *(_OWORD *)&v76[42] = *(_OWORD *)&v78[42];
          *(_OWORD *)&v76[26] = *(_OWORD *)&v78[26];
          *(_OWORD *)&v76[10] = *(_OWORD *)&v78[10];
          *(_QWORD *)v76 = *(_QWORD *)v78;
          *(_WORD *)&v76[8] = *(_WORD *)&v78[8];
          *(_QWORD *)&v77 = v40;
          *((_QWORD *)&v77 + 1) = &off_141A45938;
        }
        v99 = 0;
        sub_14029C800(&v67);
      }
      *(_BYTE *)(v97 + 88) = 0;
LABEL_45:
      v44 = *(_OWORD *)&v76[16];
      v45 = *(_OWORD *)&v76[32];
      v46 = *(_OWORD *)&v76[48];
      *(_OWORD *)a1 = *(_OWORD *)v76;
      *((_OWORD *)a1 + 7) = v77;
      *((_OWORD *)a1 + 6) = *(_OWORD *)&v76[96];
      *((_OWORD *)a1 + 5) = *(_OWORD *)&v76[80];
      *((_OWORD *)a1 + 4) = *(_OWORD *)&v76[64];
      *((_OWORD *)a1 + 3) = v46;
      *((_OWORD *)a1 + 2) = v45;
      *((_OWORD *)a1 + 1) = v44;
      v47 = *a1;
      *v96 = 1;
      result = 1;
      v49 = v47 == -1;
      v21 = v97;
      if ( v49 )
        goto LABEL_46;
LABEL_47:
      *(_BYTE *)(v21 + 136) = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A49278);
    case 2LL:
      sub_141939400(&off_141A49278);
    case 3LL:
      switch ( *(_BYTE *)(a2 + 89) )
      {
        case 0:
          v98 = a3;
          v14 = (_BYTE *)(a2 + 89);
          v5 = *(__int64 **)(a2 + 64);
          v6 = a2;
          v7 = *(_QWORD *)(a2 + 72);
          v8 = *(_QWORD *)(a2 + 80);
          v13 = *(char **)(a2 + 32);
          v12 = *(_QWORD *)(a2 + 40);
          v10 = *(_QWORD *)(a2 + 48);
          v11 = *(_QWORD *)(a2 + 56);
          goto LABEL_7;
        case 1:
          sub_1419393E0(&off_141A49488);
        case 2:
          sub_141939400(&off_141A49488);
        case 3:
          v96 = (_BYTE *)(a2 + 89);
          goto LABEL_11;
      }
  }
}
