// Pseudocode for test_api_proxy_config (EA: 0x140d84230, size: 0xcc5)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 test_api_proxy_config 的 handler：按入参 mode/url 测试 API 代理连通性并返回结果（网络副作用：向外发探测请求）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
// Tauri 命令 test_api_proxy_config 的 handler：按入参 mode/url 测试 API 代理连通性并返回结果（网络副作用：向外发探测请求）。归属：命令名串精确 xref 唯一归属 + panic-Location 两跳锚定 src\commands\system.rs。
char __fastcall test_api_proxy_config(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // r13
  __int8 v7; // r15
  __int64 v8; // r12
  __int128 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // r13
  __int64 v12; // rax
  _BYTE *v13; // rdx
  char v14; // al
  _QWORD *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rbx
  const char *v22; // r14
  __int64 v23; // r12
  __int64 v24; // r15
  _BYTE *v25; // rdx
  char v26; // cl
  char result; // al
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  unsigned __int8 v33; // bl
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rdi
  __int64 v41; // rsi
  __int128 v42; // xmm6
  _QWORD *v43; // rcx
  _QWORD *v44; // r14
  __int64 v45; // rdi
  __int64 v46; // rdx
  _QWORD *v47; // rsi
  __int64 v48; // [rsp+20h] [rbp-60h]
  __m256i v49; // [rsp+30h] [rbp-50h] BYREF
  __int128 v50; // [rsp+50h] [rbp-30h]
  __int128 v51; // [rsp+60h] [rbp-20h]
  __int128 v52; // [rsp+70h] [rbp-10h]
  __int128 v53; // [rsp+80h] [rbp+0h]
  __int64 v54; // [rsp+90h] [rbp+10h]
  _QWORD v55[2]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v56; // [rsp+B0h] [rbp+30h] BYREF
  __int8 v57; // [rsp+B8h] [rbp+38h]
  char v58; // [rsp+B9h] [rbp+39h]
  int v59; // [rsp+BAh] [rbp+3Ah]
  __int16 v60; // [rsp+BEh] [rbp+3Eh]
  __int64 v61; // [rsp+C0h] [rbp+40h]
  __int128 v62; // [rsp+C8h] [rbp+48h]
  const char *v63; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v64; // [rsp+E0h] [rbp+60h]
  const char *v65; // [rsp+E8h] [rbp+68h]
  _BYTE v66[48]; // [rsp+F0h] [rbp+70h]
  __int128 v67; // [rsp+120h] [rbp+A0h]
  __int128 v68; // [rsp+130h] [rbp+B0h]
  __int128 v69; // [rsp+140h] [rbp+C0h]
  __int128 v70; // [rsp+150h] [rbp+D0h]
  __int128 v71; // [rsp+160h] [rbp+E0h]
  __int128 v72; // [rsp+170h] [rbp+F0h]
  __int64 v73; // [rsp+180h] [rbp+100h]
  char v74; // [rsp+188h] [rbp+108h]
  __int128 v75; // [rsp+240h] [rbp+1C0h] BYREF
  unsigned __int64 v76; // [rsp+250h] [rbp+1D0h]
  _BYTE v77[48]; // [rsp+258h] [rbp+1D8h]
  __int128 v78; // [rsp+288h] [rbp+208h]
  __int128 v79; // [rsp+298h] [rbp+218h]
  __int128 v80; // [rsp+2A8h] [rbp+228h]
  __int128 v81; // [rsp+2B8h] [rbp+238h]
  __int128 v82; // [rsp+2C8h] [rbp+248h]
  __int64 v83; // [rsp+2D8h] [rbp+258h]
  __m256i v84; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v85; // [rsp+300h] [rbp+280h]
  __int128 v86; // [rsp+310h] [rbp+290h]
  __int128 v87; // [rsp+320h] [rbp+2A0h]
  __int128 v88; // [rsp+330h] [rbp+2B0h]
  __int64 v89; // [rsp+340h] [rbp+2C0h]
  __m256i v90; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v91; // [rsp+370h] [rbp+2F0h]
  __int128 v92; // [rsp+380h] [rbp+300h]
  __int128 v93; // [rsp+390h] [rbp+310h]
  __int128 v94; // [rsp+3A0h] [rbp+320h]
  __int64 v95; // [rsp+3B0h] [rbp+330h]
  __int64 v96; // [rsp+3B8h] [rbp+338h]
  _QWORD *v97; // [rsp+3C0h] [rbp+340h]
  char v98; // [rsp+3CFh] [rbp+34Fh] BYREF
  _BYTE *v99; // [rsp+3D0h] [rbp+350h]
  _BYTE *v100; // [rsp+3D8h] [rbp+358h]
  __int64 v101; // [rsp+3E0h] [rbp+360h]
  unsigned __int64 v102; // [rsp+3E8h] [rbp+368h]
  _QWORD *v103; // [rsp+3F0h] [rbp+370h]
  __int64 v104; // [rsp+3F8h] [rbp+378h]
  char v105; // [rsp+407h] [rbp+387h]
  __int64 v106; // [rsp+408h] [rbp+388h]

  v106 = -2;
  v3 = a1;
  v4 = *(unsigned __int8 *)(a1 + 2672);
  v104 = a1;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(a1 + 2673) = 257;
      *(_BYTE *)(a1 + 2675) = 1;
      v5 = a1 + 1528;
      sub_14172B820(a1 + 1528, a1 + 392, 1136);
      switch ( *(_BYTE *)(v3 + 2656) )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_67;
        case 2:
          goto LABEL_66;
        case 3:
          goto LABEL_7;
      }
    case 1LL:
      sub_14176EC00(&off_141885220);
    case 2LL:
      sub_14176EC20(&off_141885220);
    case 3LL:
      v5 = a1 + 1528;
      switch ( *(_BYTE *)(a1 + 2656) )
      {
        case 0:
LABEL_4:
          *(_QWORD *)&v92 = 0;
          v90.m256i_i64[0] = (__int64)aTestApiProxyCo;
          v90.m256i_i64[1] = 21;
          v90.m256i_i64[2] = (__int64)aApp_4;
          v90.m256i_i64[3] = 3;
          v101 = v5;
          *(_QWORD *)&v91 = v5;
          v103 = (_QWORD *)(v3 + 2048);
          *((_QWORD *)&v91 + 1) = v3 + 2048;
          sub_1401A9630((__int64)&v63, (__int64)&v90);
          v6 = *(unsigned int *)((char *)&v64 + 2) | ((unsigned __int64)HIWORD(v64) << 32);
          v7 = v64;
          v8 = (__int64)v65;
          v9 = *(_OWORD *)v66;
          if ( v63 == (const char *)-1LL )
          {
            LOBYTE(v102) = BYTE1(v64);
LABEL_44:
            sub_140CAB140(v101);
            if ( *v103 == -1 )
            {
              v33 = 1;
              v39 = v104;
LABEL_61:
              *(_BYTE *)(v39 + 2656) = 1;
              sub_140C9F920(v101);
              v59 = v6;
              v60 = WORD2(v6);
              v61 = v8;
              v62 = v9;
              v57 = v7;
              v58 = v102;
              v56 = v33;
              v45 = v104;
              *(_BYTE *)(v104 + 2675) = 0;
              sub_14172B820(&v63, v45, 360);
              *(_BYTE *)(v45 + 2674) = 0;
              v46 = *(_QWORD *)(v45 + 384);
              *(_BYTE *)(v45 + 2673) = 0;
              v76 = *(_QWORD *)(v45 + 376);
              v75 = *(_OWORD *)(v45 + 360);
              sub_140AFFC30((__int64)&v63, v46, (__int64)&v56, &v75, *(_DWORD *)(v45 + 2664), *(_DWORD *)(v45 + 2668));
              v26 = 1;
              result = 0;
              v25 = (_BYTE *)v104;
              goto LABEL_62;
            }
            v97 = (_QWORD *)(v104 + 2056);
            v36 = *(_QWORD *)(v104 + 2056);
            v99 = *(_BYTE **)(v104 + 2064);
            v100 = nullptr;
            v83 = v36;
            while ( v99 != v100 )
            {
              ++v100;
              v37 = v36 + 96;
              sub_140401FB0();
              v36 = v37;
            }
            v38 = *v103;
            v33 = 1;
            v39 = v104;
            if ( !*v103 )
              goto LABEL_61;
LABEL_60:
            sub_140001660(*v97, 96 * v38, 8);
            goto LABEL_61;
          }
          v82 = v71;
          v81 = v70;
          v80 = v69;
          v79 = v68;
          v78 = v67;
          *(_OWORD *)&v77[32] = *(_OWORD *)&v66[32];
          *(__m256i *)v77 = *(__m256i *)v66;
          *(_DWORD *)((char *)&v75 + 10) = *(_DWORD *)((char *)&v64 + 2);
          HIWORD(v75) = WORD2(v6);
          v76 = (unsigned __int64)v65;
          *(_QWORD *)&v75 = v63;
          WORD4(v75) = v64;
          v63 = aTestApiProxyCo;
          v64 = 21;
          v65 = aMode_5;
          *(_QWORD *)v66 = 4;
          *(_QWORD *)&v66[8] = v101;
          *(_OWORD *)&v66[16] = (unsigned __int64)v103;
          sub_1404F6500(&v90, &v63);
          v7 = v90.m256i_i8[0];
          LOBYTE(v102) = v90.m256i_i8[1];
          if ( v90.m256i_i8[0] != -1 )
          {
            v10 = *(unsigned int *)((char *)v90.m256i_u32 + 2);
            v11 = v90.m256i_u16[3];
            v8 = v90.m256i_i64[1];
            v9 = *(_OWORD *)&v90.m256i_u64[2];
            sub_140203A20(&v75);
LABEL_43:
            v6 = v10 | (v11 << 32);
            goto LABEL_44;
          }
          v63 = aTestApiProxyCo;
          v64 = 21;
          v65 = aUrl_8;
          *(_QWORD *)v66 = 3;
          *(_QWORD *)&v66[8] = v101;
          *(_OWORD *)&v66[16] = (unsigned __int64)v103;
          sub_140952570(&v90, &v63);
          v7 = v90.m256i_i8[0];
          if ( v90.m256i_i8[0] != -1 )
          {
            LOBYTE(v102) = v90.m256i_i8[1];
            v10 = *(unsigned int *)((char *)v90.m256i_u32 + 2);
            v11 = v90.m256i_u16[3];
            v8 = v90.m256i_i64[1];
            v9 = *(_OWORD *)&v90.m256i_u64[2];
            sub_140203A20(&v75);
            goto LABEL_43;
          }
          v40 = v90.m256i_i64[3];
          v3 = v104;
          v41 = v104 + 2072;
          v42 = *(_OWORD *)&v90.m256i_u64[1];
          sub_14172B820(v104 + 2072, &v75, 152);
          *(_BYTE *)(v3 + 2256) = v102;
          *(_OWORD *)(v3 + 2224) = v42;
          *(_QWORD *)(v3 + 2240) = v40;
          *(_BYTE *)(v3 + 2257) = 0;
          sub_14172B820(v3 + 2264, v41, 192);
          v13 = (_BYTE *)(v3 + 2264);
          v100 = (_BYTE *)(v3 + 2648);
          *(_BYTE *)(v3 + 2648) = 0;
LABEL_8:
          v102 = v3 + 2456;
          v99 = v13;
          sub_14172B820(v3 + 2456, v13, 192);
LABEL_10:
          sub_14172B820(&v63, v102, 152);
          v14 = *(_BYTE *)(v3 + 2640);
          v72 = *(_OWORD *)(v3 + 2608);
          v73 = *(_QWORD *)(v3 + 2624);
          v74 = v14;
          v15 = off_141FB97C0;
          if ( *((_DWORD *)off_141FB97C0 + 24) )
          {
            v105 = 1;
            v47 = off_141FB97C0;
            sub_14172E34C(off_141FB97C0);
            v15 = v47;
          }
          if ( *((_DWORD *)v15 + 4) == 2 )
          {
            v16 = 704;
            if ( *(_BYTE *)v15 )
              v16 = 472;
            v17 = v15[1] + v16;
            v105 = 0;
            v18 = sub_14085AFC0(v17, v15, &v63, &off_1417EBF48);
          }
          else
          {
            v19 = 704;
            if ( *((_BYTE *)v15 + 64) )
              v19 = 472;
            v20 = v15[9] + v19;
            v105 = 0;
            v18 = sub_14085AFC0(v20, v15 + 8, &v63, &off_1417EBF30);
          }
          v21 = v104;
          *(_QWORD *)(v104 + 2632) = v18;
          v103 = (_QWORD *)(v21 + 2632);
          sub_140501D00(&v63, v21 + 2632, a2);
          v22 = v63;
          if ( v63 != (const char *)-3LL )
          {
            if ( v63 == (const char *)-2LL )
            {
              v6 = v64;
              *((_QWORD *)&v9 + 1) = v65;
              v23 = 0x800000000000000CuLL;
              v24 = *(_QWORD *)v66;
            }
            else
            {
              v23 = v64;
              v6 = (unsigned __int64)v65;
              v24 = *(_QWORD *)&v66[8];
              *((_QWORD *)&v9 + 1) = *(_QWORD *)v66;
              v84 = *(__m256i *)&v66[16];
              v85 = v67;
              v86 = v68;
              v87 = v69;
              v88 = v70;
              v89 = v71;
            }
            v49 = v84;
            v50 = v85;
            v51 = v86;
            v52 = v87;
            v53 = v88;
            v54 = v89;
            v28 = *v103;
            if ( (unsigned __int8)sub_141398090(*v103) )
              sub_14139A2E0(v28);
            if ( v22 == (const char *)-2LL )
            {
              v63 = (const char *)v23;
              v64 = v6;
              v65 = *((const char **)&v9 + 1);
              *(_QWORD *)v66 = v24;
              *(_OWORD *)&v66[8] = *(_OWORD *)v49.m256i_i8;
              v55[0] = &v63;
              v55[1] = sub_1412DDF00;
              sub_141543AF0(&v84, &unk_1418862D0, v55);
              sub_140CAB2C0(&v63);
              v6 = v84.m256i_u64[1];
              v23 = v84.m256i_i64[0];
              *((_QWORD *)&v9 + 1) = v84.m256i_i64[2];
              *(_BYTE *)(v104 + 2641) = 1;
            }
            else
            {
              v95 = v54;
              v94 = v53;
              v93 = v52;
              v92 = v51;
              v91 = v50;
              v90 = v49;
              *(_BYTE *)(v104 + 2641) = 1;
              if ( v22 != (const char *)-1LL )
              {
                *(_QWORD *)&v82 = v95;
                v81 = v94;
                v80 = v93;
                v79 = v92;
                v78 = v91;
                *(__m256i *)&v77[16] = v90;
                *(_QWORD *)&v75 = v22;
                *((_QWORD *)&v75 + 1) = v23;
                v76 = v6;
                *(_QWORD *)v77 = *((_QWORD *)&v9 + 1);
                *(_QWORD *)&v77[8] = v24;
                sub_1405090B0(&v63, &v75);
                v6 = *(unsigned int *)((char *)&v64 + 2) | ((unsigned __int64)HIWORD(v64) << 32);
                v7 = v64;
                v8 = (__int64)v65;
                v9 = *(_OWORD *)v66;
                if ( v63 == (const char *)-1LL )
                {
                  LOBYTE(v102) = BYTE1(v64);
                  v33 = 0;
                }
                else
                {
                  v84.m256i_i64[0] = 0;
                  *(_OWORD *)&v84.m256i_u64[1] = 1u;
                  v49.m256i_i64[2] = 1610612768;
                  v49.m256i_i64[0] = (__int64)&v84;
                  v49.m256i_i64[1] = (__int64)&off_141891B48;
                  if ( (unsigned __int8)sub_1412DDF00(&v63, &v49) )
                    sub_14176E860(
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v98,
                      (unsigned int)&unk_141889838,
                      (__int64)&off_141891C00);
                  v9 = *(_OWORD *)&v84.m256i_u64[1];
                  v8 = v84.m256i_i64[0];
                  sub_140CAB2C0(&v63);
                  v33 = 1;
                  v7 = 3;
                }
LABEL_55:
                *v100 = 1;
                sub_140C7F140(v99);
                sub_140CAB140(v101);
                v39 = v104;
                if ( *(_QWORD *)(v104 + 2048) == -1 )
                  goto LABEL_61;
                v97 = (_QWORD *)(v104 + 2056);
                v43 = *(_QWORD **)(v104 + 2056);
                v99 = *(_BYTE **)(v104 + 2064);
                v100 = nullptr;
                v103 = v43;
                while ( v99 != v100 )
                {
                  ++v100;
                  v44 = v43 + 12;
                  sub_140401FB0();
                  v43 = v44;
                }
                v39 = v104;
                v38 = *(_QWORD *)(v104 + 2048);
                if ( !v38 )
                  goto LABEL_61;
                goto LABEL_60;
              }
            }
            if ( v9 < 0 )
            {
              v34 = 0;
              goto LABEL_35;
            }
            if ( *((_QWORD *)&v9 + 1) )
            {
              nullsub_1(v30, v29, v31, v32, v48);
              v34 = 1;
              v35 = sub_140001650(*((_QWORD *)&v9 + 1), 1);
              if ( !v35 )
              {
LABEL_35:
                v102 = v6;
                v103 = (_QWORD *)v23;
                sub_14176E54B(v34, *((_QWORD *)&v9 + 1));
              }
              *(_QWORD *)&v9 = v35;
              sub_14172B820(v35, v6, *((_QWORD *)&v9 + 1));
              if ( !v23 )
                goto LABEL_40;
            }
            else
            {
              *(_QWORD *)&v9 = 1;
              if ( !v23 )
                goto LABEL_40;
            }
            sub_140001660(v6, v23, 1);
LABEL_40:
            v33 = 1;
            v7 = 3;
            v8 = *((_QWORD *)&v9 + 1);
            goto LABEL_55;
          }
          v25 = (_BYTE *)v104;
          *(_BYTE *)(v104 + 2641) = 3;
          v25[2648] = 3;
          v25[2656] = 3;
          v26 = 3;
          result = 1;
LABEL_62:
          v25[2672] = v26;
          return result;
        case 1:
LABEL_67:
          v101 = v5;
          sub_14176EC00(&off_141886DB8);
        case 2:
LABEL_66:
          v101 = v5;
          sub_14176EC20(&off_141886DB8);
        case 3:
LABEL_7:
          v101 = v5;
          v12 = *(unsigned __int8 *)(v3 + 2648);
          v13 = (_BYTE *)(v3 + 2264);
          v100 = (_BYTE *)(v3 + 2648);
          switch ( v12 )
          {
            case 0LL:
              goto LABEL_8;
            case 1LL:
              v96 = v3 + 2264;
              sub_14176EC00(&off_1418851A0);
            case 2LL:
              v96 = v3 + 2264;
              sub_14176EC20(&off_1418851A0);
            case 3LL:
              v99 = (_BYTE *)(v3 + 2264);
              v102 = v3 + 2456;
              goto LABEL_10;
          }
      }
  }
}
