// win 1.1.8 reorder_relay_providers node va=0x1412762d0 depth=1
// D0
__int64 __fastcall sub_1412762D0(__m128i *_RCX, const __m128i *_RDX, unsigned __int64 _R8)
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

  result = (__int64)_RCX; /*0x1412762d0*/
  switch ( _R8 ) /*0x1412762fb*/
  {
    case 0uLL: /*0x1412762fb*/
      return result;
    case 1uLL: /*0x1412762fb*/
      _RCX->m128i_i8[0] = _RDX->m128i_i8[0]; /*0x1412763e7*/
      return result; /*0x1412763e9*/
    case 2uLL: /*0x1412762fb*/
      _RCX->m128i_i16[0] = _RDX->m128i_i16[0]; /*0x14127633b*/
      return result; /*0x14127633e*/
    case 3uLL: /*0x1412762fb*/
      v13 = _RDX->m128i_i8[2]; /*0x141276372*/
      _RCX->m128i_i16[0] = _RDX->m128i_i16[0]; /*0x141276377*/
      _RCX->m128i_i8[2] = v13; /*0x14127637a*/
      return result; /*0x14127637e*/
    case 4uLL: /*0x1412762fb*/
      _RCX->m128i_i32[0] = _RDX->m128i_i32[0]; /*0x1412763ec*/
      return result; /*0x1412763ee*/
    case 5uLL: /*0x1412762fb*/
      v20 = _RDX->m128i_i8[4]; /*0x1412763d1*/
      _RCX->m128i_i32[0] = _RDX->m128i_i32[0]; /*0x1412763d6*/
      _RCX->m128i_i8[4] = v20; /*0x1412763d8*/
      return result; /*0x1412763dc*/
    case 6uLL: /*0x1412762fb*/
      v19 = _RDX->m128i_i16[2]; /*0x1412763c2*/
      _RCX->m128i_i32[0] = _RDX->m128i_i32[0]; /*0x1412763c7*/
      _RCX->m128i_i16[2] = v19; /*0x1412763c9*/
      return result; /*0x1412763ce*/
    case 7uLL: /*0x1412762fb*/
      v9 = _RDX->m128i_i16[2]; /*0x141276342*/
      v10 = _RDX->m128i_i8[6]; /*0x141276347*/
      _RCX->m128i_i32[0] = _RDX->m128i_i32[0]; /*0x14127634c*/
      _RCX->m128i_i16[2] = v9; /*0x14127634e*/
      _RCX->m128i_i8[6] = v10; /*0x141276353*/
      return result; /*0x141276357*/
    case 8uLL: /*0x1412762fb*/
      _RCX->m128i_i64[0] = _RDX->m128i_i64[0]; /*0x1412763e0*/
      return result; /*0x1412763e3*/
    case 9uLL: /*0x1412762fb*/
      v17 = _RDX->m128i_i8[8]; /*0x1412763a8*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x1412763ac*/
      *(_BYTE *)(result + 8) = v17; /*0x1412763af*/
      return result; /*0x1412763b2*/
    case 0xAuLL: /*0x1412762fb*/
      v16 = _RDX->m128i_i16[4]; /*0x141276399*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x14127639d*/
      *(_WORD *)(result + 8) = v16; /*0x1412763a0*/
      return result; /*0x1412763a4*/
    case 0xBuLL: /*0x1412762fb*/
      v7 = _RDX->m128i_i16[4]; /*0x141276323*/
      v8 = _RDX->m128i_i8[10]; /*0x141276327*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x14127632c*/
      *(_WORD *)(result + 8) = v7; /*0x14127632f*/
      *(_BYTE *)(result + 10) = v8; /*0x141276333*/
      return result; /*0x141276337*/
    case 0xCuLL: /*0x1412762fb*/
      v18 = _RDX->m128i_i32[2]; /*0x1412763b6*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x1412763b9*/
      *(_DWORD *)(result + 8) = v18; /*0x1412763bc*/
      return result; /*0x1412763bf*/
    case 0xDuLL: /*0x1412762fb*/
      v14 = _RDX->m128i_i32[2]; /*0x141276383*/
      v15 = _RDX->m128i_i8[12]; /*0x141276386*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x14127638b*/
      *(_DWORD *)(result + 8) = v14; /*0x14127638e*/
      *(_BYTE *)(result + 12) = v15; /*0x141276391*/
      return result; /*0x141276395*/
    case 0xEuLL: /*0x1412762fb*/
      v11 = _RDX->m128i_i32[2]; /*0x14127635b*/
      v12 = _RDX->m128i_i16[6]; /*0x14127635e*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x141276363*/
      *(_DWORD *)(result + 8) = v11; /*0x141276366*/
      *(_WORD *)(result + 12) = v12; /*0x141276369*/
      return result; /*0x14127636e*/
    case 0xFuLL: /*0x1412762fb*/
      v4 = _RDX->m128i_i32[2]; /*0x141276303*/
      v5 = _RDX->m128i_i16[6]; /*0x141276306*/
      v6 = _RDX->m128i_i8[14]; /*0x14127630b*/
      *(_QWORD *)result = _RDX->m128i_i64[0]; /*0x141276310*/
      *(_DWORD *)(result + 8) = v4; /*0x141276313*/
      *(_WORD *)(result + 12) = v5; /*0x141276316*/
      *(_BYTE *)(result + 14) = v6; /*0x14127631b*/
      return result; /*0x14127631f*/
    default:
      if ( _R8 <= 0x20 ) /*0x1412763f4*/
      {
        v21 = _mm_loadu_si128((const __m128i *)((char *)_RDX + _R8 - 16)); /*0x1412763fa*/
        *_RCX = _mm_loadu_si128(_RDX); /*0x141276401*/
        *(__m128i *)((char *)_RCX + _R8 - 16) = v21; /*0x141276405*/
        return result; /*0x14127640c*/
      }
      v22 = (__m128i *)((char *)_RDX + _R8); /*0x14127640d*/
      if ( _RCX <= _RDX ) /*0x141276414*/
        v22 = _RCX; /*0x141276414*/
      if ( _RCX < v22 ) /*0x14127641b*/
      {
        v69 = *_RDX; /*0x141276870*/
        v70 = (char *)((char *)_RDX - (char *)_RCX); /*0x141276873*/
        v71 = &_RCX->m128i_i8[_R8]; /*0x141276876*/
        v72 = *(_OWORD *)&v70[(_QWORD)v71 - 16]; /*0x141276879*/
        v73 = (unsigned __int64)(v71 - 16); /*0x14127687e*/
        v74 = _R8 - 16; /*0x141276882*/
        if ( (v73 & 0xF) != 0 ) /*0x141276889*/
        {
          v75 = (_OWORD *)v73; /*0x14127688b*/
          v73 &= 0xFFFFFFFFFFFFFFF0uLL; /*0x14127688e*/
          v76 = v72; /*0x141276892*/
          v72 = *(_OWORD *)&v70[v73]; /*0x141276895*/
          *v75 = v76; /*0x141276899*/
          v74 = v73 - result; /*0x1412768a0*/
        }
        v77 = v74 >> 7; /*0x1412768a6*/
        if ( v74 >> 7 ) /*0x1412768a6*/
        {
          for ( *(_OWORD *)v73 = v72; ; *(_OWORD *)v73 = v83 ) /*0x1412768ac*/
          {
            v78 = *(_OWORD *)&v70[v73 - 16]; /*0x1412768c7*/
            v79 = *(_OWORD *)&v70[v73 - 32]; /*0x1412768cc*/
            v73 -= 128LL; /*0x1412768d1*/
            *(_OWORD *)(v73 + 112) = v78; /*0x1412768d8*/
            *(_OWORD *)(v73 + 96) = v79; /*0x1412768dc*/
            v80 = *(_OWORD *)&v70[v73 + 64]; /*0x1412768e5*/
            --v77; /*0x1412768ea*/
            *(_OWORD *)(v73 + 80) = *(_OWORD *)&v70[v73 + 80]; /*0x1412768ed*/
            *(_OWORD *)(v73 + 64) = v80; /*0x1412768f1*/
            v81 = *(_OWORD *)&v70[v73 + 32]; /*0x1412768fa*/
            *(_OWORD *)(v73 + 48) = *(_OWORD *)&v70[v73 + 48]; /*0x1412768ff*/
            *(_OWORD *)(v73 + 32) = v81; /*0x141276903*/
            v82 = *(_OWORD *)&v70[v73 + 16]; /*0x141276907*/
            v83 = *(_OWORD *)&v70[v73]; /*0x14127690c*/
            if ( !v77 ) /*0x141276910*/
              break; /*0x141276910*/
            *(_OWORD *)(v73 + 16) = v82; /*0x1412768c0*/
          }
          *(_OWORD *)(v73 + 16) = v82; /*0x141276912*/
          v74 &= 0x7Fu; /*0x141276916*/
          v72 = v83; /*0x14127691a*/
        }
        for ( i = v74 >> 4; i; --i ) /*0x141276920*/
        {
          *(_OWORD *)v73 = v72; /*0x141276930*/
          v73 -= 16LL; /*0x141276933*/
          v72 = *(_OWORD *)&v70[v73]; /*0x141276937*/
        }
        if ( (v74 & 0xF) != 0 ) /*0x141276944*/
          *(__m128i *)result = v69; /*0x141276946*/
        *(_OWORD *)v73 = v72; /*0x141276949*/
        return result; /*0x14127694c*/
      }
      if ( (unsigned int)dword_141963F20 < 3 ) /*0x141276428*/
      {
        if ( _R8 <= 0x800 || (dword_141969A1C & 2) == 0 ) /*0x141276730*/
        {
          v59 = _mm_loadu_si128(_RDX); /*0x141276736*/
          v60 = _mm_loadu_si128((const __m128i *)((char *)_RDX + _R8 - 16)); /*0x14127673a*/
          if ( _R8 > 0x80 ) /*0x141276748*/
          {
            v61 = ((unsigned __int8)_RCX & 0xF) - 16LL; /*0x141276755*/
            _RCX = (__m128i *)((char *)_RCX - v61); /*0x141276759*/
            _RDX = (const __m128i *)((char *)_RDX - v61); /*0x14127675c*/
            _R8 += v61; /*0x14127675f*/
            if ( _R8 > 0x80 ) /*0x141276769*/
            {
              do /*0x1412767da*/
              {
                v62 = _mm_loadu_si128(_RDX + 1); /*0x141276774*/
                v63 = _mm_loadu_si128(_RDX + 2); /*0x141276779*/
                v64 = _mm_loadu_si128(_RDX + 3); /*0x14127677e*/
                *_RCX = _mm_loadu_si128(_RDX); /*0x141276783*/
                _RCX[1] = v62; /*0x141276787*/
                _RCX[2] = v63; /*0x14127678c*/
                _RCX[3] = v64; /*0x141276791*/
                v65 = _mm_loadu_si128(_RDX + 5); /*0x14127679b*/
                v66 = _mm_loadu_si128(_RDX + 6); /*0x1412767a0*/
                v67 = _mm_loadu_si128(_RDX + 7); /*0x1412767a5*/
                _RCX[4] = _mm_loadu_si128(_RDX + 4); /*0x1412767aa*/
                _RCX[5] = v65; /*0x1412767af*/
                _RCX[6] = v66; /*0x1412767b4*/
                _RCX[7] = v67; /*0x1412767b9*/
                _RCX += 8; /*0x1412767be*/
                _RDX += 8; /*0x1412767c5*/
                _R8 -= 128LL; /*0x1412767cc*/
              }
              while ( _R8 >= 0x80 ); /*0x1412767da*/
            }
          }
          v68 = (_R8 + 15) & 0xFFFFFFFFFFFFFFF0uLL; /*0x1412767e0*/
          switch ( v68 >> 4 ) /*0x1412767f6*/
          {
            case 0uLL: /*0x1412767f6*/
              goto LABEL_68;
            case 1uLL: /*0x1412767f6*/
              goto LABEL_67;
            case 2uLL: /*0x1412767f6*/
              goto LABEL_66;
            case 3uLL: /*0x1412767f6*/
              goto LABEL_65;
            case 4uLL: /*0x1412767f6*/
              goto LABEL_64;
            case 5uLL: /*0x1412767f6*/
              goto LABEL_63;
            case 6uLL: /*0x1412767f6*/
              goto LABEL_62;
            case 7uLL: /*0x1412767f6*/
              goto LABEL_61;
            case 8uLL: /*0x1412767f6*/
              *(__m128i *)((char *)_RCX + v68 - 128) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 128)); /*0x141276800*/
LABEL_61:
              *(__m128i *)((char *)_RCX + v68 - 112) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 112)); /*0x141276807*/
LABEL_62:
              *(__m128i *)((char *)_RCX + v68 - 96) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 96)); /*0x141276815*/
LABEL_63:
              *(__m128i *)((char *)_RCX + v68 - 80) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 80)); /*0x141276823*/
LABEL_64:
              *(__m128i *)((char *)_RCX + v68 - 64) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 64)); /*0x141276831*/
LABEL_65:
              *(__m128i *)((char *)_RCX + v68 - 48) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 48)); /*0x14127683f*/
LABEL_66:
              *(__m128i *)((char *)_RCX + v68 - 32) = _mm_loadu_si128((const __m128i *)((char *)_RDX + v68 - 32)); /*0x14127684d*/
LABEL_67:
              *(__m128i *)((char *)_RCX + _R8 - 16) = v60; /*0x14127685b*/
LABEL_68:
              *(__m128i *)result = v59; /*0x141276862*/
              break; /*0x141276866*/
          }
          return result; /*0x141276866*/
        }
        return sub_1412762C0(); /*0x141276457*/
      }
      if ( _R8 > 0x2000 && _R8 <= 0x180000 ) /*0x14127643e*/
      {
        v23 = _RCX + 4; /*0x141276440*/
        if ( _RCX > _RDX ) /*0x141276447*/
          v23 = _RDX; /*0x141276447*/
        if ( v23 <= _RDX && (dword_141969A1C & 2) != 0 ) /*0x141276457*/
          return sub_1412762C0(); /*0x141276457*/
      }
      __asm /*0x14127645d*/
      {
        vmovdqu ymm0, ymmword ptr [rdx]
        vmovdqu ymm5, ymmword ptr [rdx+r8-20h]
      }
      if ( _R8 <= 0x100 /*0x141276490*/
        || (v26 = ((unsigned __int8)_RCX & 0x1F) - 32LL,
            _RCX = (__m128i *)((char *)_RCX - v26),
            _RDX = (const __m128i *)((char *)_RDX - v26),
            _R8 += v26,
            _R8 <= 0x100) )
      {
LABEL_33:
        _R9 = (_R8 + 31) & 0xFFFFFFFFFFFFFFE0uLL; /*0x14127653c*/
        switch ( _R9 >> 5 ) /*0x141276552*/
        {
          case 0uLL: /*0x141276552*/
            goto LABEL_42;
          case 1uLL: /*0x141276552*/
            goto LABEL_41;
          case 2uLL: /*0x141276552*/
            goto LABEL_40;
          case 3uLL: /*0x141276552*/
            goto LABEL_39;
          case 4uLL: /*0x141276552*/
            goto LABEL_38;
          case 5uLL: /*0x141276552*/
            goto LABEL_37;
          case 6uLL: /*0x141276552*/
            goto LABEL_36;
          case 7uLL: /*0x141276552*/
            goto LABEL_35;
          case 8uLL: /*0x141276552*/
            __asm /*0x141276555*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-100h]; jumptable 0000000141276552 case 8
              vmovdqu ymmword ptr [rcx+r9-100h], ymm1
            }
LABEL_35:
            __asm /*0x141276569*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-0E0h]; jumptable 0000000141276552 case 7
              vmovdqu ymmword ptr [rcx+r9-0E0h], ymm1
            }
LABEL_36:
            __asm /*0x14127657d*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-0C0h]; jumptable 0000000141276552 case 6
              vmovdqu ymmword ptr [rcx+r9-0C0h], ymm1
            }
LABEL_37:
            __asm /*0x141276591*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-0A0h]; jumptable 0000000141276552 case 5
              vmovdqu ymmword ptr [rcx+r9-0A0h], ymm1
            }
LABEL_38:
            __asm /*0x1412765a5*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-80h]; jumptable 0000000141276552 case 4
              vmovdqu ymmword ptr [rcx+r9-80h], ymm1
            }
LABEL_39:
            __asm /*0x1412765b3*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-60h]; jumptable 0000000141276552 case 3
              vmovdqu ymmword ptr [rcx+r9-60h], ymm1
            }
LABEL_40:
            __asm /*0x1412765c1*/
            {
              vmovdqu ymm1, ymmword ptr [rdx+r9-40h]; jumptable 0000000141276552 case 2
              vmovdqu ymmword ptr [rcx+r9-40h], ymm1
            }
LABEL_41:
            __asm { vmovdqu ymmword ptr [rcx+r8-20h], ymm5; jumptable 0000000141276552 case 1 } /*0x1412765cf*/
LABEL_42:
            __asm /*0x1412765d6*/
            {
              vmovdqu ymmword ptr [rax], ymm0; jumptable 0000000141276552 case 0
              vzeroupper
            }
            break; /*0x1412765dd*/
        }
        return result; /*0x1412765dd*/
      }
      if ( _R8 <= 0x180000 ) /*0x14127649d*/
      {
        do /*0x141276532*/
        {
          __asm /*0x1412764b0*/
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
          _RCX += 16; /*0x141276516*/
          _RDX += 16; /*0x14127651d*/
          _R8 -= 256LL; /*0x141276524*/
        }
        while ( _R8 >= 0x100 ); /*0x141276532*/
        goto LABEL_33; /*0x141276532*/
      }
      do /*0x141276662*/
      {
        __asm /*0x1412765e0*/
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
        _RCX += 16; /*0x141276646*/
        _RDX += 16; /*0x14127664d*/
        _R8 -= 256LL; /*0x141276654*/
      }
      while ( _R8 >= 0x100 ); /*0x141276662*/
      _R9 = (_R8 + 31) & 0xFFFFFFFFFFFFFFE0uLL; /*0x14127666c*/
      switch ( _R9 >> 5 ) /*0x141276682*/
      {
        case 0uLL: /*0x141276682*/
          goto LABEL_53;
        case 1uLL: /*0x141276682*/
          goto LABEL_52;
        case 2uLL: /*0x141276682*/
          goto LABEL_51;
        case 3uLL: /*0x141276682*/
          goto LABEL_50;
        case 4uLL: /*0x141276682*/
          goto LABEL_49;
        case 5uLL: /*0x141276682*/
          goto LABEL_48;
        case 6uLL: /*0x141276682*/
          goto LABEL_47;
        case 7uLL: /*0x141276682*/
          goto LABEL_46;
        case 8uLL: /*0x141276682*/
          __asm /*0x141276685*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-100h]; jumptable 0000000141276682 case 8
            vmovntdq ymmword ptr [rcx+r9-100h], ymm1
          }
LABEL_46:
          __asm /*0x141276699*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-0E0h]; jumptable 0000000141276682 case 7
            vmovntdq ymmword ptr [rcx+r9-0E0h], ymm1
          }
LABEL_47:
          __asm /*0x1412766ad*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-0C0h]; jumptable 0000000141276682 case 6
            vmovntdq ymmword ptr [rcx+r9-0C0h], ymm1
          }
LABEL_48:
          __asm /*0x1412766c1*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-0A0h]; jumptable 0000000141276682 case 5
            vmovntdq ymmword ptr [rcx+r9-0A0h], ymm1
          }
LABEL_49:
          __asm /*0x1412766d5*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-80h]; jumptable 0000000141276682 case 4
            vmovntdq ymmword ptr [rcx+r9-80h], ymm1
          }
LABEL_50:
          __asm /*0x1412766e3*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-60h]; jumptable 0000000141276682 case 3
            vmovntdq ymmword ptr [rcx+r9-60h], ymm1
          }
LABEL_51:
          __asm /*0x1412766f1*/
          {
            vmovdqu ymm1, ymmword ptr [rdx+r9-40h]; jumptable 0000000141276682 case 2
            vmovntdq ymmword ptr [rcx+r9-40h], ymm1
          }
LABEL_52:
          __asm { vmovdqu ymmword ptr [rcx+r8-20h], ymm5; jumptable 0000000141276682 case 1 } /*0x1412766ff*/
LABEL_53:
          __asm { vmovdqu ymmword ptr [rax], ymm0; jumptable 0000000141276682 case 0 } /*0x141276706*/
          _mm_sfence(); /*0x14127670a*/
          __asm { vzeroupper } /*0x14127670d*/
          break; /*0x141276710*/
      }
      return result;
  }
}