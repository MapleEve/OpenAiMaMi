// win 1.2.7 | module src/core/sessions/health.rs | ea 0x1402d3470 | name sub_1402D3470
// win 1.2.7 | module src/core/sessions/health.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1402D3470(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 *a5)
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
  __m128i v29; // [rsp+28h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-48h]
  __int128 v31; // [rsp+40h] [rbp-40h]
  __int128 v32; // [rsp+50h] [rbp-30h]
  __int128 v33; // [rsp+60h] [rbp-20h]
  __int128 v34; // [rsp+70h] [rbp-10h]
  __m128i v35; // [rsp+80h] [rbp+0h]
  __int64 v36; // [rsp+90h] [rbp+10h]
  _QWORD v37[2]; // [rsp+98h] [rbp+18h] BYREF
  __int128 v38; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v39; // [rsp+B8h] [rbp+38h]
  __int128 v40; // [rsp+C8h] [rbp+48h]
  __int128 v41; // [rsp+D8h] [rbp+58h]
  __m128i v42; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v43; // [rsp+F8h] [rbp+78h]
  __int64 v44; // [rsp+100h] [rbp+80h]
  unsigned __int64 v45; // [rsp+108h] [rbp+88h] BYREF
  char v46; // [rsp+117h] [rbp+97h]
  __int64 v47; // [rsp+118h] [rbp+98h]

  v47 = -2;
  if ( a4[11] == -1 )
    goto LABEL_21;
  v8 = a4[13];
  v37[0] = a4[12];
  v37[1] = v8;
  sub_141695A00(&v38, v37[0], v8);
  if ( (_DWORD)v38 == 2 )
  {
    v11 = *((_QWORD *)&v38 + 1);
    *((_QWORD *)&v31 + 1) = *((_QWORD *)&v38 + 1);
    *(_QWORD *)&v31 = 2;
    v12 = BYTE8(v38) & 3;
    switch ( BYTE8(v38) & 3 )
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
  v31 = v38;
  v36 = v43;
  v35 = _mm_loadu_si128(&v42);
  v34 = v41;
  v33 = v40;
  v32 = v39;
  if ( (_QWORD)v38 != 2 )
  {
    if ( (v35.m128i_i8[12] & 0x10) == 0 && ((v36 & 0x20000000) == 0 || (v35.m128i_i16[6] & 0x400) == 0) )
    {
      *(_BYTE *)(a1 + 8) = 1;
LABEL_32:
      *(_QWORD *)a1 = -1;
      return;
    }
LABEL_21:
    if ( a5[3] )
    {
      v15 = sub_140D2CC10(a5 + 4, a2, a3);
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
      v44 = i;
      while ( 1 )
      {
        __asm { tzcnt   ecx, r13d }
        v25 = v22;
        _RCX = -(__int64)(v18 & (v22 + _RCX));
        if ( a3 == *(_QWORD *)(v17 + 80 * _RCX - 64) )
        {
          v26 = sub_1418F4B70(a2, *(_QWORD *)(v17 + 80 * _RCX - 72));
          LOBYTE(_RCX) = 1;
          if ( !v26 )
            break;
        }
        v27 = _R13D - 1;
        LOWORD(v27) = _R13D & (_R13D - 1);
        v28 = (_WORD)v27 == 0;
        _R13D = v27;
        v22 = v25;
        i = v44;
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
  v11 = *((_QWORD *)&v31 + 1);
  v12 = BYTE8(v31) & 3;
  switch ( BYTE8(v31) & 3 )
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
      v46 = 1;
      v13 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v10, v9) + 8);
      v46 = 1;
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
          *((_QWORD *)&v38 + 1) = v11 - 1;
          LOBYTE(v38) = 3;
          v46 = 0;
          sub_1416BCB00((char *)&v38 + 8);
        }
        goto LABEL_21;
      }
LABEL_14:
      v45 = v11;
      *(_QWORD *)&v38 = v37;
      *((_QWORD *)&v38 + 1) = sub_140186EE0;
      *(_QWORD *)&v39 = &v45;
      *((_QWORD *)&v39 + 1) = sub_1416BB0B0;
      sub_1416ABFD0(&v29, &unk_1419E8098, &v38);
      *(_QWORD *)(a1 + 24) = v30;
      *(__m128i *)(a1 + 8) = _mm_loadu_si128(&v29);
      *(_QWORD *)a1 = 10;
      if ( (v45 & 3) - 2 >= 2 && (v45 & 3) != 0 )
      {
        *((_QWORD *)&v38 + 1) = v45 - 1;
        LOBYTE(v38) = 3;
        v46 = 0;
        sub_1416BCB00((char *)&v38 + 8);
      }
      break;
  }
}
