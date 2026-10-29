// win 1.2.7 latest-exe | module src/core/sessions/health.rs | ea 0x140880350 | successor of pre-update 0x1402d3470 | session <审计会话>
// match evidence: {"body_sim": 0.99, "str_ov": 0, "anchor": 0.717, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
__int64 __fastcall sub_140880350(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 *a5)
{
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // r14
  __int64 v12; // r15
  __int64 (__fastcall *v13)(unsigned __int64); // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v17; // r14
  __int64 v18; // r15
  __m128i v19; // xmm0
  __m128i v20; // xmm6
  __int64 i; // rdx
  unsigned __int64 v22; // rax
  __m128i v23; // xmm8
  unsigned __int64 v25; // r12
  int v26; // eax
  int v27; // eax
  bool v28; // zf
  __m128i v30; // [rsp+28h] [rbp-58h] BYREF
  __int64 v31; // [rsp+38h] [rbp-48h]
  __int128 v32; // [rsp+40h] [rbp-40h]
  __int128 v33; // [rsp+50h] [rbp-30h]
  __int128 v34; // [rsp+60h] [rbp-20h]
  __int128 v35; // [rsp+70h] [rbp-10h]
  __m128i v36; // [rsp+80h] [rbp+0h]
  __int64 v37; // [rsp+90h] [rbp+10h]
  _QWORD v38[2]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v39; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v40; // [rsp+B8h] [rbp+38h]
  __int128 v41; // [rsp+C8h] [rbp+48h]
  __int128 v42; // [rsp+D8h] [rbp+58h]
  __m128i v43; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v44; // [rsp+F8h] [rbp+78h]
  __int64 v45; // [rsp+100h] [rbp+80h]
  unsigned __int64 v46; // [rsp+108h] [rbp+88h] BYREF
  char v47; // [rsp+117h] [rbp+97h]
  __int64 v48; // [rsp+118h] [rbp+98h]

  v48 = -2;
  if ( a4[11] == -1 )
    goto LABEL_21;
  v8 = a4[13];
  v38[0] = a4[12];
  v38[1] = v8;
  sub_1416C49D0(&v39, v38[0], v8);
  if ( (_DWORD)v39 == 2 )
  {
    v11 = *((_QWORD *)&v39 + 1);
    *((_QWORD *)&v32 + 1) = *((_QWORD *)&v39 + 1);
    *(_QWORD *)&v32 = 2;
    v12 = BYTE8(v39) & 3;
    switch ( BYTE8(v39) & 3 )
    {
      case 0:
        goto LABEL_6;
      case 1:
        goto LABEL_17;
      case 2:
        goto LABEL_11;
      case 3:
        goto LABEL_12;
    }
  }
  v32 = v39;
  v37 = v44;
  v36 = _mm_loadu_si128(&v43);
  v35 = v42;
  v34 = v41;
  v33 = v40;
  if ( (_QWORD)v39 != 2 )
  {
    if ( (v36.m128i_i8[12] & 0x10) == 0 && ((v37 & 0x20000000) == 0 || (v36.m128i_i16[6] & 0x400) == 0) )
    {
      *(_BYTE *)(a1 + 8) = 1;
LABEL_32:
      *(_QWORD *)a1 = -1;
      return a1;
    }
LABEL_21:
    if ( a5[3] )
    {
      v15 = sub_1406D0E00(a5 + 4, a2, a3);
      _RCX = v15 >> 57;
      v17 = *a5;
      v18 = a5[1];
      v19 = _mm_cvtsi32_si128(v15 >> 57);
      v20 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v19, v19), 0), 68);
      for ( i = 0; ; i += 16 )
      {
        v22 = v18 & v15;
        v23 = _mm_loadu_si128((const __m128i *)(v17 + v22));
        _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v23, v20));
        if ( _R13D )
          break;
LABEL_28:
        _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v23, (__m128i)-1LL));
        if ( (_DWORD)_RCX )
          goto LABEL_30;
        v15 = i + v22 + 16;
      }
      v45 = i;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r13d }
        v25 = v22;
        _RCX = -(__int64)(v18 & (v22 + _RCX));
        if ( a3 == *(_QWORD *)(v17 + 80 * _RCX - 64) )
        {
          v26 = sub_141923B40(a2, *(_QWORD *)(v17 + 80 * _RCX - 72), a3);
          LOBYTE(_RCX) = 1;
          if ( !v26 )
            break;
        }
        v27 = _R13D - 1;
        LOWORD(v27) = _R13D & (_R13D - 1);
        v28 = (_WORD)v27 == 0;
        _R13D = v27;
        v22 = v25;
        i = v45;
        if ( v28 )
          goto LABEL_28;
      }
    }
    else
    {
LABEL_30:
      LOBYTE(_RCX) = 0;
    }
    *(_BYTE *)(a1 + 8) = _RCX;
    goto LABEL_32;
  }
  v11 = *((_QWORD *)&v32 + 1);
  v12 = BYTE8(v32) & 3;
  switch ( BYTE8(v32) & 3 )
  {
    case 0:
LABEL_6:
      if ( *(_BYTE *)(v11 + 16) )
        goto LABEL_14;
      goto LABEL_18;
    case 1:
LABEL_17:
      if ( !*(_BYTE *)(v11 + 31) )
        goto LABEL_18;
      goto LABEL_14;
    case 2:
LABEL_11:
      v47 = 1;
      v13 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416E2EE0(v10, v9) + 8);
      v47 = 1;
      LOBYTE(v14) = v13(HIDWORD(v11));
      goto LABEL_13;
    case 3:
LABEL_12:
      v14 = HIDWORD(v11);
LABEL_13:
      if ( !(_BYTE)v14 )
      {
LABEL_18:
        if ( (unsigned int)(v12 - 2) >= 2 && v12 )
        {
          *((_QWORD *)&v39 + 1) = v11 - 1;
          LOBYTE(v39) = 3;
          v47 = 0;
          sub_1416EBAD0((char *)&v39 + 8);
        }
        goto LABEL_21;
      }
LABEL_14:
      v46 = v11;
      *(_QWORD *)&v39 = v38;
      *((_QWORD *)&v39 + 1) = sub_140191200;
      *(_QWORD *)&v40 = &v46;
      *((_QWORD *)&v40 + 1) = sub_1416EA080;
      sub_1416DAFA0(&v30, &unk_141A53704, &v39);
      *(_QWORD *)(a1 + 24) = v31;
      *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v30);
      *(_QWORD *)a1 = 10;
      if ( (v46 & 3) - 2 >= 2 && (v46 & 3) != 0 )
      {
        *((_QWORD *)&v39 + 1) = v46 - 1;
        LOBYTE(v39) = 3;
        v47 = 0;
        sub_1416EBAD0((char *)&v39 + 8);
      }
      break;
  }
  return a1;
}
