// module: codexmate_lib
// addr: 0x140ca27d0
// name: inject_voice_text
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.1 | tauri command handler = inject_voice_text | mapped via command-name string xref (win-native, ground-truth)
char __fastcall inject_voice_text(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int128 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdi
  char v8; // bl
  __int128 *v9; // r14
  __int64 v10; // rcx
  __int64 v11; // r15
  __int64 v12; // rax
  __int128 *v13; // rdx
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int64 v17; // rax
  unsigned __int8 v18; // r15
  __int64 v19; // r12
  __int64 v20; // rdi
  __int64 v21; // rax
  __int128 v22; // xmm0
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int128 v25; // xmm2
  _QWORD *v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // r14
  _QWORD *v33; // r13
  unsigned __int64 v34; // r15
  char v35; // r12
  _BYTE *v36; // rdx
  char v37; // cl
  char result; // al
  __int64 v39; // rbx
  __int64 v40; // rcx
  _QWORD *v41; // r14
  bool v42; // zf
  __int64 v43; // rbx
  __int64 v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // r12
  __int64 v47; // rdi
  __int64 v48; // rdx
  _QWORD *v49; // rdi
  _QWORD *v50; // [rsp+38h] [rbp-48h] BYREF
  __int128 v51; // [rsp+40h] [rbp-40h]
  __int128 v52; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v53[24]; // [rsp+60h] [rbp-20h]
  _QWORD *v54; // [rsp+78h] [rbp-8h]
  __int64 v55; // [rsp+80h] [rbp+0h]
  __int64 v56; // [rsp+1B8h] [rbp+138h] BYREF
  char v57; // [rsp+1C0h] [rbp+140h]
  _BYTE v58[7]; // [rsp+1C1h] [rbp+141h]
  __int128 *v59; // [rsp+1C8h] [rbp+148h]
  __int128 v60; // [rsp+1D0h] [rbp+150h]
  __int64 v61; // [rsp+1E0h] [rbp+160h]
  __int64 v62; // [rsp+1E8h] [rbp+168h]
  _BYTE *v63; // [rsp+1F0h] [rbp+170h]
  __int128 *v64; // [rsp+1F8h] [rbp+178h] BYREF
  __int128 v65; // [rsp+200h] [rbp+180h]
  _BYTE v66[7]; // [rsp+210h] [rbp+190h]
  _DWORD v67[2]; // [rsp+218h] [rbp+198h]
  __int128 v68; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v69; // [rsp+230h] [rbp+1B0h]
  char v70; // [rsp+24Fh] [rbp+1CFh] BYREF
  _QWORD *v71; // [rsp+250h] [rbp+1D0h]
  _BYTE v72[7]; // [rsp+258h] [rbp+1D8h]
  __int64 v73; // [rsp+260h] [rbp+1E0h]
  _QWORD *v74; // [rsp+268h] [rbp+1E8h]
  _QWORD *v75; // [rsp+270h] [rbp+1F0h]
  _BYTE *v76; // [rsp+278h] [rbp+1F8h]
  __int64 v77; // [rsp+280h] [rbp+200h]
  char v78; // [rsp+28Fh] [rbp+20Fh]
  __int64 v79; // [rsp+290h] [rbp+210h]

  v79 = -2;
  *((_QWORD *)&v4 + 1) = a2;
  v5 = a1;
  v6 = *(unsigned __int8 *)(a1 + 1904);
  v77 = a1;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1905) = 257;
      *(_BYTE *)(a1 + 1907) = 1;
      v7 = a1 + 1144;
      sub_141684120(a1 + 1144, a1 + 392, 752);
      switch ( *(_BYTE *)(v5 + 1888) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_66;
        case 2:
          goto LABEL_65;
        case 3:
          goto LABEL_10;
      }
    case 1LL:
      sub_1416C3400(&off_1417B7C00, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417B7C00, a2, a3, a4);
    case 3LL:
      v7 = a1 + 1144;
      switch ( *(_BYTE *)(a1 + 1888) )
      {
        case 0:
LABEL_4:
          v55 = 0;
          *(_QWORD *)&v52 = aInjectVoiceTex;
          *((_QWORD *)&v52 + 1) = 17;
          *(_QWORD *)v53 = aText_13;
          *(_QWORD *)&v53[8] = 4;
          v73 = v7;
          *(_QWORD *)&v53[16] = v7;
          v74 = (_QWORD *)(v5 + 1664);
          v54 = (_QWORD *)(v5 + 1664);
          sub_1409757B0(&v68, &v52);
          v8 = v68;
          if ( (_BYTE)v68 == 0xFF )
          {
            v76 = *((_BYTE **)&v68 + 1);
            v20 = *((_QWORD *)&v69 + 1);
            v75 = (_QWORD *)v69;
            v55 = 0;
            *(_QWORD *)&v52 = aInjectVoiceTex;
            *((_QWORD *)&v52 + 1) = 17;
            *(_QWORD *)v53 = aExpectedbundle;
            *(_QWORD *)&v53[8] = 16;
            *(_QWORD *)&v53[16] = v73;
            v54 = v74;
            sub_140973410(&v68, &v52);
            v8 = v68;
            if ( (_BYTE)v68 == 0xFF )
            {
              v21 = *((_QWORD *)&v68 + 1);
              v22 = v69;
              v5 = v77;
              *(_QWORD *)(v77 + 1688) = v76;
              *(_QWORD *)(v5 + 1696) = v75;
              *(_QWORD *)(v5 + 1704) = v20;
              *(_QWORD *)(v5 + 1712) = v21;
              *(_OWORD *)(v5 + 1720) = v22;
              *(_BYTE *)(v5 + 1744) = 0;
              *(_QWORD *)(v5 + 1752) = *(_QWORD *)(v5 + 1688);
              *(_QWORD *)(v5 + 1760) = *(_QWORD *)(v5 + 1696);
              *(_QWORD *)(v5 + 1768) = *(_QWORD *)(v5 + 1704);
              *(_QWORD *)(v5 + 1776) = *(_QWORD *)(v5 + 1712);
              *(_OWORD *)(v5 + 1784) = *(_OWORD *)(v5 + 1720);
              *(_QWORD *)(v5 + 1800) = *(_QWORD *)(v5 + 1736);
              *(_BYTE *)(v5 + 1808) = *(_BYTE *)(v5 + 1744);
              *(_DWORD *)(v5 + 1809) = *(_DWORD *)(v5 + 1745);
              *(_WORD *)(v5 + 1813) = *(_WORD *)(v5 + 1749);
              *(_BYTE *)(v5 + 1815) = *(_BYTE *)(v5 + 1751);
              v76 = (_BYTE *)(v5 + 1880);
              *(_BYTE *)(v5 + 1880) = 0;
              v23 = *(_OWORD *)(v5 + 1752);
              v24 = *(_OWORD *)(v5 + 1768);
              v25 = *(_OWORD *)(v5 + 1784);
              v71 = (_QWORD *)(v5 + 1752);
              *(_OWORD *)(v5 + 1864) = *(_OWORD *)(v5 + 1800);
              *(_OWORD *)(v5 + 1848) = v25;
              *(_OWORD *)(v5 + 1832) = v24;
              *(_OWORD *)(v5 + 1816) = v23;
              v74 = (_QWORD *)(v5 + 1816);
              switch ( *(_BYTE *)(v5 + 1872) )
              {
                case 0:
                  goto LABEL_20;
                case 1:
                  goto LABEL_68;
                case 2:
                  goto LABEL_67;
                case 3:
                  goto LABEL_30;
              }
            }
            *(_DWORD *)&v72[3] = DWORD1(v68);
            *(_DWORD *)v72 = *(_DWORD *)((char *)&v68 + 1);
            v9 = *((__int128 **)&v68 + 1);
            v4 = v69;
            if ( v76 )
              sub_140001660(v75, v76, 1);
          }
          else
          {
            *(_DWORD *)&v72[3] = DWORD1(v68);
            *(_DWORD *)v72 = *(_DWORD *)((char *)&v68 + 1);
            v9 = *((__int128 **)&v68 + 1);
            v4 = v69;
          }
          sub_140BF0DE0(v73);
          if ( *v74 == -1 )
          {
            v18 = 1;
            v19 = v77;
            goto LABEL_60;
          }
          v71 = (_QWORD *)(v77 + 1672);
          v10 = *(_QWORD *)(v77 + 1672);
          v75 = *(_QWORD **)(v77 + 1680);
          v76 = nullptr;
          v61 = v10;
          while ( v75 != (_QWORD *)v76 )
          {
            ++v76;
            v11 = v10 + 96;
            sub_1402C7520();
            v10 = v11;
          }
          v17 = *v74;
          v18 = 1;
          v19 = v77;
          if ( !*v74 )
            goto LABEL_60;
          goto LABEL_59;
        case 1:
LABEL_66:
          v73 = v7;
          sub_1416C3400(&off_1417B9768, a2, a3, a4);
        case 2:
LABEL_65:
          v73 = v7;
          sub_1416C3420(&off_1417B9768, a2, a3, a4);
        case 3:
          goto LABEL_10;
      }
  }
LABEL_10:
  v73 = v7;
  v76 = (_BYTE *)(v5 + 1880);
  v12 = *(unsigned __int8 *)(v5 + 1880);
  v13 = (__int128 *)(v5 + 1752);
  v71 = (_QWORD *)(v5 + 1752);
  switch ( v12 )
  {
    case 0LL:
      v14 = *v13;
      v15 = *(_OWORD *)(v5 + 1768);
      v16 = *(_OWORD *)(v5 + 1784);
      *(_OWORD *)(v5 + 1864) = *(_OWORD *)(v5 + 1800);
      *(_OWORD *)(v5 + 1848) = v16;
      *(_OWORD *)(v5 + 1832) = v15;
      *(_OWORD *)(v5 + 1816) = v14;
      v74 = (_QWORD *)(v5 + 1816);
      switch ( *(_BYTE *)(v5 + 1872) )
      {
        case 0:
          goto LABEL_20;
        case 1:
          goto LABEL_68;
        case 2:
          goto LABEL_67;
        case 3:
          goto LABEL_30;
      }
    case 1LL:
      v63 = v76;
      v62 = v5 + 1752;
      sub_1416C3400(&off_1417B7B80, v13, a3, a4);
    case 2LL:
      v63 = v76;
      v62 = v5 + 1752;
      sub_1416C3420(&off_1417B7B80, v13, a3, a4);
    case 3LL:
      v74 = (_QWORD *)(v5 + 1816);
      switch ( *(_BYTE *)(v5 + 1872) )
      {
        case 0:
LABEL_20:
          *(_QWORD *)v53 = v74[2];
          v52 = *(_OWORD *)v74;
          *(_OWORD *)&v53[8] = *(_OWORD *)(v5 + 1840);
          v54 = *(_QWORD **)(v5 + 1856);
          v26 = off_141EC8710;
          if ( *((_DWORD *)off_141EC8710 + 24) )
          {
            v78 = 1;
            v49 = off_141EC8710;
            sub_1416984A3(off_141EC8710);
            v26 = v49;
          }
          if ( *((_DWORD *)v26 + 4) == 2 )
          {
            v27 = 704;
            if ( *(_BYTE *)v26 )
              v27 = 472;
            v28 = v26[1] + v27;
            v78 = 0;
            v29 = sub_1408977C0(v28, v26, &v52, &off_1417642A8);
          }
          else
          {
            v30 = 704;
            if ( *((_BYTE *)v26 + 64) )
              v30 = 472;
            v31 = v26[9] + v30;
            v78 = 0;
            v29 = sub_1408977C0(v31, v26 + 8, &v52, &off_141764290);
          }
          v5 = v77;
          *(_QWORD *)(v77 + 1864) = v29;
          break;
        case 1:
LABEL_68:
          sub_1416C3400(&off_1417BAE78, v13, a3, a4);
        case 2:
LABEL_67:
          sub_1416C3420(&off_1417BAE78, v13, a3, a4);
        case 3:
          break;
      }
LABEL_30:
      v75 = (_QWORD *)(v5 + 1864);
      sub_140B00640(&v52, v5 + 1864, *((_QWORD *)&v4 + 1));
      v32 = v52;
      if ( (_QWORD)v52 == -1 )
      {
        v36 = (_BYTE *)v77;
        *(_BYTE *)(v77 + 1872) = 3;
        v36[1880] = 3;
        v36[1888] = 3;
        v37 = 3;
        result = 1;
        goto LABEL_61;
      }
      if ( (_DWORD)v52 == 2 )
      {
        v32 = *((_QWORD *)&v52 + 1);
        v33 = *(_QWORD **)v53;
        v34 = 0x800000000000000CuLL;
        *(_QWORD *)&v4 = *(_QWORD *)&v53[8];
        v35 = 0;
      }
      else
      {
        v33 = *((_QWORD **)&v52 + 1);
        v4 = *(_OWORD *)v53;
        v34 = -1;
        v35 = 1;
      }
      v39 = *v75;
      if ( (unsigned __int8)sub_1412F2A80(*v75) )
        sub_1412E7580(v39);
      if ( !v35 )
      {
        *(_QWORD *)&v52 = v34;
        *((_QWORD *)&v52 + 1) = v32;
        *(_QWORD *)v53 = v33;
        *(_OWORD *)&v53[8] = v4;
        v64 = &v52;
        *(_QWORD *)&v65 = sub_141230630;
        sub_14149C0F0(&v68, &unk_1417BA08F, &v64);
        sub_140BF0F60(&v52);
        v41 = *((_QWORD **)&v68 + 1);
        v33 = (_QWORD *)v68;
        *((_QWORD *)&v4 + 1) = v69;
        *(_BYTE *)(v77 + 1872) = 1;
        v42 = *((_QWORD *)&v4 + 1) == 0;
        if ( v4 >= 0 )
          goto LABEL_40;
LABEL_46:
        v43 = 0;
        goto LABEL_47;
      }
      *(_BYTE *)(v77 + 1872) = 1;
      if ( (unsigned __int64)(v32 - 1) > 1 )
      {
        v50 = v33;
        v51 = v4;
        sub_14097B180(&v52, &v50);
        v8 = BYTE8(v52);
        v67[0] = *(_DWORD *)((char *)&v52 + 9);
        *(_DWORD *)((char *)v67 + 3) = HIDWORD(v52);
        v9 = *(__int128 **)v53;
        v4 = *(_OWORD *)&v53[8];
        if ( (_QWORD)v52 == -1 )
        {
          *(_DWORD *)v72 = v67[0];
          *(_DWORD *)&v72[3] = *(_DWORD *)((char *)v67 + 3);
          v18 = 0;
        }
        else
        {
          HIDWORD(v52) = *(_DWORD *)((char *)v67 + 3);
          *(_DWORD *)((char *)&v52 + 9) = v67[0];
          v64 = nullptr;
          v65 = 1u;
          *(_QWORD *)&v69 = 1610612768;
          *(_QWORD *)&v68 = &v64;
          *((_QWORD *)&v68 + 1) = &off_1417C41C0;
          if ( (unsigned __int8)sub_141230630(&v52, &v68, *(_DWORD *)((char *)v67 + 3)) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v70,
              (unsigned int)&unk_1417BC180,
              (__int64)&off_1417C4278);
          v9 = v64;
          v4 = v65;
          sub_140BF0F60(&v52);
          v8 = 3;
          v18 = 1;
        }
        goto LABEL_54;
      }
      v41 = (_QWORD *)v4;
      v42 = *((_QWORD *)&v4 + 1) == 0;
      if ( v4 < 0 )
        goto LABEL_46;
LABEL_40:
      if ( v42 )
      {
        *(_QWORD *)&v4 = 1;
        v8 = 3;
        v18 = 1;
        if ( !v33 )
          goto LABEL_44;
        goto LABEL_43;
      }
      nullsub_1(v40);
      v43 = 1;
      v44 = sub_140001650(*((_QWORD *)&v4 + 1), 1);
      if ( !v44 )
      {
LABEL_47:
        v74 = v41;
        v75 = v33;
        sub_1416C2D4B(v43, *((_QWORD *)&v4 + 1));
      }
      *(_QWORD *)&v4 = v44;
      sub_141684120(v44, v41, *((_QWORD *)&v4 + 1));
      v8 = 3;
      v18 = 1;
      if ( v33 )
LABEL_43:
        sub_140001660(v41, v33, 1);
LABEL_44:
      v9 = *((__int128 **)&v4 + 1);
LABEL_54:
      *v76 = 1;
      sub_140BF0DE0(v73);
      v19 = v77;
      if ( *(_QWORD *)(v77 + 1664) != -1 )
      {
        v71 = (_QWORD *)(v77 + 1672);
        v45 = *(_QWORD **)(v77 + 1672);
        v75 = *(_QWORD **)(v77 + 1680);
        v76 = nullptr;
        v74 = v45;
        while ( v75 != (_QWORD *)v76 )
        {
          ++v76;
          v46 = v45 + 12;
          sub_1402C7520();
          v45 = v46;
        }
        v19 = v77;
        v17 = *(_QWORD *)(v77 + 1664);
        if ( v17 )
LABEL_59:
          sub_140001660(*v71, 96 * v17, 8);
      }
LABEL_60:
      *(_DWORD *)&v66[3] = *(_DWORD *)&v72[3];
      *(_DWORD *)v66 = *(_DWORD *)v72;
      *(_BYTE *)(v19 + 1888) = 1;
      sub_140BE1660(v73);
      *(_DWORD *)&v58[3] = *(_DWORD *)&v66[3];
      *(_DWORD *)v58 = *(_DWORD *)v66;
      v59 = v9;
      v60 = v4;
      v57 = v8;
      v56 = v18;
      v47 = v77;
      *(_BYTE *)(v77 + 1907) = 0;
      sub_141684120(&v52, v47, 360);
      *(_BYTE *)(v47 + 1906) = 0;
      v48 = *(_QWORD *)(v47 + 384);
      *(_BYTE *)(v47 + 1905) = 0;
      *(_QWORD *)&v69 = *(_QWORD *)(v47 + 376);
      v68 = *(_OWORD *)(v47 + 360);
      sub_14047E370(
        (unsigned int)&v52,
        v48,
        (unsigned int)&v56,
        (unsigned int)&v68,
        *(_DWORD *)(v47 + 1896),
        *(_DWORD *)(v47 + 1900));
      v37 = 1;
      result = 0;
      v36 = (_BYTE *)v77;
LABEL_61:
      v36[1904] = v37;
      return result;
  }
}