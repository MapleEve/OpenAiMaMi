// module: codexmate_lib/core/repository
// addr: 0x1403ba310
// name: sub_1403BA310
// win 1.2.1 | module src/core/repository.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
void __fastcall sub_1403BA310(_QWORD *a1, __int64 *a2)
{
  _QWORD *v3; // r15
  unsigned __int64 v5; // rax
  __int64 v7; // r12
  __int64 v8; // r13
  __m128i v9; // xmm0
  __m128i v10; // xmm6
  __int64 v11; // rdi
  __int64 v12; // rbx
  __int64 i; // rdx
  unsigned __int64 v14; // rax
  __m128i v15; // xmm8
  __int64 v17; // r14
  int v18; // eax
  bool v19; // zf
  __int64 v20; // rdx
  __int64 v21; // [rsp+28h] [rbp-A0h]
  unsigned __int64 v22; // [rsp+30h] [rbp-98h]
  __int128 v23; // [rsp+38h] [rbp-90h] BYREF
  __int64 v24; // [rsp+48h] [rbp-80h]

  if ( a2 && !a1[35] && a2[3] )
  {
    v3 = a1 + 33;
    v5 = sub_140378810(a2 + 4, a1 + 24);
    _RCX = v5 >> 57;
    v7 = *a2;
    v8 = a2[1];
    v9 = _mm_cvtsi32_si128(v5 >> 57);
    v10 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v9, v9), 0), 68);
    v11 = a1[25];
    v12 = a1[26];
    for ( i = 0; ; i += 16 )
    {
      v14 = v8 & v5;
      v15 = _mm_loadu_si128((const __m128i *)(v7 + v14));
      _EBP = _mm_movemask_epi8(_mm_cmpeq_epi8(v15, v10));
      if ( _EBP )
        break;
LABEL_10:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v15, (__m128i)-1LL));
      if ( (_DWORD)_RCX )
        return;
      v5 = i + v14 + 16;
    }
    v22 = v14;
    v21 = i;
    while ( 1 )
    {
      __asm { tzcnt   ecx, ebp }
      _RCX = -(__int64)(v8 & (v14 + _RCX));
      if ( v12 == *(_QWORD *)(v7 + 48 * _RCX - 32) )
      {
        v17 = v7 + 48 * _RCX;
        if ( !(unsigned int)sub_1416847B0(v11, *(_QWORD *)(v17 - 40), v12) )
          break;
      }
      v18 = _EBP - 1;
      LOWORD(v18) = _EBP & (_EBP - 1);
      v19 = (_WORD)v18 == 0;
      _EBP = v18;
      v14 = v22;
      i = v21;
      if ( v19 )
        goto LABEL_10;
    }
    sub_14033BC10(*(_QWORD *)(v17 - 16), *(_QWORD *)(v17 - 8));
    if ( v20 )
    {
      sub_14149C500(&v23, v17 - 24);
      if ( *v3 )
        sub_140001660(a1[34], *v3, 1);
      a1[35] = v24;
      *(_OWORD *)v3 = v23;
    }
  }
}