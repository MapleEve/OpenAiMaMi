// win 1.2.7 | module src/core/repository.rs | ea 0x1401ddeb0 | name sub_1401DDEB0
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401DDEB0(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 result; // rax
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int128 v12; // xmm2
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rcx
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // r12
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // r13
  __int64 v23; // r15
  int v24; // r12d
  __int64 v25; // rax
  __int128 v26; // xmm0
  __int128 v27; // xmm1
  __int128 v28; // xmm2
  __int128 v29; // xmm3
  __int64 v30; // rdx
  __int64 v31; // rcx
  void *v32; // rax
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm2
  __int128 v36; // [rsp+28h] [rbp-58h] BYREF
  __int64 v37; // [rsp+38h] [rbp-48h]
  __int128 v38; // [rsp+40h] [rbp-40h] BYREF
  __int128 v39; // [rsp+50h] [rbp-30h]
  __int128 v40; // [rsp+60h] [rbp-20h]
  __int128 v41; // [rsp+70h] [rbp-10h]
  __int128 v42; // [rsp+80h] [rbp+0h]
  __int64 v43; // [rsp+90h] [rbp+10h]
  _QWORD v44[2]; // [rsp+A0h] [rbp+20h] BYREF
  __int128 v45; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v46; // [rsp+C0h] [rbp+40h]
  __int128 v47; // [rsp+D0h] [rbp+50h]
  __int128 v48; // [rsp+E0h] [rbp+60h]
  __int128 v49; // [rsp+F0h] [rbp+70h]
  __int128 v50; // [rsp+100h] [rbp+80h]
  _BYTE v51[88]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v52; // [rsp+168h] [rbp+E8h]
  __int128 v53; // [rsp+178h] [rbp+F8h]
  __int128 v54; // [rsp+188h] [rbp+108h]
  __int128 v55; // [rsp+198h] [rbp+118h]
  __int128 v56; // [rsp+1A8h] [rbp+128h]
  __int64 v57; // [rsp+1B8h] [rbp+138h]
  _BYTE v58[104]; // [rsp+1C0h] [rbp+140h] BYREF
  __int128 v59; // [rsp+228h] [rbp+1A8h]
  __int128 v60; // [rsp+238h] [rbp+1B8h]
  __int128 v61; // [rsp+248h] [rbp+1C8h]
  __int128 v62; // [rsp+258h] [rbp+1D8h]
  __int64 v63; // [rsp+268h] [rbp+1E8h]
  __int128 v64; // [rsp+270h] [rbp+1F0h]
  __int64 v65; // [rsp+280h] [rbp+200h]

  v65 = -2;
  v44[0] = a3;
  v44[1] = a4;
  if ( (unsigned __int8)(sub_140F5F300(a2) - 1) < 2u )
  {
LABEL_2:
    nullsub_1(v8);
    result = sub_140001650(117, 1);
    if ( !result )
      sub_141938D2B(1, 117);
    *(_OWORD *)(result + 96) = xmmword_1419DA70D;
    *(_OWORD *)(result + 80) = xmmword_1419DA6FD;
    *(_OWORD *)(result + 64) = xmmword_1419DA6ED;
    *(_OWORD *)(result + 48) = xmmword_1419DA6DD;
    *(_OWORD *)(result + 32) = xmmword_1419DA6CD;
    *(_OWORD *)(result + 16) = xmmword_1419DA6BD;
    *(_OWORD *)result = xmmword_1419DA6AD;
    *(_QWORD *)(result + 109) = 0x8280E3B78FE5A6B4uLL;
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 117;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 117;
    goto LABEL_6;
  }
  sub_140F70BA0(v58, a2);
  v8 = *(_QWORD *)v58;
  result = v58[8];
  if ( *(_QWORD *)v58 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v58[88];
    *(_OWORD *)(a1 + 73) = *(_OWORD *)&v58[73];
    v10 = *(_OWORD *)&v58[9];
    v11 = *(_OWORD *)&v58[25];
    v12 = *(_OWORD *)&v58[41];
    *(_OWORD *)(a1 + 57) = *(_OWORD *)&v58[57];
    *(_OWORD *)(a1 + 41) = v12;
    *(_OWORD *)(a1 + 25) = v11;
    *(_OWORD *)(a1 + 9) = v10;
    *(_QWORD *)a1 = v8;
    *(_BYTE *)(a1 + 8) = result;
LABEL_6:
    *(_QWORD *)(a1 + 96) = 2;
    return result;
  }
  if ( (v58[8] & 1) != 0 )
    goto LABEL_2;
  v13 = a2[37];
  v14 = a2[38];
  sub_141695A00(v58, v13, v14);
  if ( *(_DWORD *)v58 == 2 )
  {
    v15 = v58[8] & 3;
    if ( (unsigned int)(v15 - 2) >= 2 && (v58[8] & 3) != 0 )
    {
      --*(_QWORD *)&v58[8];
      v58[0] = 3;
      sub_1416BCB00(&v58[8]);
    }
    nullsub_1(v15);
    result = sub_140001650(29, 1);
    if ( !result )
      sub_141938D2B(1, 29);
    qmemcpy((void *)result, "No AiMaMi registry exists yet", 29);
    *(_QWORD *)a1 = 8;
    *(_QWORD *)(a1 + 8) = 29;
    *(_QWORD *)(a1 + 16) = result;
    *(_QWORD *)(a1 + 24) = 29;
    goto LABEL_6;
  }
  sub_1401C7E40(v58, v13, v14);
  result = *(_QWORD *)v58;
  *(_OWORD *)v51 = *(_OWORD *)&v58[8];
  *(_OWORD *)&v51[16] = *(_OWORD *)&v58[24];
  *(_OWORD *)&v51[32] = *(_OWORD *)&v58[40];
  *(_OWORD *)&v51[48] = *(_OWORD *)&v58[56];
  *(_OWORD *)&v51[64] = *(_OWORD *)&v58[72];
  *(_QWORD *)&v51[80] = *(_QWORD *)&v58[88];
  if ( *(_QWORD *)v58 != -1 )
  {
    *(_QWORD *)(a1 + 88) = *(_QWORD *)&v51[80];
    *(_OWORD *)(a1 + 72) = *(_OWORD *)&v51[64];
    v16 = *(_OWORD *)v51;
    v17 = *(_OWORD *)&v51[16];
    v18 = *(_OWORD *)&v51[32];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v51[48];
    *(_OWORD *)(a1 + 40) = v18;
    *(_OWORD *)(a1 + 24) = v17;
    *(_OWORD *)(a1 + 8) = v16;
    *(_QWORD *)a1 = result;
    goto LABEL_6;
  }
  v43 = *(_QWORD *)&v51[80];
  v42 = *(_OWORD *)&v51[64];
  v41 = *(_OWORD *)&v51[48];
  v40 = *(_OWORD *)&v51[32];
  v39 = *(_OWORD *)&v51[16];
  v38 = *(_OWORD *)v51;
  v19 = *(_QWORD *)&v51[8];
  v20 = *(_QWORD *)&v51[16];
  *(_QWORD *)&v45 = *(_QWORD *)&v51[8];
  *((_QWORD *)&v45 + 1) = *(_QWORD *)&v51[8] + 424LL * *(_QWORD *)&v51[16];
  if ( sub_1401AB5B0(&v45, a3, a4) != 1 )
  {
    *(_QWORD *)v51 = v44;
    *(_QWORD *)&v51[8] = sub_140186EE0;
    sub_1416ABFD0(&v58[8], &unk_1419D6B52, v51);
    v25 = *(_QWORD *)&v58[8];
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v58[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v58[64];
    *(_OWORD *)(a1 + 48) = *(_OWORD *)&v58[48];
    *(_OWORD *)(a1 + 32) = *(_OWORD *)&v58[32];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)&v58[16];
    *(_QWORD *)a1 = 8;
    *(_QWORD *)(a1 + 8) = v25;
    *(_QWORD *)(a1 + 96) = 2;
    return sub_140033D80(&v38);
  }
  if ( v21 >= v20 )
    sub_1419390C3(v21, v20, &off_1419DA640);
  v22 = v21;
  sub_1416AB9B0(v58, *(_QWORD *)(v19 + 424 * v21 + 224), *(_QWORD *)(v19 + 424 * v21 + 232));
  v64 = *(_OWORD *)v58;
  v23 = *(_QWORD *)&v58[16];
  sub_141695A00(v58, *(_QWORD *)&v58[8], *(_QWORD *)&v58[16]);
  v24 = *(_DWORD *)v58;
  sub_14018FCC0(*(_QWORD *)v58, *(_QWORD *)&v58[8]);
  if ( v24 == 2 )
  {
    *(_QWORD *)v51 = *((_QWORD *)&v64 + 1);
    *(_QWORD *)&v51[8] = v23;
    *(_QWORD *)v58 = v51;
    *(_QWORD *)&v58[8] = sub_14169F630;
    sub_1416ABFD0(&v36, &unk_1419DA658, v58);
    *(_QWORD *)(a1 + 24) = v37;
    *(_OWORD *)(a1 + 8) = v36;
    *(_QWORD *)a1 = 8;
    goto LABEL_27;
  }
  sub_140ED9000((unsigned int)v58, DWORD2(v64), v23, a2[41], a2[42]);
  if ( *(_DWORD *)v58 != -1 )
  {
    *(_OWORD *)(a1 + 80) = *(_OWORD *)&v58[80];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)&v58[64];
    v26 = *(_OWORD *)v58;
    v27 = *(_OWORD *)&v58[16];
    v28 = *(_OWORD *)&v58[32];
    v29 = *(_OWORD *)&v58[48];
LABEL_26:
    *(_OWORD *)(a1 + 48) = v29;
    *(_OWORD *)(a1 + 32) = v28;
    *(_OWORD *)(a1 + 16) = v27;
    *(_OWORD *)a1 = v26;
LABEL_27:
    *(_QWORD *)(a1 + 96) = 2;
    v30 = v64;
    if ( (_QWORD)v64 )
LABEL_28:
      sub_140001660(*((_QWORD *)&v64 + 1), v30, 1);
    return sub_140033D80(&v38);
  }
  sub_140216790(v58, *((_QWORD *)&v64 + 1), v23);
  v45 = *(_OWORD *)&v58[8];
  v46 = *(_OWORD *)&v58[24];
  v47 = *(_OWORD *)&v58[40];
  v48 = *(_OWORD *)&v58[56];
  v49 = *(_OWORD *)&v58[72];
  v50 = *(_OWORD *)&v58[88];
  if ( *(_QWORD *)v58 == 2 )
  {
    *(_OWORD *)(a1 + 80) = v50;
    *(_OWORD *)(a1 + 64) = v49;
    v26 = v45;
    v27 = v46;
    v28 = v47;
    v29 = v48;
    goto LABEL_26;
  }
  v31 = v63;
  v57 = v63;
  v56 = v62;
  v55 = v61;
  v54 = v60;
  v53 = v59;
  *(_OWORD *)&v51[8] = v45;
  *(_OWORD *)&v51[24] = v46;
  *(_OWORD *)&v51[40] = v47;
  *(_OWORD *)&v51[56] = v48;
  *(_OWORD *)&v51[72] = v49;
  v52 = v50;
  *(_QWORD *)v51 = *(_QWORD *)v58;
  if ( (_QWORD)v48 != a4 || (unsigned int)sub_1418F4B70(*(_QWORD *)&v51[48], a3) )
  {
    nullsub_1(v31);
    v32 = (void *)sub_140001650(59, 1);
    if ( !v32 )
      sub_141938D2B(1, 59);
    qmemcpy(v32, "Account snapshot identity does not match its registry entry", 59);
    *(_QWORD *)a1 = 9;
    *(_QWORD *)(a1 + 8) = 59;
    *(_QWORD *)(a1 + 16) = v32;
    *(_QWORD *)(a1 + 24) = 59;
    *(_QWORD *)(a1 + 96) = 2;
    sub_140034220(v51);
    v30 = v64;
    if ( !(_QWORD)v64 )
      return sub_140033D80(&v38);
    goto LABEL_28;
  }
  *(_QWORD *)(a1 + 80) = v43;
  *(_OWORD *)(a1 + 64) = v42;
  v33 = v38;
  v34 = v39;
  v35 = v40;
  *(_OWORD *)(a1 + 48) = v41;
  *(_OWORD *)(a1 + 32) = v35;
  *(_OWORD *)(a1 + 16) = v34;
  *(_OWORD *)a1 = v33;
  result = sub_1418F44E0((__m128i *)(a1 + 96), (const __m128i *)v51, 0xB0u);
  *(_QWORD *)(a1 + 88) = v22;
  if ( (_QWORD)v64 )
    return sub_140001660(*((_QWORD *)&v64 + 1), v64, 1);
  return result;
}
