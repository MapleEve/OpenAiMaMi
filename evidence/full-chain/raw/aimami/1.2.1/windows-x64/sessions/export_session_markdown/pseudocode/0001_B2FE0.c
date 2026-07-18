// win 1.2.1 NEW export_session_markdown 0x1415b2fe0 d=1
__int64 __fastcall sub_1415B2FE0(__m128i *_RCX, const __m128i *_RDX, unsigned __int64 _R8)
{
  __int64 result; // rax
  __int32 v4; // ecx
  __int16 v5; // r9
  __int8 v6; // r10
  __int16 v7; // cx
  __int8 v8; // r9
  __int16 v9; // r8
  __int8 v10; // r9
  __int32 v11; // ecx
  __int16 v12; // r9
  __int8 v13; // r8
  __int32 v14; // ecx
  __int8 v15; // r9
  __int16 v16; // cx
  __int8 v17; // cl
  __int32 v18; // ecx
  __int16 v19; // r8
  __int8 v20; // r8
  __m128i v21; // xmm2
  __m128i *v22; // r9
  const __m128i *v23; // r9
  __int64 v26; // r9
  __m128i v59; // xmm0
  __m128i v60; // xmm5
  __int64 v61; // r9
  __m128i v62; // xmm2
  __m128i v63; // xmm3
  __m128i v64; // xmm4
  __m128i v65; // xmm2
  __m128i v66; // xmm3
  __m128i v67; // xmm4
  unsigned __int64 v68; // r9
  __m128i v69; // xmm2
  char *v70; // rdx
  __int8 *v71; // rcx
  __int128 v72; // xmm0
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // r8
  _OWORD *v75; // r9
  __int128 v76; // xmm1
  unsigned __int64 v77; // r9
  __int128 v78; // xmm0
  __int128 v79; // xmm1
  __int128 v80; // xmm1
  __int128 v81; // xmm1
  __int128 v82; // xmm0
  __int128 v83; // xmm1
  unsigned __int64 i; // r9

  result = (__int64)_RCX; /*0x1415b2fe0*/
  switch ( _R8 ) /*0x1415b300b*/
  {
    case 0uLL: /*0x1415b300b*/
      return result;
    case 1uLL: /*0x1415b300b*/
      _RCX->m128i_i8[0] = _RDX->m128i_i8[0]; /*0x1415b30f7*/
      return result; /*0x1415b30f9*/
    case 2uLL: /*0x1415b300b*/
      _RCX->m128i_i16[0] = _RDX->m128i_i16[0]; /*0x1415b304b*/
      return result; /*0x1415b304e*/
    case 3uLL: /*0x1415b300b*/
      v13 = _RDX->m128i_i8[2]; /*0x1415b3082*/
      _RCX->m128i_i16[0] = _RDX->m128i_i16[0]; /*0x1415b3087*/
      _RCX->m128i_i8[2] = v13; /*0x1415b308a*/
      return result; /*0x1415b308e*/
    case 4uLL: /*0x1415b300b*/
      _RCX->m128i_i32[0] = _RDX->m128i_i32[0]; /*0x1415b30fc*/
      return result; /*0x1415b30fe*/
    case 5uLL: /*0x1415b300b*/
      v20 = _RDX->m128i_i8[4]; /*0x1415b30e1*/
      _RCX->m128i_i32[0] = _RDX->m128i_i32[0]; /*0x1415b30e6*/
      _RCX->m128i_i8[4] = v20; /*0x1415b30e8*/
      return result; /*0x1415b30ec*/
    case 6uLL: /*0x1415b300b*/
      v19 = _RDX->m128i_i16[2]; /*0x1415b30d2*/
      _RCX->m128i_i32[0] = _RDX->m128i_i32[0]; /*0x1415b30d7*/
      _RCX->m128i_i16[2] = v19; /*0x1415b30d9*/
      return result; /*0x1415b30de*/
    case 7uLL: /*0x1415b300b*/
      v9 = _RDX->m128i_i16[2]; /*0x1415b3052*/
      v10 = _RDX->m128i_i8[6]; /*0x1415b3057*/
      _RCX->m128i_i32[0] = _RDX->m128i_i32[0]; /*0x1415b305c*/
      _RCX->m128i_i16[2] = v9; /*0x1415b305e*/
      _RCX->m128i_i8[6] = v10; /*0x1415b3063*/
      return result; /*0x1415b3067*/
    case 8uLL: /*0x1415b300b*/
      _RCX->m128i_i64[0] = _RDX->m128i_i64[0]; /*0x1415b30f0*/
      return result; /*0x1415b30f3*/
    case 9uLL: /*0x1415b300b*/
      v17 = _RDX->m128i_i8[8]; /*0x1415b30b8*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x1415b30bc*/
      *(_BYTE *)(result + 8) = v17; /*0x1415b30bf*/
      return result; /*0x1415b30c2*/
    case 0xAuLL: /*0x1415b300b*/
      v16 = _RDX->m128i_i16[4]; /*0x1415b30a9*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x1415b30ad*/
      *(_WORD *)(result + 8) = v16; /*0x1415b30b0*/
      return result; /*0x1415b30b4*/
    case 0xBuLL: /*0x1415b300b*/
      v7 = _RDX->m128i_i16[4]; /*0x1415b3033*/
      v8 = _RDX->m128i_i8[10]; /*0x1415b3037*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x1415b303c*/
      *(_WORD *)(result + 8) = v7; /*0x1415b303f*/
      *(_BYTE *)(result + 10) = v8; /*0x1415b3043*/
      return result; /*0x1415b3047*/
    case 0xCuLL: /*0x1415b300b*/
      v18 = _RDX->m128i_i32[2]; /*0x1415b30c6*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x1415b30c9*/
      *(_DWORD *)(result + 8) = v18; /*0x1415b30cc*/
      return result; /*0x1415b30cf*/
    case 0xDuLL: /*0x1415b300b*/
      v14 = _RDX->m128i_i32[2]; /*0x1415b3093*/
      v15 = _RDX->m128i_i8[12]; /*0x1415b3096*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x1415b309b*/
      *(_DWORD *)(result + 8) = v14; /*0x1415b309e*/
      *(_BYTE *)(result + 12) = v15; /*0x1415b30a1*/
      return result; /*0x1415b30a5*/
    case 0xEuLL: /*0x1415b300b*/
      v11 = _RDX->m128i_i32[2]; /*0x1415b306b*/
      v12 = _RDX->m128i_i16[6]; /*0x1415b306e*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x1415b3073*/
      *(_DWORD *)(result + 8) = v11; /*0x1415b3076*/
      *(_WORD *)(result + 12) = v12; /*0x1415b3079*/
      return result; /*0x1415b307e*/
    case 0xFuLL: /*0x1415b300b*/
      v4 = _RDX->m128i_i32[2]; /*0x1415b3013*/
      v5 = _RDX->m128i_i16[6]; /*0x1415b3016*/
      v6 = _RDX->m128i_i8[14]; /*0x1415b301b*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x1415b3020*/
      *(_DWORD *)(result + 8) = v4; /*0x1415b3023*/
      *(_WORD *)(result + 12) = v5; /*0x1415b3026*/
      *(_BYTE *)(result + 14) = v6; /*0x1415b302b*/
      return result; /*0x1415b302f*/
    default:
      if ( _R8 <= 0x20 ) /*0x1415b3104*/
      {
        v21 = _mm_loadu_si128((const __m128i *)((char *)_RDX + _R8 - 16)); /*0x1415b310a*/
        *_RCX = _mm_loadu_si128(_RDX); /*0x1415b3111*/
        *(__m128i *)((char *)_RCX + _R8 - 16) = v21; /*0x1415b3115*/
        return result; /*0x1415b311c*/
      }
      v22 = (__m128i *)((char *)_RDX + _R8); /*0x1415b311d*/
      if ( _RCX <= _RDX ) /*0x1415b3124*/
        v22 = _RCX; /*0x1415b3124*/
      if ( _RCX < v22 ) /*0x1415b312b*/
      {
        v69 = *_RDX; /*0x1415b3580*/
        v70 = (char *)((char *)_RDX - (char *)_RCX); /*0x1415b3583*/
        v71 = &_RCX->m128i_i8[_R8]; /*0x1415b3586*/
        v72 = *(_OWORD *)&v70[(_QWORD)v71 - 16]; /*0x1415b3589*/
        v73 = (unsigned __int64)(v71 - 16); /*0x1415b358e*/
        v74 = _R8 - 16; /*0x1415b3592*/
        if ( (v73 & 0xF) != 0 ) /*0x1415b3599*/
        {
          v75 = (_OWORD *)v73; /*0x1415b359b*/
          v73 &= 0xFFFFFFFFFFFFFFF0uLL; /*0x1415b359e*/
          v76 = v72; /*0x1415b35a2*/
          v72 = *(_OWORD *)&v70[v73]; /*0x1415b35a5*/
          *v75 = v76; /*0x1415b35a9*/
          v74 = v73 - result; /*0x1415b35b0*/
        }
        v77 = v74 >> 7; /*0x1415b35b6*/
        if ( v74 >> 7 ) /*0x1415b35b6*/
        {
          for ( *(_OWORD *)v73 = v72; ; *(_OWORD *)v73 = v83 ) /*0x1415b35bc*/
          {
            v78 = *(_OWORD *)&v70[v73 - 16]; /*0x1415b35d7*/
            v79 = *(_OWORD *)&v70[v73 - 32]; /*0x1415b35dc*/
            v73 -= 128LL; /*0x1415b35e1*/
            *(_OWORD *)(v73 + 112) = v78; /*0x1415b35e8*/
            *(_OWORD *)(v73 + 96) = v79; /*0x1415b35ec*/
            v80 = *(_OWORD *)&v70[v73 + 64]; /*0x1415b35f5*/
            --v77; /*0x1415b35fa*/
            *(_OWORD *)(v73 + 80) = *(_OWORD *)&v70[v73 + 80]; /*0x1415b35fd*/
            *(_OWORD *)(v73 + 64) = v80; /*0x1415b3601*/
            v81 = *(_OWORD *)&v70[v73 + 32]; /*0x1415b360a*/
            *(_OWORD *)(v73 + 48) = *(_OWORD *)&v70[v73 + 48]; /*0x1415b360f*/
            *(_OWORD *)(v73 + 32) = v81; /*0x1415b3613*/
            v82 = *(_OWORD *)&v70[v73 + 16]; /*0x1415b3617*/
            v83 = *(_OWORD *)&v70[v73]; /*0x1415b361c*/
            if ( !v77 ) /*0x1415b3620*/
              break; /*0x1415b3620*/
            *(_OWORD *)(v73 + 16) = v82; /*0x1415b35d0*/
          }
          *(_OWORD *)(v73 + 16) = v82; /*0x1415b3622*/
          v74 &= 0x7Fu; /*0x1415b3626*/
          v72 = v83; /*0x1415b362a*/
        }
        for ( i = v74 >> 4; i; --i ) /*0x1415b3630*/
        {
          *(_OWORD *)v73 = v72; /*0x1415b3640*/
          v73 -= 16LL; /*0x1415b3643*/
          v72 = *(_OWORD *)&v70[v73]; /*0x1415b3647*/
        }
        if ( (v74 & 0xF) != 0 ) /*0x1415b3654*/
          *(__m128i *)result = v69; /*0x1415b3656*/
        *(_OWORD *)v73 = v72; /*0x1415b3659*/
        return result; /*0x1415b365c*/
      }
      if ( (unsigned int)dword_141DC2080 < 3 ) /*0x1415b3138*/
      {
        if ( _R8 <= 0x800 || (dword_141DC7C24 & 2) == 0 ) /*0x1415b3440*/
        {
          v59 = _mm_loadu_si128(_RDX); /*0x1415b3446*/
          v60 = _mm_loadu_si128((const __m128i *)((char *)_RDX + _R8 - 16)); /*0x1415b344a*/
          if ( _R8 > 0x80 ) /*0x1415b3458*/
          {
            v61 = ((unsigned __int8)_RCX & 0xF) - 16LL; /*0x1415b3465*/
            _RCX = (__m128i *)((char *)_RCX - v61); /*0x1415b3469*/
            _RDX = (const __m128i *)((char *)_RDX - v61); /*0x1415b346c*/
            _R8 += v61; /*0x1415b346f*/
            if ( _R8 > 0x80 ) /*0x1415b3479*/
            {
              do /*0x1415b34ea*/
              {
                v62 = _mm_loadu_si128(_RDX + 1); /*0x1415b3484*/
                v63 = _mm_loadu_si128(_RDX + 2); /*0x1415b3489*/
                v64 = _mm_loadu_si128(_RDX + 3); /*0x1415b348e*/
                *_RCX = _mm_loadu_si128(_RDX); /*0x1415b3493*/
                _RCX[1] = v62; /*0x1415b3497*/
                _RCX[2] = v63; /*0x1415b349c*/
                _RCX[3] = v64; /*0x1415b34a1*/
                v65 = _mm_loadu_si128(_RDX + 5); /*0x1415b34ab*/
                v66 = _mm_loadu_si128(_RDX + 6); /*0x1415b34b0*/
                v67 = _mm_loadu_si128(_RDX + 7); /*0x1415b34b5*/
                _RCX[4] = _mm_loadu_si128(_RDX + 4); /*0x1415b34ba*/
                _RCX[5] = v65; /*0x1415b34bf*/
                _RCX[6] = v66; /*0x1415b34c4*/
                _RCX[7] = v67; /*0x1415b34c9*/
                _RCX += 8; /*0x1415b34ce*/
                _RDX += 8; /*0x1415b34d5*/
                _R8 -= 128LL; /*0x1415b34dc*/
              }
              while ( _R8 >= 0x80 ); /*0x1415b34ea*/
            }
          }
          v68 = (_R8 + 15) & 0xFFFFFFFFFFFFFFF0uLL; /*0x1415b34f0*/
          switch ( v68 >> 4 ) /*0x1415b3506*/
          {
            case 0uLL: /*0x1415b3506*/
              goto LABEL_68;
            case 1uLL: /*0x1415b3506*/
              goto LABEL_67;
            case 2uLL: /*0x1415b3506*/
              goto LABEL_66;
            case 3uLL: /*0x1415b3506*/
              goto LABEL_65;
            case 4uLL: /*0x1415b3506*/
              goto LABEL_64;
            case 5uLL: /*0x1415b3506*/
              goto LABEL_63;
            case 6uLL: /*0x1415b3506*/
              goto LABEL_62;
            case 7uLL: /*0x1415b3506*/
              goto LABEL_61;
            case 8uLL: /*0x1415b3506*/
              *(__m128i *)((char *)_RCX + v68 - 128) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 128)); /*0x1415b3510*/
LABEL_61:
              *(__m128i *)((char *)_RCX + v68 - 112) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 112)); /*0x1415b3517*/
LABEL_62:
              *(__m128i *)((char *)_RCX + v68 - 96) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 96)); /*0x1415b3525*/
LABEL_63:
              *(__m128i *)((char *)_RCX + v68 - 80) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 80)); /*0x1415b3533*/
LABEL_64:
              *(__m128i *)((char *)_RCX + v68 - 64) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 64)); /*0x1415b3541*/
LABEL_65:
              *(__m128i *)((char *)_RCX + v68 - 48) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 48)); /*0x1415b354f*/
LABEL_66:
              *(__m128i *)((char *)_RCX + v68 - 32) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 32)); /*0x1415b355d*/
LABEL_67:
              *(__m128i *)((char *)_RCX + _R8 - 16) = v60; /*0x1415b356b*/
LABEL_68:
              *(__m128i *)result = v59; /*0x1415b3572*/
              break; /*0x1415b3576*/
          }
          return result; /*0x1415b3576*/
        }
        return sub_1415B2FD0(); /*0x1415b3167*/
      }
      if ( _R8 > 0x2000 && _R8 <= 0x180000 ) /*0x1415b314e*/
      {
        v23 = _RCX + 4; /*0x1415b3150*/
        if ( _RCX > _RDX ) /*0x1415b3157*/
          v23 = _RDX; /*0x1415b3157*/
        if ( v23 <= _RDX && (dword_141DC7C24 & 2) != 0 ) /*0x1415b3167*/
          return sub_1415B2FD0(); /*0x1415b3167*/
      }
      __asm /*0x1415b316d*/
      {
        vmovdqu ymm0, ymmword ptr [rdx]
        vmovdqu ymm5, ymmword ptr [rdx+r8-20h]
      }
      if ( _R8 <= 0x100 /*0x1415b31a0*/
        || (v26 = ((unsigned __int8)_RCX & 0x1F) - 32LL,
            _RCX = (__m128i *)((char *)_RCX - v26),
            _RDX = (const __m128i *)((char *)_RDX - v26),
            _R8 += v26,
            _R8 <= 0x100) )
      {
LABEL_33:
        _R9 = (_R8 + 31) & 0xFFFFFFFFFFFFFFE0uLL; /*0x1415b324c*/
        switch ( _R9 >> 5 ) /*0x1415b3262*/
        {
          case 0uLL: /*0x1415b3262*/
            goto LABEL_42;
          case 1uLL: /*0x1415b3262*/
            goto LABEL_41;
          case 2uLL: /*0x1415b3262*/
            goto LABEL_40;
          case 3uLL: /*0x1415b3262*/
            goto LABEL_39;
          case 4uLL: /*0x1415b3262*/
            goto LABEL_38;
          case 5uLL: /*0x1415b3262*/
            goto LABEL_37;
          case 6uLL: /*0x1415b3262*/
            goto LABEL_36;
          case 7uLL: /*0x1415b3262*/
            goto LABEL_35;
          case 8uLL: /*0x1415b3262*/
            __asm /*0x1415b3265*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-100h]; jumptable 00000001415B3262 case 8
              vmovdqu ymmword ptr [rcx+r9-100h], ymm1
            }
LABEL_35:
            __asm /*0x1415b3279*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-0E0h]; jumptable 00000001415B3262 case 7
              vmovdqu ymmword ptr [rcx+r9-0E0h], ymm1
            }
LABEL_36:
            __asm /*0x1415b328d*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-0C0h]; jumptable 00000001415B3262 case 6
              vmovdqu ymmword ptr [rcx+r9-0C0h], ymm1
            }
LABEL_37:
            __asm /*0x1415b32a1*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-0A0h]; jumptable 00000001415B3262 case 5
              vmovdqu ymmword ptr [rcx+r9-0A0h], ymm1
            }
LABEL_38:
            __asm /*0x1415b32b5*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-80h]; jumptable 00000001415B3262 case 4
              vmovdqu ymmword ptr [rcx+r9-80h], ymm1
            }
LABEL_39:
            __asm /*0x1415b32c3*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-60h]; jumptable 00000001415B3262 case 3
              vmovdqu ymmword ptr [rcx+r9-60h], ymm1
            }
LABEL_40:
            __asm /*0x1415b32d1*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-40h]; jumptable 00000001415B3262 case 2
              vmovdqu ymmword ptr [rcx+r9-40h], ymm1
            }
LABEL_41:
            __asm { vmovdqu ymmword ptr [rcx+r8-20h], ymm5; jumptable 00000001415B3262 case 1 } /*0x1415b32df*/
LABEL_42:
            __asm /*0x1415b32e6*/
            {
              vmovdqu ymmword ptr [rax], ymm0; jumptable 00000001415B3262 case 0
              vzeroupper
            }
            break; /*0x1415b32ed*/
        }
        return result; /*0x1415b32ed*/
      }
      if ( _R8 <= 0x180000 ) /*0x1415b31ad*/
      {
        do /*0x1415b3242*/
        {
          __asm /*0x1415b31c0*/
          {
            vmovdqu ymm1, ymmword ptr [rdx]
            vmovdqu ymm2, ymmword ptr [rdx+20h]
            vmovdqu ymm3, ymmword ptr [rdx+40h]
            vmovdqu ymm4, ymmword ptr [rdx+60h]
            vmovdqa ymmword ptr [rcx], ymm1
            vmovdqa ymmword ptr [rcx+20h], ymm2
            vmovdqa ymmword ptr [rcx+40h], ymm3
            vmovdqa ymmword ptr [rcx+60h], ymm4
            vmovdqu ymm1, ymmword ptr [rdx+80h]
            vmovdqu ymm2, ymmword ptr [rdx+0A0h]
            vmovdqu ymm3, ymmword ptr [rdx+0C0h]
            vmovdqu ymm4, ymmword ptr [rdx+0E0h]
            vmovdqa ymmword ptr [rcx+80h], ymm1
            vmovdqa ymmword ptr [rcx+0A0h], ymm2
            vmovdqa ymmword ptr [rcx+0C0h], ymm3
            vmovdqa ymmword ptr [rcx+0E0h], ymm4
          }
          _RCX += 16; /*0x1415b3226*/
          _RDX += 16; /*0x1415b322d*/
          _R8 -= 256LL; /*0x1415b3234*/
        }
        while ( _R8 >= 0x100 ); /*0x1415b3242*/
        goto LABEL_33; /*0x1415b3242*/
      }
      do /*0x1415b3372*/
      {
        __asm /*0x1415b32f0*/
        {
          vmovdqu ymm1, ymmword ptr [rdx]
          vmovdqu ymm2, ymmword ptr [rdx+20h]
          vmovdqu ymm3, ymmword ptr [rdx+40h]
          vmovdqu ymm4, ymmword ptr [rdx+60h]
          vmovntdq ymmword ptr [rcx], ymm1
          vmovntdq ymmword ptr [rcx+20h], ymm2
          vmovntdq ymmword ptr [rcx+40h], ymm3
          vmovntdq ymmword ptr [rcx+60h], ymm4
          vmovdqu ymm1, ymmword ptr [rdx+80h]
          vmovdqu ymm2, ymmword ptr [rdx+0A0h]
          vmovdqu ymm3, ymmword ptr [rdx+0C0h]
          vmovdqu ymm4, ymmword ptr [rdx+0E0h]
          vmovntdq ymmword ptr [rcx+80h], ymm1
          vmovntdq ymmword ptr [rcx+0A0h], ymm2
          vmovntdq ymmword ptr [rcx+0C0h], ymm3
          vmovntdq ymmword ptr [rcx+0E0h], ymm4
        }
        _RCX += 16; /*0x1415b3356*/
        _RDX += 16; /*0x1415b335d*/
        _R8 -= 256LL; /*0x1415b3364*/
      }
      while ( _R8 >= 0x100 ); /*0x1415b3372*/
      _R9 = (_R8 + 31) & 0xFFFFFFFFFFFFFFE0uLL; /*0x1415b337c*/
      switch ( _R9 >> 5 ) /*0x1415b3392*/
      {
        case 0uLL: /*0x1415b3392*/
          goto LABEL_53;
        case 1uLL: /*0x1415b3392*/
          goto LABEL_52;
        case 2uLL: /*0x1415b3392*/
          goto LABEL_51;
        case 3uLL: /*0x1415b3392*/
          goto LABEL_50;
        case 4uLL: /*0x1415b3392*/
          goto LABEL_49;
        case 5uLL: /*0x1415b3392*/
          goto LABEL_48;
        case 6uLL: /*0x1415b3392*/
          goto LABEL_47;
        case 7uLL: /*0x1415b3392*/
          goto LABEL_46;
        case 8uLL: /*0x1415b3392*/
          __asm /*0x1415b3395*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-100h]; jumptable 00000001415B3392 case 8
            vmovntdq ymmword ptr [rcx+r9-100h], ymm1
          }
LABEL_46:
          __asm /*0x1415b33a9*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-0E0h]; jumptable 00000001415B3392 case 7
            vmovntdq ymmword ptr [rcx+r9-0E0h], ymm1
          }
LABEL_47:
          __asm /*0x1415b33bd*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-0C0h]; jumptable 00000001415B3392 case 6
            vmovntdq ymmword ptr [rcx+r9-0C0h], ymm1
          }
LABEL_48:
          __asm /*0x1415b33d1*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-0A0h]; jumptable 00000001415B3392 case 5
            vmovntdq ymmword ptr [rcx+r9-0A0h], ymm1
          }
LABEL_49:
          __asm /*0x1415b33e5*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-80h]; jumptable 00000001415B3392 case 4
            vmovntdq ymmword ptr [rcx+r9-80h], ymm1
          }
LABEL_50:
          __asm /*0x1415b33f3*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-60h]; jumptable 00000001415B3392 case 3
            vmovntdq ymmword ptr [rcx+r9-60h], ymm1
          }
LABEL_51:
          __asm /*0x1415b3401*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-40h]; jumptable 00000001415B3392 case 2
            vmovntdq ymmword ptr [rcx+r9-40h], ymm1
          }
LABEL_52:
          __asm { vmovdqu ymmword ptr [rcx+r8-20h], ymm5; jumptable 00000001415B3392 case 1 } /*0x1415b340f*/
LABEL_53:
          __asm { vmovdqu ymmword ptr [rax], ymm0; jumptable 00000001415B3392 case 0 } /*0x1415b3416*/
          _mm_sfence(); /*0x1415b341a*/
          __asm { vzeroupper } /*0x1415b341d*/
          break; /*0x1415b3420*/
      }
      return result;
  }
}