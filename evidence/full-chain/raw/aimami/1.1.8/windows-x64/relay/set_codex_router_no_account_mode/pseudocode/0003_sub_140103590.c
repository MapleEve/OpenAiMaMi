// win 1.1.8 set_codex_router_no_account_mode node va=0x140103590 depth=1
// sub_140103590
__int64 __fastcall sub_140103590(__int64 a1, __int64 *a2)
{
  char v2; // of
  volatile signed __int64 *v3; // rax
  __int64 v4; // rt0
  __int64 v5; // r13
  __int64 v6; // r9
  volatile signed __int64 *v7; // r8
  __int128 v8; // xmm0
  bool v9; // of
  __int64 v10; // rt0
  int v11; // r8d
  volatile signed __int64 *v12; // rdi
  __int64 v13; // r10
  __int64 v14; // rt0
  _QWORD *v15; // rsi
  bool v17; // of
  volatile signed __int64 *v18; // rbx
  __int64 v19; // rt0
  volatile signed __int64 *v20; // r14
  __int64 v21; // rt0
  volatile signed __int64 *v22; // r15
  __int64 v23; // rt0
  volatile signed __int64 *v24; // r12
  __int64 v25; // rt0
  __int64 v26; // r10
  volatile signed __int64 *v27; // r13
  __int64 v28; // rt0
  volatile signed __int64 *v29; // rbp
  __int64 v30; // rt0
  int v31; // r11d
  volatile signed __int64 *v32; // r8
  __int64 v33; // rt0
  __int64 result; // rax
  __int64 v35; // [rsp+0h] [rbp-48h]

  v3 = (volatile signed __int64 *)a2[3]; /*0x14010359d*/
  v4 = _InterlockedIncrement64(v3); /*0x1401035a1*/
  if ( (v4 < 0) ^ v2 | (v4 == 0) ) /*0x1401035a5*/
    goto LABEL_19; /*0x1401035a5*/
  v5 = a2[4]; /*0x1401035ab*/
  v6 = *a2; /*0x1401035af*/
  v7 = (volatile signed __int64 *)a2[1]; /*0x1401035b2*/
  v8 = *(_OWORD *)(a2 + 1); /*0x1401035b6*/
  v9 = 0; /*0x1401035ba*/
  if ( *a2 ) /*0x1401035af*/
  {
    v9 = __OFSUB__((_DWORD)v6, 1); /*0x1401035bf*/
    if ( (_DWORD)v6 == 1 ) /*0x1401035c3*/
    {
      if ( _InterlockedIncrement64(v7 + 48) <= 0 ) /*0x1401035cd*/
        __fastfail(7u); /*0x1401035d4*/
    }
    else
    {
      v10 = _InterlockedIncrement64(v7 + 14); /*0x1401035eb*/
      if ( (v10 < 0) ^ __OFSUB__((_DWORD)v6, 1) | (v10 == 0) ) /*0x1401035f0*/
        __fastfail(7u); /*0x1401036e0*/
    }
  }
  else if ( _InterlockedIncrement64(v7 + 64) <= 0 ) /*0x1401035e0*/
  {
    __fastfail(7u); /*0x1401035e7*/
  }
  v11 = *((_DWORD *)a2 + 16); /*0x1401035f6*/
  v12 = (volatile signed __int64 *)a2[5]; /*0x1401035fa*/
  v13 = a2[7]; /*0x1401035fe*/
  v14 = _InterlockedIncrement64(v12); /*0x140103602*/
  if ( (v14 < 0) ^ v9 | (v14 == 0) ) /*0x140103606*/
    goto LABEL_19; /*0x140103606*/
  v15 = (_QWORD *)a2[6]; /*0x14010360c*/
  v17 = __OFADD__(1, *v15); /*0x140103610*/
  if ( (*v15)++ == -1 ) /*0x140103610*/
    goto LABEL_19; /*0x140103613*/
  v18 = (volatile signed __int64 *)a2[9]; /*0x140103619*/
  v19 = _InterlockedIncrement64(v18); /*0x14010361d*/
  if ( (v19 < 0) ^ v17 | (v19 == 0) ) /*0x140103621*/
    goto LABEL_19; /*0x140103621*/
  v20 = (volatile signed __int64 *)a2[10]; /*0x140103627*/
  v21 = _InterlockedIncrement64(v20); /*0x14010362b*/
  if ( (v21 < 0) ^ v17 | (v21 == 0) ) /*0x14010362f*/
    goto LABEL_19; /*0x14010362f*/
  v22 = (volatile signed __int64 *)a2[11]; /*0x140103635*/
  v23 = _InterlockedIncrement64(v22); /*0x140103639*/
  if ( (v23 < 0) ^ v17 | (v23 == 0) ) /*0x14010363d*/
    goto LABEL_19; /*0x14010363d*/
  v24 = (volatile signed __int64 *)a2[12]; /*0x140103643*/
  v25 = _InterlockedIncrement64(v24); /*0x140103647*/
  if ( (v25 < 0) ^ v17 | (v25 == 0) ) /*0x14010364c*/
    goto LABEL_19; /*0x14010364c*/
  v35 = v13; /*0x140103652*/
  v26 = v5; /*0x140103656*/
  v27 = (volatile signed __int64 *)a2[13]; /*0x140103659*/
  v28 = _InterlockedIncrement64(v27); /*0x14010365d*/
  if ( (v28 < 0) ^ v17 | (v28 == 0) /*0x14010367a*/
    || (v29 = (volatile signed __int64 *)a2[14], v30 = _InterlockedIncrement64(v29), (v30 < 0) ^ v17 | (v30 == 0))
    || (v31 = v11,
        v32 = (volatile signed __int64 *)a2[15],
        v33 = _InterlockedIncrement64(v32),
        (v33 < 0) ^ v17 | (v33 == 0)) )
  {
LABEL_19:
    BUG(); /*0x1401036d9*/
  }
  *(_QWORD *)(a1 + 24) = v3; /*0x14010367c*/
  *(_QWORD *)(a1 + 32) = v26; /*0x140103680*/
  *(_QWORD *)a1 = v6; /*0x140103684*/
  *(_OWORD *)(a1 + 8) = v8; /*0x140103687*/
  *(_QWORD *)(a1 + 40) = v12; /*0x14010368b*/
  *(_QWORD *)(a1 + 48) = v15; /*0x14010368f*/
  *(_QWORD *)(a1 + 56) = v35; /*0x140103697*/
  *(_DWORD *)(a1 + 64) = v31; /*0x14010369b*/
  *(_QWORD *)(a1 + 72) = v18; /*0x14010369f*/
  *(_QWORD *)(a1 + 80) = v20; /*0x1401036a3*/
  *(_QWORD *)(a1 + 88) = v22; /*0x1401036a7*/
  *(_QWORD *)(a1 + 96) = v24; /*0x1401036ab*/
  *(_QWORD *)(a1 + 104) = v27; /*0x1401036af*/
  *(_QWORD *)(a1 + 112) = v29; /*0x1401036b3*/
  *(_QWORD *)(a1 + 120) = v32; /*0x1401036b7*/
  result = *((unsigned __int8 *)a2 + 128); /*0x1401036bb*/
  *(_BYTE *)(a1 + 128) = result; /*0x1401036c2*/
  return result; /*0x1401036c8*/
}