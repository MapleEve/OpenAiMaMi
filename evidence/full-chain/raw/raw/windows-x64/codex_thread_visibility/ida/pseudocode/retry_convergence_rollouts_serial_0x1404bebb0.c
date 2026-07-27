// win 1.2.1 | module src/core/relay/codex_thread_visibility.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_thread_visibility::retry_convergence_rollouts_serial | 跨平台字符串签名匹配(名↔函数一致)
_QWORD *__fastcall retry_convergence_rollouts_serial(
        __int64 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7)
{
  __int64 v11; // r12
  __int64 v12; // r13
  _QWORD *result; // rax
  __int64 v14; // rax
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // rsi
  __int128 v22; // [rsp+38h] [rbp-48h] BYREF
  __int64 v23; // [rsp+48h] [rbp-38h]
  __int128 v24; // [rsp+50h] [rbp-30h] BYREF
  __int64 v25; // [rsp+60h] [rbp-20h]
  _QWORD v26[4]; // [rsp+70h] [rbp-10h] BYREF
  __int128 v27; // [rsp+90h] [rbp+10h] BYREF
  __int128 v28; // [rsp+A0h] [rbp+20h]
  __int128 v29; // [rsp+B0h] [rbp+30h]
  __int128 v30; // [rsp+C0h] [rbp+40h]
  __int128 v31; // [rsp+D0h] [rbp+50h]
  __int128 v32; // [rsp+E0h] [rbp+60h]
  __int128 v33; // [rsp+F0h] [rbp+70h] BYREF
  __int128 v34; // [rsp+100h] [rbp+80h]
  __int128 v35; // [rsp+110h] [rbp+90h]
  __int128 v36; // [rsp+120h] [rbp+A0h]
  __int128 v37; // [rsp+130h] [rbp+B0h]
  __int128 v38; // [rsp+140h] [rbp+C0h]
  __int128 v39; // [rsp+150h] [rbp+D0h]
  __int64 v40; // [rsp+160h] [rbp+E0h]
  __int64 v41; // [rsp+168h] [rbp+E8h]
  __int64 v42; // [rsp+170h] [rbp+F0h]
  char v43; // [rsp+17Fh] [rbp+FFh] BYREF
  __int64 v44; // [rsp+180h] [rbp+100h]
  char v45; // [rsp+18Eh] [rbp+10Eh]
  char v46; // [rsp+18Fh] [rbp+10Fh]
  __int64 v47; // [rsp+190h] [rbp+110h]

  v47 = -2; /*0x1404bebcb*/
  v11 = a6[1]; /*0x1404bebe9*/
  v12 = a6[2]; /*0x1404bebed*/
  v46 = 1; /*0x1404bebf1*/
  sub_1404C38B0((unsigned int)&v27, (unsigned int)aThreadConverge_0, 24, v11, v12); /*0x1404bec14*/
  if ( (_DWORD)v27 == -1 ) /*0x1404bec1e*/
  {
    if ( *(_QWORD *)off_141EC8D80 >= 2u ) /*0x1404becff*/
    {
      *(_QWORD *)&v27 = a7; /*0x1404bed0c*/
      *((_QWORD *)&v27 + 1) = sub_140B036A0; /*0x1404bed17*/
      *(_QWORD *)&v33 = 0; /*0x1404bed1b*/
      *((_QWORD *)&v33 + 1) = aCodexmateLibCo_0; /*0x1404bed2a*/
      v34 = 0x33u; /*0x1404bed2e*/
      *(_QWORD *)&v35 = aSrcCoreRelayCo_0; /*0x1404bed4b*/
      *((_QWORD *)&v35 + 1) = 41; /*0x1404bed52*/
      *(_QWORD *)&v36 = 2; /*0x1404bed5d*/
      *((_QWORD *)&v36 + 1) = aCodexmateLibCo_0; /*0x1404bed68*/
      *(_QWORD *)&v37 = 51; /*0x1404bed6f*/
      *((_QWORD *)&v37 + 1) = 0x49200000001LL; /*0x1404bed84*/
      *(_QWORD *)&v38 = &unk_14175C4A6; /*0x1404bed92*/
      *((_QWORD *)&v38 + 1) = &v27; /*0x1404bed99*/
      v46 = 1; /*0x1404beda0*/
      sub_1412C36A0(&v43, &v33); /*0x1404bedb2*/
    }
    v46 = 1; /*0x1404bedbf*/
    sub_1404BCD80((unsigned int)&v33, a2, a3, a4, a5); /*0x1404bedd8*/
    v14 = *((_QWORD *)&v34 + 1); /*0x1404bedde*/
    v27 = v33; /*0x1404bede9*/
    *(_QWORD *)&v28 = v34; /*0x1404bedf4*/
    v41 = v12; /*0x1404bedfc*/
    v42 = v11; /*0x1404bee03*/
    if ( *((_QWORD *)&v34 + 1) == -1 ) /*0x1404bee0a*/
    {
      v24 = v27; /*0x1404beec4*/
      v25 = v28; /*0x1404beecc*/
      v46 = 1; /*0x1404beed0*/
      sub_1404C3C90(a1, a2, a3, a4, a5, (__int64)&v24); /*0x1404beef1*/
      v45 = 1; /*0x1404beef7*/
      sub_14043E650(a7); /*0x1404bef05*/
      v44 = 0; /*0x1404bef0b*/
      v20 = v11; /*0x1404bef16*/
      while ( v41 != v44 ) /*0x1404bef2e*/
      {
        ++v44; /*0x1404bef33*/
        v21 = v20 + 128; /*0x1404bef3a*/
        sub_1402C7EE0(); /*0x1404bef41*/
        v20 = v21; /*0x1404bef47*/
      }
    }
    else
    {
      *(_QWORD *)(a1 + 112) = v40; /*0x1404bee17*/
      *(_OWORD *)(a1 + 96) = v39; /*0x1404bee22*/
      v15 = v35; /*0x1404bee26*/
      v16 = v36; /*0x1404bee2d*/
      v17 = v37; /*0x1404bee34*/
      *(_OWORD *)(a1 + 80) = v38; /*0x1404bee42*/
      *(_OWORD *)(a1 + 64) = v17; /*0x1404bee46*/
      *(_OWORD *)(a1 + 48) = v16; /*0x1404bee4a*/
      *(_OWORD *)(a1 + 32) = v15; /*0x1404bee4e*/
      *(_QWORD *)(a1 + 16) = v28; /*0x1404bee56*/
      *(_OWORD *)a1 = v27; /*0x1404bee5e*/
      *(_QWORD *)(a1 + 24) = v14; /*0x1404bee61*/
      v45 = 1; /*0x1404bee65*/
      sub_14043E650(a7); /*0x1404bee73*/
      v44 = 0; /*0x1404bee79*/
      v18 = v11; /*0x1404bee84*/
      while ( v41 != v44 ) /*0x1404bee9e*/
      {
        ++v44; /*0x1404beea7*/
        v19 = v18 + 128; /*0x1404beeae*/
        sub_1402C7EE0(); /*0x1404beeb5*/
        v18 = v19; /*0x1404beebb*/
      }
    }
    result = a6; /*0x1404bef4c*/
    if ( *a6 ) /*0x1404bef53*/
      return (_QWORD *)sub_140001660(v42, *a6 << 7, 8); /*0x1404bef6c*/
  }
  else
  {
    v38 = v32; /*0x1404bec28*/
    v37 = v31; /*0x1404bec33*/
    v36 = v30; /*0x1404bec4a*/
    v35 = v29; /*0x1404bec51*/
    v34 = v28; /*0x1404bec58*/
    v33 = v27; /*0x1404bec5f*/
    v26[0] = a7; /*0x1404bec6a*/
    v26[1] = sub_140B036A0; /*0x1404bec75*/
    v26[2] = &v33; /*0x1404bec7d*/
    v26[3] = sub_140B036A0; /*0x1404bec81*/
    sub_14149C0F0(&v22, &unk_14175C449, v26); /*0x1404bec94*/
    *(_QWORD *)(a1 + 48) = v23; /*0x1404bec9e*/
    *(_OWORD *)(a1 + 32) = v22; /*0x1404beca6*/
    *(_QWORD *)(a1 + 16) = a6[2]; /*0x1404becb5*/
    *(_OWORD *)a1 = *(_OWORD *)a6; /*0x1404becbc*/
    *(_QWORD *)(a1 + 24) = 10; /*0x1404becbf*/
    v46 = 0; /*0x1404becc7*/
    sub_14043E650(&v33); /*0x1404becd2*/
    v45 = 0; /*0x1404becd8*/
    return (_QWORD *)sub_14043E650(a7); /*0x1404bece6*/
  }
  return result; /*0x1404bef72*/
}