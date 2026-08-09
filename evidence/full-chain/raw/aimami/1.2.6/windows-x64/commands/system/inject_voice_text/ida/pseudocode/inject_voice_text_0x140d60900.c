// Pseudocode for inject_voice_text (EA: 0x140d60900, size: 0xb47)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
char __fastcall sub_140D60900(__int64 a1, __int64 a2)
{
  __int128 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  char v6; // bl
  __int128 *v7; // r14
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm2
  __int64 v14; // rax
  unsigned __int8 v15; // r15
  __int64 v16; // r12
  __int64 v17; // rdi
  __int64 v18; // rax
  __int128 v19; // xmm0
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm2
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // r14
  _QWORD *v30; // r13
  unsigned __int64 v31; // r15
  char v32; // r12
  _BYTE *v33; // rdx
  char v34; // cl
  char result; // al
  __int64 v36; // rbx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9
  _QWORD *v41; // r14
  bool v42; // zf
  __int64 v43; // rbx
  __int64 v44; // rax
  _QWORD *v45; // rcx
  _QWORD *v46; // r12
  __int64 v47; // rdi
  __int64 v48; // rdx
  _QWORD *v49; // rdi
  __int64 v50; // [rsp+20h] [rbp-60h]
  _QWORD *v51; // [rsp+38h] [rbp-48h] BYREF
  __int128 v52; // [rsp+40h] [rbp-40h]
  __int128 v53; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v54[24]; // [rsp+60h] [rbp-20h]
  _QWORD *v55; // [rsp+78h] [rbp-8h]
  __int64 v56; // [rsp+80h] [rbp+0h]
  __int64 v57; // [rsp+1B8h] [rbp+138h] BYREF
  char v58; // [rsp+1C0h] [rbp+140h]
  _BYTE v59[7]; // [rsp+1C1h] [rbp+141h]
  __int128 *v60; // [rsp+1C8h] [rbp+148h]
  __int128 v61; // [rsp+1D0h] [rbp+150h]
  __int64 v62; // [rsp+1E0h] [rbp+160h]
  __int64 v63; // [rsp+1E8h] [rbp+168h]
  _BYTE *v64; // [rsp+1F0h] [rbp+170h]
  __int128 *v65; // [rsp+1F8h] [rbp+178h] BYREF
  __int128 v66; // [rsp+200h] [rbp+180h]
  _BYTE v67[7]; // [rsp+210h] [rbp+190h]
  _DWORD v68[2]; // [rsp+218h] [rbp+198h]
  __int128 v69; // [rsp+220h] [rbp+1A0h] BYREF
  __int128 v70; // [rsp+230h] [rbp+1B0h]
  char v71; // [rsp+24Fh] [rbp+1CFh] BYREF
  _QWORD *v72; // [rsp+250h] [rbp+1D0h]
  _BYTE v73[7]; // [rsp+258h] [rbp+1D8h]
  __int64 v74; // [rsp+260h] [rbp+1E0h]
  _QWORD *v75; // [rsp+268h] [rbp+1E8h]
  _QWORD *v76; // [rsp+270h] [rbp+1F0h]
  _BYTE *v77; // [rsp+278h] [rbp+1F8h]
  __int64 v78; // [rsp+280h] [rbp+200h]
  char v79; // [rsp+28Fh] [rbp+20Fh]
  __int64 v80; // [rsp+290h] [rbp+210h]

  v80 = -2;
  *((_QWORD *)&v2 + 1) = a2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 1904);
  v78 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 1905) = 257;
      *(_BYTE *)(a1 + 1907) = 1;
      v5 = a1 + 1144;
      sub_14172B820(a1 + 1144, a1 + 392, 752);
      switch ( *(_BYTE *)(v3 + 1888) )
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
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1144;
      switch ( *(_BYTE *)(a1 + 1888) )
      {
        case 0:
LABEL_4:
          v56 = 0;
          *(_QWORD *)&v53 = aInjectVoiceTex;
          *((_QWORD *)&v53 + 1) = 17;
          *(_QWORD *)v54 = aText_13;
          *(_QWORD *)&v54[8] = 4;
          v74 = v5;
          *(_QWORD *)&v54[16] = v5;
          v75 = (_QWORD *)(v3 + 1664);
          v55 = (_QWORD *)(v3 + 1664);
          sub_140955980(&v69, &v53);
          v6 = v69;
          if ( (_BYTE)v69 == 0xFF )
          {
            v77 = *((_BYTE **)&v69 + 1);
            v17 = *((_QWORD *)&v70 + 1);
            v76 = (_QWORD *)v70;
            v56 = 0;
            *(_QWORD *)&v53 = aInjectVoiceTex;
            *((_QWORD *)&v53 + 1) = 17;
            *(_QWORD *)v54 = aExpectedbundle;
            *(_QWORD *)&v54[8] = 16;
            *(_QWORD *)&v54[16] = v74;
            v55 = v75;
            sub_140952570(&v69, &v53);
            v6 = v69;
            if ( (_BYTE)v69 == 0xFF )
            {
              v18 = *((_QWORD *)&v69 + 1);
              v19 = v70;
              v3 = v78;
              *(_QWORD *)(v78 + 1688) = v77;
              *(_QWORD *)(v3 + 1696) = v76;
              *(_QWORD *)(v3 + 1704) = v17;
              *(_QWORD *)(v3 + 1712) = v18;
              *(_OWORD *)(v3 + 1720) = v19;
              *(_BYTE *)(v3 + 1744) = 0;
              *(_QWORD *)(v3 + 1752) = *(_QWORD *)(v3 + 1688);
              *(_QWORD *)(v3 + 1760) = *(_QWORD *)(v3 + 1696);
              *(_QWORD *)(v3 + 1768) = *(_QWORD *)(v3 + 1704);
              *(_QWORD *)(v3 + 1776) = *(_QWORD *)(v3 + 1712);
              *(_OWORD *)(v3 + 1784) = *(_OWORD *)(v3 + 1720);
              *(_QWORD *)(v3 + 1800) = *(_QWORD *)(v3 + 1736);
              *(_BYTE *)(v3 + 1808) = *(_BYTE *)(v3 + 1744);
              *(_DWORD *)(v3 + 1809) = *(_DWORD *)(v3 + 1745);
              *(_WORD *)(v3 + 1813) = *(_WORD *)(v3 + 1749);
              *(_BYTE *)(v3 + 1815) = *(_BYTE *)(v3 + 1751);
              v77 = (_BYTE *)(v3 + 1880);
              *(_BYTE *)(v3 + 1880) = 0;
              v20 = *(_OWORD *)(v3 + 1752);
              v21 = *(_OWORD *)(v3 + 1768);
              v22 = *(_OWORD *)(v3 + 1784);
              v72 = (_QWORD *)(v3 + 1752);
              *(_OWORD *)(v3 + 1864) = *(_OWORD *)(v3 + 1800);
              *(_OWORD *)(v3 + 1848) = v22;
              *(_OWORD *)(v3 + 1832) = v21;
              *(_OWORD *)(v3 + 1816) = v20;
              v75 = (_QWORD *)(v3 + 1816);
              switch ( *(_BYTE *)(v3 + 1872) )
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
            *(_DWORD *)&v73[3] = DWORD1(v69);
            *(_DWORD *)v73 = *(_DWORD *)((char *)&v69 + 1);
            v7 = *((__int128 **)&v69 + 1);
            v2 = v70;
            if ( v77 )
              sub_140001660(v76, v77, 1);
          }
          else
          {
            *(_DWORD *)&v73[3] = DWORD1(v69);
            *(_DWORD *)v73 = *(_DWORD *)((char *)&v69 + 1);
            v7 = *((__int128 **)&v69 + 1);
            v2 = v70;
          }
          sub_140CAB140(v74);
          if ( *v75 == -1 )
          {
            v15 = 1;
            v16 = v78;
            goto LABEL_60;
          }
          v72 = (_QWORD *)(v78 + 1672);
          v8 = *(_QWORD *)(v78 + 1672);
          v76 = *(_QWORD **)(v78 + 1680);
          v77 = nullptr;
          v62 = v8;
          while ( v76 != (_QWORD *)v77 )
          {
            ++v77;
            v9 = v8 + 96;
            sub_140401FB0();
            v8 = v9;
          }
          v14 = *v75;
          v15 = 1;
          v16 = v78;
          if ( !*v75 )
            goto LABEL_60;
          goto LABEL_59;
        case 1:
LABEL_66:
          v74 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_65:
          v74 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
          goto LABEL_10;
      }
  }
LABEL_10:
  v74 = v5;
  v77 = (_BYTE *)(v3 + 1880);
  v10 = *(unsigned __int8 *)(v3 + 1880);
  v72 = (_QWORD *)(v3 + 1752);
  switch ( v10 )
  {
    case 0LL:
      v11 = *(_OWORD *)(v3 + 1752);
      v12 = *(_OWORD *)(v3 + 1768);
      v13 = *(_OWORD *)(v3 + 1784);
      *(_OWORD *)(v3 + 1864) = *(_OWORD *)(v3 + 1800);
      *(_OWORD *)(v3 + 1848) = v13;
      *(_OWORD *)(v3 + 1832) = v12;
      *(_OWORD *)(v3 + 1816) = v11;
      v75 = (_QWORD *)(v3 + 1816);
      switch ( *(_BYTE *)(v3 + 1872) )
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
      v64 = v77;
      v63 = v3 + 1752;
      sub_14176EC00(&off_1418851A0);
    case 2LL:
      v64 = v77;
      v63 = v3 + 1752;
      sub_14176EC20(&off_1418851A0);
    case 3LL:
      v75 = (_QWORD *)(v3 + 1816);
      switch ( *(_BYTE *)(v3 + 1872) )
      {
        case 0:
LABEL_20:
          *(_QWORD *)v54 = v75[2];
          v53 = *(_OWORD *)v75;
          *(_OWORD *)&v54[8] = *(_OWORD *)(v3 + 1840);
          v55 = *(_QWORD **)(v3 + 1856);
          v23 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v79 = 1;
            v49 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v23 = v49;
          }
          if ( *((_DWORD *)v23 + 4) == 2 )
          {
            v24 = 704;
            if ( *(_BYTE *)v23 )
              v24 = 472;
            v25 = v23[1] + v24;
            v79 = 0;
            v26 = sub_1408576F0(v25, v23, &v53, &off_1417EBF48);
          }
          else
          {
            v27 = 704;
            if ( *((_BYTE *)v23 + 64) )
              v27 = 472;
            v28 = v23[9] + v27;
            v79 = 0;
            v26 = sub_1408576F0(v28, v23 + 8, &v53, &off_1417EBF30);
          }
          v3 = v78;
          *(_QWORD *)(v78 + 1864) = v26;
          break;
        case 1:
LABEL_68:
          sub_14176EC00(&off_1418884E8);
        case 2:
LABEL_67:
          sub_14176EC20(&off_1418884E8);
        case 3:
          break;
      }
LABEL_30:
      v76 = (_QWORD *)(v3 + 1864);
      sub_140502A00(&v53, v3 + 1864, *((_QWORD *)&v2 + 1));
      v29 = v53;
      if ( (_QWORD)v53 == -1 )
      {
        v33 = (_BYTE *)v78;
        *(_BYTE *)(v78 + 1872) = 3;
        v33[1880] = 3;
        v33[1888] = 3;
        v34 = 3;
        result = 1;
        goto LABEL_61;
      }
      if ( (_DWORD)v53 == 2 )
      {
        v29 = *((_QWORD *)&v53 + 1);
        v30 = *(_QWORD **)v54;
        v31 = 0x800000000000000CuLL;
        *(_QWORD *)&v2 = *(_QWORD *)&v54[8];
        v32 = 0;
      }
      else
      {
        v30 = *((_QWORD **)&v53 + 1);
        v2 = *(_OWORD *)v54;
        v31 = -1;
        v32 = 1;
      }
      v36 = *v76;
      if ( (unsigned __int8)sub_141398090(*v76) )
        sub_14139A2E0(v36);
      if ( !v32 )
      {
        *(_QWORD *)&v53 = v31;
        *((_QWORD *)&v53 + 1) = v29;
        *(_QWORD *)v54 = v30;
        *(_OWORD *)&v54[8] = v2;
        v65 = &v53;
        *(_QWORD *)&v66 = sub_1412DDF00;
        sub_141543AF0(&v69, &unk_1418876FF, &v65);
        sub_140CAB2C0(&v53);
        v41 = *((_QWORD **)&v69 + 1);
        v30 = (_QWORD *)v69;
        *((_QWORD *)&v2 + 1) = v70;
        *(_BYTE *)(v78 + 1872) = 1;
        v42 = *((_QWORD *)&v2 + 1) == 0;
        if ( v2 >= 0 )
          goto LABEL_40;
LABEL_46:
        v43 = 0;
        goto LABEL_47;
      }
      *(_BYTE *)(v78 + 1872) = 1;
      if ( (unsigned __int64)(v29 - 1) > 1 )
      {
        v51 = v30;
        v52 = v2;
        sub_14095BDF0(&v53, &v51);
        v6 = BYTE8(v53);
        v68[0] = *(_DWORD *)((char *)&v53 + 9);
        *(_DWORD *)((char *)v68 + 3) = HIDWORD(v53);
        v7 = *(__int128 **)v54;
        v2 = *(_OWORD *)&v54[8];
        if ( (_QWORD)v53 == -1 )
        {
          *(_DWORD *)v73 = v68[0];
          *(_DWORD *)&v73[3] = *(_DWORD *)((char *)v68 + 3);
          v15 = 0;
        }
        else
        {
          HIDWORD(v53) = *(_DWORD *)((char *)v68 + 3);
          *(_DWORD *)((char *)&v53 + 9) = v68[0];
          v65 = nullptr;
          v66 = 1u;
          *(_QWORD *)&v70 = 1610612768;
          *(_QWORD *)&v69 = &v65;
          *((_QWORD *)&v69 + 1) = &off_141891B48;
          if ( (unsigned __int8)sub_1412DDF00(&v53, &v69) )
            sub_14176E860(
              (unsigned int)aADisplayImplem_11,
              55,
              (unsigned int)&v71,
              (unsigned int)&unk_141889838,
              (__int64)&off_141891C00);
          v7 = v65;
          v2 = v66;
          sub_140CAB2C0(&v53);
          v6 = 3;
          v15 = 1;
        }
        goto LABEL_54;
      }
      v41 = (_QWORD *)v2;
      v42 = *((_QWORD *)&v2 + 1) == 0;
      if ( v2 < 0 )
        goto LABEL_46;
LABEL_40:
      if ( v42 )
      {
        *(_QWORD *)&v2 = 1;
        v6 = 3;
        v15 = 1;
        if ( !v30 )
          goto LABEL_44;
        goto LABEL_43;
      }
      nullsub_1(v38, v37, v39, v40, v50);
      v43 = 1;
      v44 = sub_140001650(*((_QWORD *)&v2 + 1), 1);
      if ( !v44 )
      {
LABEL_47:
        v75 = v41;
        v76 = v30;
        sub_14176E54B(v43, *((_QWORD *)&v2 + 1));
      }
      *(_QWORD *)&v2 = v44;
      sub_14172B820(v44, v41, *((_QWORD *)&v2 + 1));
      v6 = 3;
      v15 = 1;
      if ( v30 )
LABEL_43:
        sub_140001660(v41, v30, 1);
LABEL_44:
      v7 = *((__int128 **)&v2 + 1);
LABEL_54:
      *v77 = 1;
      sub_140CAB140(v74);
      v16 = v78;
      if ( *(_QWORD *)(v78 + 1664) != -1 )
      {
        v72 = (_QWORD *)(v78 + 1672);
        v45 = *(_QWORD **)(v78 + 1672);
        v76 = *(_QWORD **)(v78 + 1680);
        v77 = nullptr;
        v75 = v45;
        while ( v76 != (_QWORD *)v77 )
        {
          ++v77;
          v46 = v45 + 12;
          sub_140401FB0();
          v45 = v46;
        }
        v16 = v78;
        v14 = *(_QWORD *)(v78 + 1664);
        if ( v14 )
LABEL_59:
          sub_140001660(*v72, 96 * v14, 8);
      }
LABEL_60:
      *(_DWORD *)&v67[3] = *(_DWORD *)&v73[3];
      *(_DWORD *)v67 = *(_DWORD *)v73;
      *(_BYTE *)(v16 + 1888) = 1;
      sub_140C9B9B0(v74);
      *(_DWORD *)&v59[3] = *(_DWORD *)&v67[3];
      *(_DWORD *)v59 = *(_DWORD *)v67;
      v60 = v7;
      v61 = v2;
      v58 = v6;
      v57 = v15;
      v47 = v78;
      *(_BYTE *)(v78 + 1907) = 0;
      sub_14172B820(&v53, v47, 360);
      *(_BYTE *)(v47 + 1906) = 0;
      v48 = *(_QWORD *)(v47 + 384);
      *(_BYTE *)(v47 + 1905) = 0;
      *(_QWORD *)&v70 = *(_QWORD *)(v47 + 376);
      v69 = *(_OWORD *)(v47 + 360);
      sub_140AFFC30((__int64)&v53, v48, (__int64)&v57, &v69, *(_DWORD *)(v47 + 1896), *(_DWORD *)(v47 + 1900));
      v34 = 1;
      result = 0;
      v33 = (_BYTE *)v78;
LABEL_61:
      v33[1904] = v34;
      return result;
  }
}
